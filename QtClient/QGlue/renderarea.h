#ifndef KVSQScreen_H
#define KVSQScreen_H

#include "screen.h"

#include "Client/PBRProxy.h"
#include <QGlue/labelbase.h>
#include <QGlue/legendbar.h>
#include <QGlue/timer.h>
#include <QGlue/orientationaxis.h>
#include "Client/TimerEvent.h"
//KVS2.7.0
//MOD BY)T.Osaki 2020.06.04
#include <kvs/Scene>
#include <kvs/Mouse>
#define PBVR_DEBUG
#define PBVR_IMAGE         0
#define PBVR_I_H_OFFSET   55
#define DEFAULT_MSEC    2000

class PBVRGUI;

/**
 * @brief The RenderArea class extends the PBVR Screen class with functionality
 *        for rendering additional components, such as orientation axis, and legend.
 *
 *        The RenderArea class is also responsible for all passing all interaction with the scene,
 *        point object, and renderer from other classes in PBVR.
 *
 *        It is also responsible for handling mouse and keyboard events.
 *
 */
//KVS2.7.0
//MOD BY)T.Osaki 2020.06.04
class RenderArea : public Screen
{
private:
    /**
     * @brief The PointObjectProxy class, Swappable kvsPointObject
     *        This class will act as a kvs::PointObject when interacting with kvs.
     *
     *        However it is a proxy, backed by two different kvs::PointObjects
     *        This allows swaping of the active point object to overcome kvs limitation
     *        where it doesn't detect that a single point object is modified and then re-added to the scene.
     *
     *        This is intended to replace the getObject() method of TimerEvent, but
     *        is safer as the returned point object is guarantueed to be non-null.
     */
    class PointObjectProxy: public kvs::PointObject
    {

    private:
        kvs::PointObject list[2]; // object list
        int index=0;

        /**
         * @brief active , active returns the currently active object from the object list
         * @return The currently active point object
         */
        kvs::PointObject* active(){
            return &list[index];
        }

    public:
        /**
         * @brief swap, swaps front object and back object
         * @return
         */
        kvs::PointObject* swap(){
            index=!index;
            return active();
        }
        /**
         * @brief operator ->  Dereference operator. Allows PointObjectProxy methods and members
         *                     of the active object to be accessed as if interacting with a standard kvs::PointObject.
         * @return kvs::PointObject* to currently active object
         */
        kvs::PointObject *operator->()
        {
            return active();
        }
        /**
         * @brief operator kvs::PointObject *  When try to cast to or pass this object as kvs::PointObject,
         *                 use the currently active object
         */
        operator kvs::PointObject*(){
            return active();
        }
    };
    static PointObjectProxy m_point_object;


public:

    explicit RenderArea( QWidget* parent_surface);

    //MOD BY)T.Osaki 2020.06.29
    //static void ScreenShot( kvs::ScreenBase* screen, const int tstep );
    //static void ScreenShotKeyFrame( kvs::ScreenBase* screen, const int tstep );

    static void ScreenShot( kvs::Scene* scene, const int tstep );
    static void ScreenShotKeyFrame( kvs::Scene* scene, const int tstep );

    void drawLabelList( QList<QGlue::Label*> list,QColor fontColor);
    void keyPressEvent(QKeyEvent *kbEvent);
    //    void redraw( void ){ this->update();}

    void setCoordinateBoundaries(float  crd[6]);
    void setGeometry( QRect geom );
    void setLabelFont(const QFont& f);
    void setSize( const int width, const int height );

//    void setShaderParams( );
    void setupEventHandlers( );
    void updateCommandInfo(ExtCommand* command_q);

    // Public access methods for interacting with private renderer.
    void enableRendererShading();
    void setRenderSubPixelLevel(int level);
    void setRenderRepetitionLevel(int level);
//    void recreateRenderImageBuffer(int level);

    // Public access methods for interacting with private point object.
    kvs::Xform getPointObjectXform();
    void setPointObjectXform(kvs::Xform xf);
    void attachPointObject(const kvs::PointObject *point, int sp_level);


public:
    static char shadinglevel[256];
    static kvs::visclient::TimerEvent* g_timer_event;

    size_t frame_number=0;

    QGlue::StepLabel*       m_stepLabel=NULL;
    QGlue::FPSLabel*        m_fpsLabel=NULL;
    QGlue::LegendBar*       g_legend=NULL;
    QGlue::OrientationAxis* m_orientation_axis=NULL;
    QGlue::Timer*           qt_timer;

    QList<QGlue::Label*>     m_labels;

    void toggleTimer(bool state){
        if (state)
            qt_timer->start();
        else
            qt_timer->stop();
    }
private:
    std::pair<int, int> m_obj_id_pair;
    kvs::Xform m_stored_xf;
    int i_w=0;
    int i_h=0;
    //    int yl0=0;
    int msec = DEFAULT_MSEC;
    //    MOD BY)T.Osaki 2020.04.28
    float pixelRatio=1;
    SwitchablePBRProxy m_renderer;

    int m_reset_count = 0;

    void storeCurrentXForm();
    void restoreXForm();
protected:

    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

    void onInitializeGL(  );
    void onResizeGL(int w, int h);
    void onPaintGL();
public:
    void animation_add();
    void animation_del();
    void animation_play();
    void switch_gpu(bool f);

};

#endif // KVSQScreen_H
