#include "QGlue/renderarea.h"

#include <QApplication>
#include <QDesktopWidget>

#include "Client/VizParameterFile.h"
#include "Client/KeyFrameAnimation.h"
#include "Panels/animationcontrols.h"

//#include "kvs/PaintEventListener"
#include <Client/timer_simple.h>
#include <QElapsedTimer>
#include <QMutex>
#include <QThread>
#include <QDebug>
#include <QKeyEvent>
#include <QGlue/extCommand.h>
#include <QGlue/timer.h>
#include <Client/v3defines.h>

#ifdef PBVR_DEBUG
int     timestep = 0;
#endif

extern QMutex paint_mutex;
char RenderArea::shadinglevel[256] = "";
kvs::visclient::TimerEvent* RenderArea::g_timer_event=0;


RenderArea::RenderArea( QWidget* parent_surface)
{
    Q_UNUSED(parent_surface);
    //    MOD BY)T.Osaki 2020.04.28
    pixelRatio= QApplication::desktop()->devicePixelRatioF();
    this->background()->setColor( kvs::RGBAColor(0,0,22,1.0f) );
    this->i_w= 620;//Qthis->width();
    this->i_h= 620;//Qthis->height();
    this->setSize(i_w,i_h);

    kvs::ValueArray<kvs::Real32> coords( 3 );
    kvs::RGBColor color( 0, 0, 0 );
    kvs::ValueArray<kvs::Real32> normals( 3 );
    m_control_object = new kvs::PointObject( coords, color, normals, 1.0 );

    // Setup Step Label
    m_stepLabel =new QGlue::StepLabel(this,extCommand);
    m_stepLabel->setPosition(150*pixelRatio,50);
    m_labels.append(m_stepLabel);

    // Setup Orientation Axis
    int size=90*pixelRatio;
    m_orientation_axis=new QGlue::OrientationAxis( this);
    m_orientation_axis->setPosition( ScreenBase::width() -(size + 10),10);
    m_orientation_axis->setBoxType( QGlue::OrientationAxis::SolidBox );
    m_orientation_axis->setSize(size);
    m_orientation_axis->show();

    // Setup Legend bar
    g_legend= new QGlue::LegendBar( this, *extCommand );
    g_legend->setOrientation( QGlue::LegendBar::Horizontal );
    g_legend->setPosition( 10, ScreenBase::height() -10 );
    g_legend->setWidth(50*pixelRatio);
    g_legend->setHeight(180*pixelRatio);

    g_legend->screenResizedAfterSelectTransferFunction( 1 );
    g_legend->show();

}


/**
 * @brief RenderArea::updateCommandInfo
 * @param extCommand
 */
void RenderArea::updateCommandInfo(ExtCommand* extCommand)
{

    extCommand->m_parameter.m_camera = this->camera();
    // Setup Controll Object
    kvs::PointObject* object1 = extCommand->m_abstract_particles[0];
    const kvs::Vector3f& min = object1->minObjectCoord();
    const kvs::Vector3f& max = object1->maxObjectCoord();
    m_control_object->setMinMaxObjectCoords( min, max );
    m_control_object->setMinMaxExternalCoords( min, max );

    // Setup Extended Particle Volume Renderer
    m_renderer = new kvs::visclient::ExtendedParticleVolumeRenderer( *object1, extCommand->m_parameter.m_detailed_subpixel_level, extCommand->m_parameter.m_detailed_repeat_level );
    if ( !m_renderer )
    {
        kvsMessageError( "Cannot create a point m_renderer." );
    }
    extCommand->m_renderer=m_renderer;

    // Setup FPS Label
    m_fpsLabel  =new QGlue::FPSLabel(this,*m_renderer);
    m_fpsLabel->setPosition(50*pixelRatio,50);
    m_labels.append(m_fpsLabel);

    this->setShaderParams();
    this->redraw();
    this->setFocus();
}

/**
 * @brief RenderArea::initializeGL
 */
void RenderArea::initializeGL( void )
{
    qInfo("KVSRenderArea::initializeGL( void )");
    initializeOpenGLFunctions();
    m_orientation_axis->initializeOpenGLFunctions();
    g_legend->initializeOpenGLFunctions();
    GLInitComplete=true;
    this->setAutoFillBackground(false);
    //    this->initializeEvent();
    //    connect( m_idle_mouse_timer,&QTimer::timeout, this,&Screen::idleMouseEvent );
    //    m_idle_mouse_timer->start( kvs::Mouse::SpinTime );
    m_light->on();
    m_mouse->attachCamera( m_camera );
}
/**
 * @brief RenderArea::resizeGL, GL Surface resized handler
 * @param w int width
 * @param h int height
 */
void RenderArea::resizeGL(int w, int h)
{
    //    MOD BY)T.Osaki 2020.04.28
    float scale= QApplication::desktop()->devicePixelRatioF();
    int h_scaled = h * scale;
    int w_scaled = w  * scale;

    m_stepLabel->setPosition(150*scale,50);
    if (m_fpsLabel)
    m_fpsLabel->setPosition(50*scale,50);
    int size=90*scale;
    m_orientation_axis->setPosition( w_scaled -(size + 10),10);
    g_legend->setPosition( 10, h_scaled -10 );
}
/**
 * @brief RenderArea::paintGL
 */
void RenderArea::paintGL(void)
{
    QElapsedTimer timer;

    timer.start();
    glPushAttrib( GL_ALL_ATTRIB_BITS );
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPushMatrix();
    ScreenBase::paintFunction();
    glPopMatrix();
    glPopAttrib();
    if (m_orientation_axis){
        glPushMatrix();
        m_orientation_axis->paintEvent();
        glPopMatrix();
    }
    this->drawLabelList(m_labels,QColor(0,0,0,255));

    if(g_legend){
        glPushMatrix();
        g_legend->paintEvent();
        glPopMatrix();
    }
}

/**
 * @brief RenderArea::setupEventHandlers
 */
void RenderArea::setupEventHandlers()
{

    std::string interval( "TIMER_EVENT_INTERVAL" );

    if ( getenv( interval.c_str() ) != NULL )
    {
        msec = std::atoi( getenv( interval.c_str() ) );
    }
    else {
        msec = DEFAULT_MSEC;
    }

    // Timer

    qt_timer = new QGlue::Timer( msec ,extCommand);
    qt_timer->setRenderer(this->m_renderer);

    extCommand->m_glut_timer = qt_timer;

    g_timer_event=new kvs::visclient::TimerEvent( extCommand,&extCommand->comthread );
#ifdef CPUMODE
    std::pair<int, int> id_pair;
    id_pair = this->registerObject( m_control_object, extCommand->m_renderer );
    g_timer_event->setObject( id_pair.first );
    g_timer_event->setRenderer( extCommand->m_renderer );
#else
    this->registerObject( m_control_object, extCommand->renderer );
#endif

    g_timer_event->setScreen( this );
    qt_timer->setEventListener( g_timer_event );
    qt_timer->start();
}

/**
 * @brief RenderArea::setCoordinateBoundaries
 * @param crd
 */
void RenderArea::setCoordinateBoundaries(float  crd[6])
{
    kvs::Vector3f min_t( crd[0], crd[1], crd[2] );
    kvs::Vector3f max_t( crd[3], crd[4], crd[5] );
    this->objectManager()->object()->setMinMaxObjectCoords( min_t, max_t );
    this->objectManager()->object()->setMinMaxExternalCoords( min_t, max_t );
    this->objectManager()->updateExternalCoords();
    std::cout << " !!!!!!!!!!!!!!!!!!! Reset Viewer Scale !!!!!!!!!!!!!!!!!!!!!!!! " << std::endl;
}

/**
 * @brief RenderArea::drawLabelList
 * @param list
 * @param fontColor
 */
void RenderArea::drawLabelList( QList<QGlue::Label*> list,QColor fontColor)
{
    const float front = 0.0;
    const float back = 1.0;
    const float left = 0.0f;
    const float bottom = 0.0f;
    const float right = 300.0f;
    const float top = 300.0f;

    glPushMatrix();
    glPushAttrib( GL_ALL_ATTRIB_BITS );
    glViewport( 0, 0, 300, 300);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho( left, right, bottom, top, front, back );
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    for (int i = 0; i < list.size(); ++i) {
        QGlue::Label* item= list.at(i);
        item->contentUpdate();
        item->renderBitMap(item->x(),item->y(),0.0);
    }
    glPopAttrib();
    glPopMatrix();
}

/**
 * @brief RenderArea::setLabelFont
 * @param f
 */
void RenderArea::setLabelFont(const QFont& f)
{
    for (int i = 0; i < m_labels.size(); ++i) {
        QGlue::Label* item= m_labels.at(i);
        item->setFont(f);
    }
    g_legend->setFont(f);

}

/**
 * @brief RenderArea::setShaderParams
 */
void RenderArea::setShaderParams( )
{
    // For shading.
    m_renderer->disableShading();
    // APPEND START BY)M.Tanaka 2015.03.11
    float sd_ka, sd_kd, sd_ks, sd_n;
    if ( strcmp( shadinglevel, "L" ) == 0 )
    {
        printf( "***** shading : L\n" );
        m_renderer->enableShading();
        m_renderer->setShader( kvs::Shader::Lambert() );
    }
    else if ( strcmp( shadinglevel, "P" ) == 0 )
    {
        printf( "***** shading : P\n" );
        m_renderer->enableShading();
        m_renderer->setShader( kvs::Shader::Phong() );
    }
    else if ( strcmp( shadinglevel, "B" ) == 0 )
    {
        printf( "***** shading : B\n" );
        m_renderer->enableShading();
        m_renderer->setShader( kvs::Shader::BlinnPhong() );
    }
    else if ( strncmp( shadinglevel, "L,", 2 ) == 0 )
    {
        m_renderer->enableShading();
        sscanf( &shadinglevel[2], "%f,%f", &sd_ka, &sd_kd );
        printf( "***** shading : L %f %f\n", sd_ka, sd_kd );
        m_renderer->setShader( kvs::Shader::Lambert( sd_ka, sd_kd ) );
    }
    else if ( strncmp( shadinglevel, "P,", 2 ) == 0 )
    {
        m_renderer->enableShading();
        sscanf( &shadinglevel[2], "%f,%f,%f,%f", &sd_ka, &sd_kd, &sd_ks, &sd_n );
        printf( "***** shading : P %f %f %f %f\n", sd_ka, sd_kd, sd_ks, sd_n );
        m_renderer->setShader( kvs::Shader::Phong( sd_ka, sd_kd, sd_ks, sd_n ) );
    }
    else if ( strncmp( shadinglevel, "B,", 2 ) == 0 )
    {
        m_renderer->enableShading();
        sscanf( &shadinglevel[2], "%f,%f,%f,%f", &sd_ka, &sd_kd, &sd_ks, &sd_n );
        printf( "***** shading : B %f %f %f %f\n", sd_ka, sd_kd, sd_ks, sd_n );
        m_renderer->setShader( kvs::Shader::BlinnPhong( sd_ka, sd_kd, sd_ks, sd_n ) );
    }
#ifndef CPUMODE
    this->m_renderer->disableLODControl();
#endif
}

/**
 * @brief RenderArea::keyPressEvent
 * @param kbEvent
 */
void RenderArea::keyPressEvent(QKeyEvent *kbEvent){

    //unicode() returns const QChar*. QChar::unicode returns ushort
    ushort ucode=kbEvent->text().unicode()->unicode();
    qInfo()<<"@@@ KVSRenderArea::keyPressEvent :"<<ucode;

    switch (ucode)
    {
    case kvs::Key::l:
        controlTarget() = TargetLight;
        break;
    case kvs::Key::c:
        controlTarget() = TargetCamera;
        break;
    case kvs::Key::o:
        controlTarget() = TargetObject;
        break;

    case kvs::Key::x:
        qInfo(" [debug] 'x' pressed. (add Xform)");
        KeyFrameAnimationAdd();
        break;
    case kvs::Key::d:
        qInfo(" [debug] 'd' pressed. (delete last Xform)");
        KeyFrameAnimationErase();
        break;
    case kvs::Key::D:
        qInfo(" [debug] 'D' pressed. (delete all Xform)");
        KeyFrameAnimationDelete();
        break;
    case kvs::Key::M:
        qInfo(" [debug] 'M' pressed. (toggle animation with Xform)");
        /* KeyFrameAnimationStart(); */
        KeyFrameAnimationToggle();
        break;
        /* case kvs::Key::m: */
        /*    printf(" [debug] 'm' pressed. (stop animation with Xform)"); */
        /*    KeyFrameAnimationStop(); */
        /*    break; */
    case kvs::Key::S:
        qInfo(" [debug] 'S' pressed. (write Xform to file)");
        KeyFrameAnimationWrite();
        break;
    case kvs::Key::F:
        qInfo(" [debug] 'F' pressed. (read Xform from file)");
        KeyFrameAnimationRead();
        break;
    default:
        break;
    }
    if(kbEvent->key()==Qt::Key_Home){
        qInfo(" [debug] 'HOME' pressed. (Reset the viewer)");
        kvs::ScreenBase::reset();
        this->redraw();
    }
}


/**
 * @brief RenderArea::ScreenShot
 * @param screen
 * @param tstep
 */
void    RenderArea::ScreenShot( kvs::ScreenBase* screen, const int tstep )
{

    std::stringstream step;
    AnimationControlParameter ac_params= AnimationControls::getParameters();
#ifndef _TIMER_
    if ( ( ac_params.m_capture == PBVR_ON ) &&
         ( ac_params.m_mode == PBVR_IMAGE ) )
    {
#endif
        PBVR_TIMER_STA( 160 );

        screen->redraw();

        step << '.' << std::setw( 5 ) << std::setfill( '0' ) << tstep;

#ifdef  PBVR_DEBUG
        std::string filename = AnimationControls::getImageFileName(step.str(), ".bmp");
#else
        std::string filename = ac_params.m_image_file + step.str() + ".bmp";
#endif

        //        kvs::ColorImage image( screen->camera()->snapshot() );
        //        image.write( filename.c_str() );
        QImage image= extCommand->m_screen->grabFramebuffer();
        image.save(QString(filename.c_str()));

#ifdef  PBVR_DEBUG
        std::cout << "Snapshot >>" << filename << std::endl;
        timestep++;
        if ( timestep > 10 )
            timestep = 0;
#endif
        PBVR_TIMER_END( 160 );
#ifndef _TIMER_
    }
#endif
}

/**
 * @brief RenderArea::ScreenShotKeyFrame
 * @param screen
 * @param tstep
 */
void    RenderArea::ScreenShotKeyFrame( kvs::ScreenBase* screen, const int tstep )
{

    std::stringstream step;
    AnimationControlParameter ac_params= AnimationControls::getParameters();
#ifndef _TIMER_
    if ( ( ac_params.m_capture == PBVR_ON ) &&
         ( ac_params.m_mode == PBVR_IMAGE ) )
    {
#endif
        PBVR_TIMER_STA( 160 );

        screen->redraw();

        step << '.' << std::setw( 6 ) << std::setfill( '0' ) << tstep;

#ifdef  PBVR_DEBUG
        std::string filename =AnimationControls::getImageFileName( "_k" + step.str() , ".bmp");
#else
        std::string filename = ac_params.m_image_file + "_k" + step.str() + ".bmp";
#endif

        //        kvs::ColorImage image( screen->camera()->snapshot() );
        //        image.write( filename.c_str() );
        QImage image= extCommand->m_screen->grabFramebuffer();
        image.save(QString(filename.c_str()));

        PBVR_TIMER_END( 160 );
#ifndef _TIMER_
    }
#endif
}

/**
* @brief RenderArea::mousePressEvent
* @param event
*/
void RenderArea::mousePressEvent( QMouseEvent *event)
{
    //    ADD BY)T.Osaki 2020.03.03
    QWidget::setFocus();
    bool MOD_Shift = event->modifiers() & Qt::SHIFT;
    bool MOD_Ctrl  = event->modifiers() & Qt::CTRL;

    bool BTN_LEFT  = event->buttons()   & Qt::LeftButton;
    bool BTN_RIGHT = event->buttons()   & Qt::RightButton;
    bool BTN_MID   = event->buttons()   & Qt::MidButton;

    int mode =-1;

    if    (   BTN_LEFT && MOD_Ctrl  || BTN_RIGHT){
        mode=kvs::Mouse::Translation;
    }
    else if ( BTN_LEFT && MOD_Shift || BTN_MID  ){
        mode= kvs::Mouse::Scaling ;
    }
    else if ( BTN_LEFT ){
        mode = kvs::Mouse::Rotation;
        kvs::ScreenBase::updateCenterOfRotation();
    }

    if (mode >=0){
        const int x = event->x()*pixelRatio;
        const int y = event->y()*pixelRatio;
        kvs::Mouse::TransMode kvsMode=(kvs::Mouse::TransMode)mode;
        kvs::ScreenBase::mousePressFunction(x,y,kvsMode );
    }
}

/**
 * @brief RenderArea::mouseMoveEvent
 * @param event
 */
void RenderArea::mouseMoveEvent(QMouseEvent *event)
{
    //    BaseClass::eventHandler()->notify( event );
    if( kvs::ScreenBase::controlTarget() == kvs::ScreenBase::TargetObject )
    {
        if( !kvs::ScreenBase::objectManager()->isEnableAllMove() )
        {
            if( !kvs::ScreenBase::objectManager()->hasActiveObject() )
            {
                return;
            }
        }
    }

    const int x = event->x()*pixelRatio;
    const int y = event->y()*pixelRatio;
    kvs::ScreenBase::mouseMoveFunction(x,y );
    this->redraw();
}

/**
 * @brief RenderArea::mouseReleaseEvent
 * @param event
 */
void RenderArea::mouseReleaseEvent(QMouseEvent *event)
{
    //    BaseClass::eventHandler()->notify( event );
    kvs::ScreenBase::mouseReleaseFunction( event->x(), event->y() );
}

/**
 * @brief RenderArea::setSize
 * @param width
 * @param height
 */
void RenderArea::setSize( const int width, const int height )
{
    int h_scaled = height * pixelRatio;
    int w_scaled = width  * pixelRatio;

    kvs::ScreenBase::setSize( w_scaled, h_scaled);

    if ( kvs::ScreenBase::camera() ) kvs::ScreenBase::camera()->setWindowSize( w_scaled, h_scaled);
    if ( kvs::ScreenBase::mouse()  ) kvs::ScreenBase::mouse()->setWindowSize( w_scaled, h_scaled);

    QOpenGLWidget::resize( w_scaled, h_scaled);
}

/**
 * @brief RenderArea::setGeometry
 * @param geom
 */
void RenderArea::setGeometry( QRect geom )
{
    QOpenGLWidget::setGeometry(geom);
    this->setMinimumSize(geom.width(), geom.height());
    this->setMaximumSize(geom.width(), geom.height());
    this->setSize( geom.width(), geom.height() );
}
