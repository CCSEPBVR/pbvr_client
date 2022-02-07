/*****************************************************************************/
/**
 *  @file   Scene.h
 *  @author Insight, Inc.
 */
/*****************************************************************************/
#pragma once

#include <kvs/Mouse>
#include <kvs/ScreenBase>
#include <kvs/Scene>
#include <kvs/Light>
#include <kvs/Xform>
#include "screen.h"
#include <vector>
#include <set>
#include <iostream>
#include <cmath>

namespace kvs
{

namespace oculus
{

namespace jaea
{
class Camera;
class Light;
class Mouse;
class Background;
class ObjectManager;
class RendererManager;
class IDManager;
class ObjectBase;
class RendererBase;

/*===========================================================================*/
/**
 *  @brief  Default scene class.
 */
/*===========================================================================*/
class Scene : public kvs::Scene
{
public:
//    kvs::Vec3 m_prev_left_p;
//    kvs::Vec3 m_prev_right_p;

private:
    kvs::Real32 m_scaling_ratio_accum;

public:
    Scene( kvs::ScreenBase* screen );

#ifdef USE_OLD_TRANSLATION
    void threedcontrollerPressFunction (kvs::Vec3 eyePos, kvs::Vec3 eyeDir, kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 m_prev_left_p, kvs::Vec3 m_prev_right_p, kvs::Vec3 m_start_left_p, kvs::Vec3 m_start_right_p);
    void threedcontrollerReleaseFunction (kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 m_prev_left_p, kvs::Vec3 m_prev_right_p, kvs::Vec3 m_start_left_p, kvs::Vec3 m_start_right_p);
#else // USE_OLD_TRANSLATION
    void threedcontrollerPressFunction (kvs::Vec3 hmdPos, kvs::Vec3 initialHmdPos, kvs::Vec3 hmdDir, kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 prev_left_p, kvs::Vec3 prev_right_p);
    void threedcontrollerReleaseFunction (kvs::Vec3 hmdPos, kvs::Vec3 initialHmdPos, kvs::Vec3 hmdDir, kvs::Vec3 left_p, kvs::Vec3 right_p, kvs::Vec3 prev_left_p, kvs::Vec3 prev_right_p);
#endif // USE_OLD_TRANSLATION

//    kvs::Real32 getScalingRatioAccum() {return m_scaling_ratio_accum;};
    kvs::Real32 getScalingRatioAccum();

    void resetObjects();

private:
#ifdef USE_OLD_TRANSLATION
    float calcTranslationFactor(kvs::Vec3 cameraPos, kvs::Vec3 cameraDir, float prev_x, float prev_y, float prev_z);
//    float calcRotationFactor();
#else // USE_OLD_TRANSLATION
    float calcTranslationFactor(kvs::Vec3 hmdPos, kvs::Vec3 hmdDir, kvs::Vec3 hand_prev, kvs::Vec3 cameraPos);
#endif // USE_OLD_TRANSLATION

};

} // jaea

} // end of namespace oculus

} // end of namespace kvs
