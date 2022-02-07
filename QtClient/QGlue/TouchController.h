#pragma once
#include "ControllerBase.h"
#include "headmounteddisplay.h"
#include "widgethandler.h"
#include "TexturedPolygonObject.h"
#include "StochasticTexturedPolygonRenderer.h"

#include <kvs/Scene>
#include <kvs/PointObject>
#include <kvs/LineObject>
//#include <kvs/LineRenderer>
#include <kvs/StochasticLineRenderer>
#include <kvs/PolygonObject>
#include <kvs/StochasticPolygonRenderer>
#include <kvs/PolygonRenderer>
//#include <kvs/VolumeObjectBase>
//#include <kvs/ArrowGlyph>

#include <map>
#include <set>

namespace kvs
{

namespace oculus
{
namespace jaea
{
class TexturedPolygonObject;
class StochasticTexturedPolygonRenderer;

class TouchController : public kvs::oculus::jaea::ControllerBase
{
private:
    // added 20210111
    bool m_is_first_frame;

    // mapping tables for char->texId and texId->filename
    std::map<char, int> m_char_index_map;
    std::map<int, std::string> m_index_filename_map;

    //bool m_is_grabbed;
    bool m_both_is_grabbed;

    bool m_button_a_pressed;
    bool m_button_b_pressed;
    bool m_button_x_pressed;
    bool m_button_y_pressed;

    float m_touch_distance;
    float m_rotation_factor;
    float m_translation_factor;
    float m_scaling_factor;
    kvs::Vec3 m_rot_start_pos_right;

    kvs::Vec3 m_prev_left_p;
    kvs::Vec3 m_prev_right_p;
    kvs::Vec3 m_start_left_p;
    kvs::Vec3 m_start_right_p;

    kvs::Vec3 m_initial_head_p;

    kvs::oculus::jaea::WidgetHandler *m_widget_handler;

    // vr hands
    kvs::PolygonObject* m_vr_hands;
    kvs::StochasticPolygonRenderer* m_vr_hands_renderer;
    //kvs::PolygonRenderer* m_vr_hands_renderer;
    int m_vr_hands_renderer_id;

    // control sphere
    int m_control_sphere_id;
    kvs::LineObject* m_control_sphere;
    kvs::StochasticLineRenderer* m_control_sphere_renderer;

    // bounding box
    kvs::LineObject* m_bounding_box;
    kvs::StochasticLineRenderer* m_bounding_box_renderer;

    // submesh of bounding box
    kvs::LineObject* m_bounding_box_submesh;
    kvs::StochasticLineRenderer* m_bounding_box_submesh_renderer;

    // scale labels for submesh
    //kvs::jaea::TexturedPolygonObject* m_test_scale_box;
    //kvs::jaea::StochasticTexturedPolygonRenderer* m_test_scale_box_renderer;
    kvs::jaea::TexturedPolygonObject* m_bounding_box_labels;
    kvs::jaea::StochasticTexturedPolygonRenderer* m_bounding_box_labels_renderer;
    int m_bounding_box_labels_renderer_id;

    // bounding box submesh parameters.
    kvs::Real32 m_bouniding_box_scaling_ratio_min;
    kvs::Real32 m_bouniding_box_scaling_ratio_max;
    kvs::Real32 m_bounding_box_scaling_ratio;


public:
    // default values for rescale submesh of bounding box
    constexpr static kvs::Real32 DEAFULT_SCALING_RATIO = 1.0f;
    constexpr static kvs::Real32 DEFAULT_THRESHOLD_MIN = 1.0f;
    constexpr static kvs::Real32 DEFAULT_THRESHOLD_MAX = 2.0;

private:
    void initializeNumberTextureMaps();
    MouseStatus getMouseStatus ();

protected:
    virtual void initializeScaleLabel();
    virtual void rebuildControlSphere();
    virtual void rebuildBoundingBox(bool force_rebuild_submesh);
    virtual void checkScalingRatio(kvs::Real32 scaling_ratio, bool force_update = false);

public:
    //TouchController( kvs::oculus::jaea::Screen* screen );
//    TouchController( Screen* screen );
    TouchController( kvs::oculus::jaea::HeadMountedDisplay& hmd, kvs::Scene *scene );

    float rotationFactor() const { return m_rotation_factor; }
    float translationFactor() const { return m_translation_factor; }
    float scalingFactor() const { return m_scaling_factor; }
    void setRotationFactor( const float factor ) { m_rotation_factor = factor; }
    void setTranslationFactor( const float factor ) { m_translation_factor = factor; }
    void setScalingFactor( const float factor ) { m_scaling_factor = factor; }

    void setWidgetHandler (kvs::oculus::jaea::WidgetHandler *handler) {
        m_widget_handler = handler;
    }

    virtual void initializeEvent();
    virtual void frameEvent();
};

} // end of namespace jaea

} // end of namespace oculus

} // end of namespace kvs
