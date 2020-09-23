#ifndef KVSQS2creen_H
#define KVSQS2creen_H
//#include <GL/glew.h>
#include <QGLFormat>
#include <QThread>
#include <QOpenGLWidget>
typedef  QOpenGLWidget QBaseClass;


#include <qopenglfunctions.h>
#include <kvs/ScreenBase>
#include <kvs/Scene>

#include "Client/ExtendedParticleVolumeRenderer.h"


class SimpleKVS_UI;


class Screen :public kvs::ScreenBase,public QBaseClass, public QOpenGLFunctions
{

public:

    typedef kvs::ScreenBase BaseClass;
    typedef kvs::Scene::ControlTarget ControlTarget;
    bool m_hold_paintGL=false;
    double m_fps = 0.0;

private:
    bool m_enable_default_paint_event;

protected:
    kvs::Scene* m_scene;
    bool hasInitializedGL;


public:
    Screen( QWidget* parent_surface = NULL);
    ~Screen();
    kvs::Scene* scene(){return m_scene;}

    void setPosition( const int x, const int y );
    //    void setSize( const int width, const int height );
    void setGeometry( const int x, const int y, const int width, const int height );

    const std::pair<int,int> registerObject( kvs::ObjectBase* object, kvs::RendererBase* renderer );
    void paintGL();
    void resizeGL(int width, int height);
    void initializeGL();

    virtual void onPaintGL(){}
    virtual void onResizeGL(int width, int height){}
    virtual void onInitializeGL(){}


    void update()
    {
        if (QThread::currentThread() != this->thread()) {
           // Called from different thread do nothing
            return;
        }
        QOpenGLWidget::update();
    }


};

#endif // KVSQScreen_H
