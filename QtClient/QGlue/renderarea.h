#ifndef KVSQScreen_H
#define KVSQScreen_H

#include "Client/ExtendedParticleVolumeRenderer.h"
#include "Client/TimerEvent.h"

#include <QGlue/extCommand.h>
#include <QGlue/legendbar.h>
#include <QGlue/timer.h>
#include <QGlue/orientationaxis.h>

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
 * @brief
 *
 */
//KVS2.7.0
//MOD BY)T.Osaki 2020.06.04
class RenderArea : public QOpenGLWidget, public kvs::ScreenBase, protected QOpenGLFunctions
{
public:

    explicit RenderArea( QWidget* parent_surface);

    //MOD BY)T.Osaki 2020.06.29
    //static void ScreenShot( kvs::ScreenBase* screen, const int tstep );
    //static void ScreenShotKeyFrame( kvs::ScreenBase* screen, const int tstep );
    static void ScreenShot( kvs::Scene* screen, const int tstep );
    static void ScreenShotKeyFrame( kvs::Scene* screen, const int tstep );

    void attachPointObject(kvs::PointObject* point);

    void drawLabelList( QList<QGlue::Label*> list,QColor fontColor);
    void keyPressEvent(QKeyEvent *kbEvent);
    void redraw( void ){ this->update();}

    void setCoordinateBoundaries(float  crd[6]);
    void setGeometry( QRect geom );
    void setLabelFont(const QFont& f);
    void setSize( const int width, const int height );

    void setShaderParams( );
    void setupEventHandlers( );

    //KVS2.7.0
    //MOD BY)T.Osaki 2020.05.28
    //DEL BY)T.Osaki 2020.06.15
//    int show( void ){QOpenGLWidget::show(); return 1;}
    void show( void ){QOpenGLWidget::show();}
    void updateCommandInfo(ExtCommand* command_q);

public:
    static char shadinglevel[256];
    static kvs::visclient::TimerEvent* g_timer_event;

    bool GLInitComplete=false;

    QTimer*     m_idle_mouse_timer;
    QPainter    m_painter; // Shouldn't be public, but used by orientation axis

    QGlue::StepLabel*       m_stepLabel=NULL;
    QGlue::FPSLabel*        m_fpsLabel=NULL;
    QGlue::LegendBar*       g_legend=NULL;
    QGlue::OrientationAxis* m_orientation_axis=NULL;
    QGlue::Timer*           qt_timer;

    kvs::PointObject*  m_control_object;
    kvs::EventHandler* m_initialize_event_handler;

    std::list<QGlue::Timer*> m_timer_event_handler;
    QList<QGlue::Label*>     m_labels;
    double m_fps = 0.0;
    //KVS2.7.0
    //MOD BY)T.Osaki 2020.07.20

    kvs::Scene* scene(){
        return m_scene;
    }


    void toggleTimer(bool state){
        if (state)
            qt_timer->start();
        else
            qt_timer->stop();
    }
private:
    int i_w=0;
    int i_h=0;
    int yl0=0;
    int msec = DEFAULT_MSEC;
    kvs::Scene* m_scene;

    std::pair<int,int> m_obj_id_pair;
    //    MOD BY)T.Osaki 2020.04.28
    float pixelRatio=1;
    kvs::visclient::ExtendedParticleVolumeRenderer* m_renderer;
    int m_reset_count = 0;


protected:
    void initializeGL( void );
    void resizeGL(int w, int h);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

    void paintGL();


};

#endif // KVSQScreen_H
