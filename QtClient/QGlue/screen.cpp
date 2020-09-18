#include <GL/glew.h>
#include "screen.h"
#include <kvs/FrameBufferObject>>

Screen::Screen( QWidget* parent_surface)
{
    Q_UNUSED(parent_surface);
    std::cout<< "Screen::Screen"<<std::endl;
    m_scene = new kvs::Scene(this);
    Screen::setFocusPolicy(Qt::StrongFocus );
    ScreenBase::create();
    update();
}

void Screen::paintGL(){

//    std::cout<<"Begin Screen::paintGL"<<std::endl;
    if (QThread::currentThread() != this->thread()) {
        qWarning("Screen::paintGL was not called from main thread, skipping frame");
        return;
    }
    if (!Screen::hasInitializedGL || m_hold_paintGL){
        qWarning("Screen either not initialized or on hold, skipping this frame");
        return;
    }
    kvs::FrameBufferObject::m_unbind_id=QOpenGLWidget::defaultFramebufferObject();
    glPushAttrib( GL_ALL_ATTRIB_BITS );
    kvs::OpenGL::WithPushedMatrix p( GL_MODELVIEW );
    p.loadIdentity();
    {
        m_scene->paintFunction();
    }
    glPopAttrib();
    onPaintGL();
//    std::cout<<"End Screen::paintGL"<<std::endl;
}

void Screen::resizeGL(int width, int height)
{
    std::cout<< "Screen::resizeGL"<<std::endl;
    // This is the first point in time where QOpenGLWidget::defaultFramebufferObject()
    // is reliably set, so we update kvs::FrameBufferObject::m_unbind_id
    kvs::FrameBufferObject::m_unbind_id=QOpenGLWidget::defaultFramebufferObject();
    const int dpr = QBaseClass::devicePixelRatio();
    size_t dpr_width = static_cast<size_t>( width / dpr + 0.5 );
    size_t dpr_height = static_cast<size_t>( height / dpr + 0.5 );
    m_scene->resizeFunction( dpr_width, dpr_height );
    m_scene->camera()->setWindowSize(dpr_width,dpr_height);
    onResizeGL(width,height);
}


void Screen::initializeGL()
{
    std::cout<< "Screen::initializeGL"<<std::endl;
    if (! isValid())
    {
        qWarning("Screen::initalizeGL while surface still not valid ");
        return;
    }
    GLenum result = glewInit();
    if ( result != GLEW_OK )
    {
        const GLubyte* message = glewGetErrorString( result );
        qFatal("GLEW initialization failed. ");
    }
    initializeOpenGLFunctions();
    onInitializeGL();
    hasInitializedGL=true;
}

Screen::~Screen()
{
    delete (m_scene);
}


const std::pair<int,int> Screen::registerObject( kvs::ObjectBase* object, kvs::RendererBase* renderer )
{
    std::cout<< "Screen::registerObject"<<std::endl;
    return m_scene->registerObject( object, renderer );
}

