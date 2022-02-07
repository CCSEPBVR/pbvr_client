/*****************************************************************************/
/**
 *  @file   Scene.cpp
 *  @author Insight, Inc.
 */
/*****************************************************************************/
#include "Scene.h"
#include "screen.h"

#include <kvs/ScreenBase>
//追加
#include <kvs/ObjectManager>
#include <kvs/Xform>
#include <iostream>
#include <vector>
#include <cmath>
#include <kvs/ObjectBase>

#include "objnameutil.h"

namespace kvs {
namespace oculus {
namespace jaea {
/*===========================================================================*/
/**
 *  @brief  Constructs a new Scene class.
 */
/*===========================================================================*/
Scene::Scene( kvs::ScreenBase* screen ): 
    kvs::Scene( screen ),
    m_scaling_ratio_accum(1.0)
{
#ifdef DEBUG_SCENE
    std::cout << "kvs::oculus::jaea::Scene constructed." << std::endl;
#endif // DEBUG_SCENE
}

#ifdef USE_OLD_TRANSLATION
float Scene::calcTranslationFactor(kvs::Vec3 cameraPos, kvs::Vec3 cameraDir, float prev_x, float prev_y, float prev_z)
{
#ifdef USE_OBJMANAGER_EXTCENTER
    kvs::ObjectBase* target = objectManager()->hasActiveObject() ? objectManager()->activeObject() : objectManager();
    kvs::Xform xform = target->xform();
    //kvs::Vec3 objCenter = xform.project(target->externalCenter());
    //kvs::Vec3 objCenter = xform.transform(target->externalCenter());
    kvs::Vec3 objCenter = (xform.toMatrix() * kvs::Vec4(target->externalCenter(),1)).xyz();
#else  // USE_OBJMANAGER_EXTCENTER
    int counter = 0;
    kvs::Vec3 objCenter = kvs::Vec3::Zero();

    for (int iobj = 0; iobj < objectManager()->numberOfObjects(); iobj++) {
        kvs::ObjectBase *obj = objectManager()->object(iobj);
        if (obj != nullptr &&
            obj->isShown() &&
            !kvs::oculus::jaea::pbvr::ObjectNameUtil::isToIgnoreTranslationFactor(obj->name())) {
            counter++;

            kvs::Vec3 extCenter3 = obj->externalCenter();
            kvs::Vec4 extCenter4 = kvs::Vec4(extCenter3,1);
            kvs::Mat4 xform = obj->xform().toMatrix();
            kvs::Vec4 objCenter4 = xform * extCenter4;
            kvs::Vec3 objCenter3 = objCenter4.xyz();
            objCenter += objCenter3;

#ifdef DEBUG_SCENE
            std::fprintf (stderr, "obj[%d](%s) : extCenter(% e % e % e) -> (% e % e % e)\n", iobj, obj->name().c_str(), extCenter3.x(), extCenter3.y(), extCenter3.z(), objCenter3.x(), objCenter3.y(), objCenter3.z());
            std::fprintf (stderr, "obj[%d].xform0 | % e % e % e % e |\n", iobj, xform[0][0], xform[0][1], xform[0][2], xform[0][3]);
            std::fprintf (stderr, "obj[%d].xform1 | % e % e % e % e |\n", iobj, xform[1][0], xform[1][1], xform[1][2], xform[1][3]);
            std::fprintf (stderr, "obj[%d].xform2 | % e % e % e % e |\n", iobj, xform[2][0], xform[2][1], xform[2][2], xform[2][3]);
            std::fprintf (stderr, "obj[%d].xform3 | % e % e % e % e |\n", iobj, xform[3][0], xform[3][1], xform[3][2], xform[3][3]);
#endif // DEBUG_SCENE

//            objCenter += (obj->xform().toMatrix() * kvs::Vec4(obj->externalCenter(),1)).xyz();
        }
    }
    if (counter > 0) {
        objCenter /= ((float)counter);
    }
#endif // USE_OBJMANAGER_EXTCENTER

    // eye direction
#if 0
    float xe = cameraDir.x() - cameraPos.x();
    float ye = cameraDir.y() - cameraPos.y();
    float ze = cameraDir.z() - cameraPos.z();
#else
    float len = cameraDir.length();
    float xe = cameraDir.x() / len;
    float ye = cameraDir.y() / len;
    float ze = cameraDir.z() / len;
#endif
    // center of object
    kvs::Vec3 objCameraPos = cameraPos - Screen::KVS_CAMERA_INITIAL_POSITION;
    kvs::Vec3 o = objCenter - objCameraPos;
//    kvs::Vec3 o = objCenter - cameraPos + Screen::KVS_CAMERA_INITIAL_POSITION;
    float xo = o.x();
    float yo = o.y();
    float zo = o.z();
    // mid-point of hands
    float xh = prev_x - cameraPos.x();
    float yh = prev_y - cameraPos.y();
    float zh = prev_z - cameraPos.z();

    float objDistance = ::fabs(xe*xo + ye*yo + ze*zo);
    float handDistance = ::fabs(xe*xh + ye*yh + ze*zh);

#ifdef DEBUG_SCENE
    std::cerr << "camera=h(" << cameraPos.x() << ", " << cameraPos.y() << ", " << cameraPos.z() << "), o(" << objCameraPos.x() << ", " << objCameraPos.y() << ", " << objCameraPos.z() << ")" << std::endl;
    std::cerr << "ve=g(" << cameraDir.x() << ", " << cameraDir.y() << ", " << cameraDir.z() << "), c(" << xe << ", " << ye << ", " << ze << ")" << std::endl;
    std::cerr << "vo=g(" << objCenter.x() << ", " << objCenter.y() << ", " << objCenter.z() << "), c(" << xo << ", " << yo << ", " << zo << ")" << std::endl;
    std::cerr << "vh=g(" << prev_x << ", " << prev_y << ", " << prev_z << "), c(" << xh << ", " << yh << ", " << zh << ")" << std::endl;
    std::cerr << "diatance : obj=" << objDistance << ", hand=" << handDistance << std::endl;
#endif

    if (handDistance < 1e-100) {
        return 1.0;
    }
    return objDistance / handDistance;
}

void Scene::threedcontrollerPressFunction (kvs::Vec3 eyePos, kvs::Vec3 eyeDir, kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 m_prev_left_p, kvs::Vec3 m_prev_right_p, kvs::Vec3 m_start_left_p, kvs::Vec3 m_start_right_p)
{
    kvs::Vec3 center_current = (left_p + right_p) / 2.0f;
    kvs::Vec3 center_prev = (m_prev_left_p + m_prev_right_p) / 2.0f;

    // diff
    kvs::Vec3 center_diff = center_current - center_prev;
    
#ifdef USE_SCENE_EXTENSION_FOR_HANDCONTROLLER
    kvs::Mat4 quaternion_mat = kvs::Mat4::Identity();
#endif // USE_SCENE_EXTENSION_FOR_HANDCONTROLLER

    // scaling
    const float current_distance = (left_p - right_p).length();
    const float prev_distance = (m_prev_left_p - m_prev_right_p).length();
    const float scaling_ratio = current_distance / prev_distance;

#ifdef USE_SCENE_EXTENSION_FOR_HANDCONTROLLER
    quaternion_mat[0][0] = scaling_ratio;
    quaternion_mat[1][1] = scaling_ratio;
    quaternion_mat[2][2] = scaling_ratio;
#endif // USE_SCENE_EXTENSION_FOR_HANDCONTROLLER

    float scaling_ratio_accum = this->getScalingRatioAccum();

    // translation
    float translation_factor = calcTranslationFactor (eyePos, eyeDir, center_prev.x(), center_prev.y(), center_prev.z());
    //kvs::Vec3 diff_translate = center_diff * translation_factor / scaling_ratio_accum;
    kvs::Vec3 diff_translate = center_diff * translation_factor;

#ifdef DEBUG_SCENE
    std::cerr << "3DController : trans=(" << diff_translate.x() << ", " << diff_translate.y() << ", " << diff_translate.z() << "), factor=" << translation_factor << ", scaling=" << scaling_ratio_accum << std::endl;
#endif // DEBUG_SCENE

#ifdef USE_SCENE_EXTENSION_FOR_HANDCONTROLLER
    quaternion_mat[0][3] = diff_translate.x();
    quaternion_mat[1][3] = diff_translate.y();
    quaternion_mat[2][3] = diff_translate.z();
#endif // USE_SCENE_EXTENSION_FOR_HANDCONTROLLER

//#ifdef DEBUG_SCENE
//    std::cerr << "  trans_factor       = " << translation_factor << std::endl;
//    std::cerr << "  scaling_ratio      = " << scaling_ratio << std::endl;
//    std::cerr << "  scaling_ratio_accum= " << scaling_ratio_accum << std::endl;
//#endif

    // rotation
    kvs::Vec3 current_rotation = left_p - right_p;
    kvs::Vec3 prev_rotation = m_prev_left_p - m_prev_right_p;
    kvs::Vec3 rotation_axis = ((current_rotation.cross(prev_rotation)).normalized())*(-1.0f);

    float cos = (current_rotation.dot(prev_rotation))/(current_rotation.length() * prev_rotation.length());
    cos = kvs::Math::Clamp(cos, -1.0f, 1.0f);
    float rotation_degree = kvs::Math::Rad2Deg(acos(cos));
    kvs::Mat3 rotation_mat = kvs::Mat3::Rotation(rotation_axis, rotation_degree);
    
#ifdef USE_SCENE_EXTENSION_FOR_HANDCONTROLLER
    kvs::Mat4 rotation_mat4 = kvs::Mat4::Identity();
    rotation_mat4[0][0] = rotation_mat[0][0]; rotation_mat4[0][1] = rotation_mat[0][1]; rotation_mat4[0][2] = rotation_mat[0][2];
    rotation_mat4[1][0] = rotation_mat[1][0]; rotation_mat4[1][1] = rotation_mat[1][1]; rotation_mat4[1][2] = rotation_mat[1][2];
    rotation_mat4[2][0] = rotation_mat[2][0]; rotation_mat4[2][1] = rotation_mat[2][1]; rotation_mat4[2][2] = rotation_mat[2][2];

    quaternion_mat *= rotation_mat4;
    const kvs::Xform quaternion = kvs::Xform( quaternion_mat );

    objectManager()->handscontroller(quaternion);
#else // USE_SCENE_EXTENSION_FOR_HANDCONTROLLER
    kvs::Vec3 param_scale (scaling_ratio, scaling_ratio, scaling_ratio);
    kvs::Vec3 param_trans = diff_translate;
    kvs::Mat3 param_rot = rotation_mat;

#ifdef DEBUG_SCENE
    auto old_obj_xform = objectManager()->xform().toMatrix();
    auto old_obj_pos = (old_obj_xform * kvs::Vec4(objectManager()->externalCenter(),1)).xyz();
#endif // DEBUG_SCENE

    objectManager()->scale(param_scale);
    objectManager()->translate(param_trans);
    objectManager()->rotate(param_rot);

#ifdef DEBUG_SCENE
    auto new_obj_xform = objectManager()->xform().toMatrix();
    auto new_obj_pos = (new_obj_xform * kvs::Vec4(objectManager()->externalCenter(),1)).xyz();

    std::fprintf (stderr,
                  "- PressFunction -------------------\n"
                  "param : scale=% e, trans=(% e % e % e)\n"
                  "prev | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |\n"
                  "new  | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |\n"              ,
                  param_scale[0], param_trans[0], param_trans[1], param_trans[2],
                  old_obj_xform[0][0], old_obj_xform[0][1], old_obj_xform[0][2], old_obj_xform[0][3], old_obj_pos[0], center_prev[0],
                  old_obj_xform[1][0], old_obj_xform[1][1], old_obj_xform[1][2], old_obj_xform[1][3], old_obj_pos[1], center_prev[1],
                  old_obj_xform[2][0], old_obj_xform[2][1], old_obj_xform[2][2], old_obj_xform[2][3], old_obj_pos[2], center_prev[2],
                  old_obj_xform[3][0], old_obj_xform[3][1], old_obj_xform[3][2], old_obj_xform[3][3],
                  new_obj_xform[0][0], new_obj_xform[0][1], new_obj_xform[0][2], new_obj_xform[0][3], new_obj_pos[0], center_current[0],
                  new_obj_xform[1][0], new_obj_xform[1][1], new_obj_xform[1][2], new_obj_xform[1][3], new_obj_pos[1], center_current[1],
                  new_obj_xform[2][0], new_obj_xform[2][1], new_obj_xform[2][2], new_obj_xform[2][3], new_obj_pos[2], center_current[2],
                  new_obj_xform[3][0], new_obj_xform[3][1], new_obj_xform[3][2], new_obj_xform[3][3]);
#endif // DEBUG_SCENE

#endif // USE_SCENE_EXTENSION_FOR_HANDCONTROLLER

}

void Scene::threedcontrollerReleaseFunction (kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 m_prev_left_p, kvs::Vec3 m_prev_right_p, kvs::Vec3 m_start_left_p, kvs::Vec3 m_start_right_p)
{
    // m_enable_object_operation = true;
    // m_enable_collision_detection = false;
    objectManager()->releaseActiveObject();
}

#else // USE_OLD_TRANSLATION
float Scene::calcTranslationFactor(kvs::Vec3 hmdPos, kvs::Vec3 hmdDir, kvs::Vec3 hand_prev, kvs::Vec3 cameraPos)
{
    int counter = 0;
    kvs::Vec3 objCenter = kvs::Vec3::Zero();

    for (int iobj = 0; iobj < objectManager()->numberOfObjects(); iobj++) {
        kvs::ObjectBase *obj = objectManager()->object(iobj);
        if (obj != nullptr &&
            obj->isShown() &&
            !kvs::oculus::jaea::pbvr::ObjectNameUtil::isToIgnoreTranslationFactor(obj->name())) {
            counter++;

            kvs::Vec3 extCenter3 = obj->externalCenter();
            kvs::Vec4 extCenter4 = kvs::Vec4(extCenter3,1);
            kvs::Mat4 xform = obj->xform().toMatrix();
            kvs::Vec4 objCenter4 = xform * extCenter4;
            kvs::Vec3 objCenter3 = objCenter4.xyz();
            objCenter += objCenter3;

#ifdef DEBUG_SCENE
            std::fprintf (stderr, "obj[%d](%s) : extCenter(% e % e % e) -> (% e % e % e)\n", iobj, obj->name().c_str(), extCenter3.x(), extCenter3.y(), extCenter3.z(), objCenter3.x(), objCenter3.y(), objCenter3.z());
            std::fprintf (stderr, "obj[%d].xform0 | % e % e % e % e |\n", iobj, xform[0][0], xform[0][1], xform[0][2], xform[0][3]);
            std::fprintf (stderr, "obj[%d].xform1 | % e % e % e % e |\n", iobj, xform[1][0], xform[1][1], xform[1][2], xform[1][3]);
            std::fprintf (stderr, "obj[%d].xform2 | % e % e % e % e |\n", iobj, xform[2][0], xform[2][1], xform[2][2], xform[2][3]);
            std::fprintf (stderr, "obj[%d].xform3 | % e % e % e % e |\n", iobj, xform[3][0], xform[3][1], xform[3][2], xform[3][3]);
#endif // DEBUG_SCENE
        }
    }
    if (counter > 0) {
        objCenter /= ((float)counter);
    }

    // eye direction
    float len = hmdDir.length();
    kvs::Vec3 dir = (len < 1e-20) ? hmdDir : hmdDir / len;

    // center of object
    kvs::Vec3 o = objCenter - cameraPos;
    float objDistance  = ::fabs(dir.x()*o.x() + dir.y()*o.y() + dir.z()*o.z());

    // mid-point of hands
    kvs::Vec3 h = hand_prev - hmdPos;
    float handDistance = ::fabs(dir.x()*h.x() + dir.y()*h.y() + dir.z()*h.z());

#ifdef DEBUG_SCENE
    std::cerr << "camera=h(" << hmdPos.x() << ", " << hmdPos.y() << ", " << hmdPos.z() << "), o(" << cameraPos.x() << ", " << cameraPos.y() << ", " << cameraPos.z() << ")" << std::endl;
    std::cerr << "ve=g(" << hmdDir.x() << ", " << hmdDir.y() << ", " << hmdDir.z() << "), c(" << dir.x() << ", " << dir.y() << ", " << dir.z() << ")" << std::endl;
    std::cerr << "vo=g(" << objCenter.x() << ", " << objCenter.y() << ", " << objCenter.z() << "), c(" << o.x() << ", " << o.y() << ", " << o.z() << ")" << std::endl;
    std::cerr << "vh=g(" << hand_prev.x() << ", " << hand_prev.y() << ", " << hand_prev.z()<< "), c(" << h.x() << ", " << h.y() << ", " << h.z() << ")" << std::endl;
    std::cerr << "diatance : obj=" << objDistance << ", hand=" << handDistance << std::endl;
#endif

    if (handDistance < 1e-100) {
        return 1.0;
    }
    return objDistance / handDistance;
}

void Scene::threedcontrollerPressFunction (kvs::Vec3 hmdPos, kvs::Vec3 initialHmdPos, kvs::Vec3 hmdDir, kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 prev_left_p, kvs::Vec3 prev_right_p) {
    // scaling
    float current_distance = (left_p - right_p).length();
    float prev_distance = (prev_left_p - prev_right_p).length();
    float scaling_ratio = current_distance / prev_distance;
    float scaling_ratio_accum = this->getScalingRatioAccum();

    // translation
    kvs::Vec3 center_current = (left_p + right_p) / 2.0f;
    kvs::Vec3 center_prev = (prev_left_p + prev_right_p) / 2.0f;
    kvs::Vec3 center_diff = center_current - center_prev;
    kvs::Vec3 cameraPos = Screen::KVS_CAMERA_INITIAL_POSITION + hmdPos - initialHmdPos;
    float translation_factor = calcTranslationFactor (hmdPos, hmdDir, center_prev, cameraPos);
    //kvs::Vec3 diff_translate = center_diff * translation_factor / scaling_ratio_accum;
    kvs::Vec3 diff_translate = center_diff * translation_factor;

#ifdef DEBUG_SCENE
    std::cerr << "3DController : trans=(" << diff_translate.x() << ", " << diff_translate.y() << ", " << diff_translate.z() << "), factor=" << translation_factor << ", scaling=" << scaling_ratio_accum << std::endl;
#endif // DEBUG_SCENE

    // rotation
    kvs::Vec3 current_rotation = left_p - right_p;
    kvs::Vec3 prev_rotation = prev_left_p - prev_right_p;
    kvs::Vec3 rotation_axis = ((current_rotation.cross(prev_rotation)).normalized())*(-1.0f);

    float cos = (current_rotation.dot(prev_rotation))/(current_rotation.length() * prev_rotation.length());
    cos = kvs::Math::Clamp(cos, -1.0f, 1.0f);
    float rotation_degree = kvs::Math::Rad2Deg(acos(cos));
    kvs::Mat3 rotation_mat = kvs::Mat3::Rotation(rotation_axis, rotation_degree);

    kvs::Vec3 param_scale (scaling_ratio, scaling_ratio, scaling_ratio);
    kvs::Vec3 param_trans = diff_translate;
    kvs::Mat3 param_rot = rotation_mat;

#ifdef DEBUG_SCENE
    auto old_obj_xform = objectManager()->xform().toMatrix();
    auto old_obj_pos = (old_obj_xform * kvs::Vec4(objectManager()->externalCenter(),1)).xyz();
#endif // DEBUG_SCENE

    objectManager()->scale(param_scale);
    objectManager()->translate(param_trans);
    objectManager()->rotate(param_rot);

#ifdef DEBUG_SCENE
    auto new_obj_xform = objectManager()->xform().toMatrix();
    auto new_obj_pos = (new_obj_xform * kvs::Vec4(objectManager()->externalCenter(),1)).xyz();

    std::fprintf (stderr,
                  "- PressFunction -------------------\n"
                  "param : scale=% e, trans=(% e % e % e)\n"
                  "prev | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |\n"
                  "new  | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |  % e  ::  % e\n"
                  "     | % e % e % e % e |\n"              ,
                  param_scale[0], param_trans[0], param_trans[1], param_trans[2],
                  old_obj_xform[0][0], old_obj_xform[0][1], old_obj_xform[0][2], old_obj_xform[0][3], old_obj_pos[0], center_prev[0],
                  old_obj_xform[1][0], old_obj_xform[1][1], old_obj_xform[1][2], old_obj_xform[1][3], old_obj_pos[1], center_prev[1],
                  old_obj_xform[2][0], old_obj_xform[2][1], old_obj_xform[2][2], old_obj_xform[2][3], old_obj_pos[2], center_prev[2],
                  old_obj_xform[3][0], old_obj_xform[3][1], old_obj_xform[3][2], old_obj_xform[3][3],
                  new_obj_xform[0][0], new_obj_xform[0][1], new_obj_xform[0][2], new_obj_xform[0][3], new_obj_pos[0], center_current[0],
                  new_obj_xform[1][0], new_obj_xform[1][1], new_obj_xform[1][2], new_obj_xform[1][3], new_obj_pos[1], center_current[1],
                  new_obj_xform[2][0], new_obj_xform[2][1], new_obj_xform[2][2], new_obj_xform[2][3], new_obj_pos[2], center_current[2],
                  new_obj_xform[3][0], new_obj_xform[3][1], new_obj_xform[3][2], new_obj_xform[3][3]);
#endif // DEBUG_SCENE
}

void Scene::threedcontrollerReleaseFunction (kvs::Vec3 hmdPos, kvs::Vec3 initialHmdPos, kvs::Vec3 hmdDir, kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 prev_left_p, kvs::Vec3 prev_right_p) {
    objectManager()->releaseActiveObject();
}

#endif // USE_OLD_TRANSLATION


kvs::Real32 Scene::getScalingRatioAccum() {
    kvs::Xform x = objectManager()->xform();
    kvs::Vec3 scale = x.scaling();
    return (scale.x() + scale.y() + scale.z()) / 3.0f;
}

void Scene::resetObjects()
{
    // Reset the xform of the object.
    if ( this->objectManager()->hasActiveObject() )
    {
        this->objectManager()->resetActiveObjectXform();
    }
    else
    {
        this->objectManager()->resetXform();
    }

}

} // end of namespace jaea

} // end of namespace oculus

} // end of namespace kvs
