#include "qglue_base.h"

namespace  QGlue {

QGLUEBase::QGLUEBase(QWidget* parent)
{
    m_texture_downloaded=false;
};

/*===========================================================================*/
/**
 *  @brief  Returns the initial screen height.
 *  @return screen height
 */
/*===========================================================================*/
void QGLUEBase::setCharacterType( FontType font )
{
    m_font = font;
}


void QGLUEBase::renderLabel(kvs::Vector3f v, const float length, Label &lbl)
{return;
//    const float padding = static_cast<float>( length ) / 4.0f;
    lbl.renderBitMap(v.x()  , v.y() , v.z() );
}

/*===========================================================================*/
/**
 *  @brief  Delimits the drawing.
 */
/*===========================================================================*/
void QGLUEBase::begin_draw( void )
{return;
    GLint vp[4]; glGetIntegerv( GL_VIEWPORT, vp );
    const GLint left   = vp[0];
    const GLint bottom = vp[1];
    const GLint right  = vp[2];
    const GLint top    = vp[3];

    glPushAttrib( GL_ALL_ATTRIB_BITS );
    glMatrixMode( GL_MODELVIEW );  glPushMatrix(); glLoadIdentity();
    glMatrixMode( GL_PROJECTION ); glPushMatrix(); glLoadIdentity();
    glOrtho( left, right, top, bottom, -1, 1 ); // The origin is upper-left.
    glDisable( GL_DEPTH_TEST );
}

/*===========================================================================*/
/**
 *  @brief  Delimits the drawing.
 */
/*===========================================================================*/
void QGLUEBase::end_draw( void )
{return;
    glPopMatrix();
    glMatrixMode( GL_MODELVIEW );
    glPopMatrix();
    glPopAttrib();
}

void QGLUEBase::initializeOpenGLFunctions(){
    QOpenGLFunctions::initializeOpenGLFunctions();
    m_gl_initialized=true;
}

bool QGLUEBase::checkGLerrors()
{
    int e;
    bool eflag=false;
    while (e = glGetError()){
        qCritical("QGLUEBase GL Context:: HAS ERROR %d",e);
        eflag=true;
    }
    return eflag;
}
bool QGLUEBase::contextReady()
{

    if (!m_gl_initialized){
        qCritical("QGLUEBase GL Context:: is not initialized");
        return false;
    }
    if (QOpenGLContext::currentContext() == 0){
        qCritical("QGLUEBase GL Context:: is not current");
        return false;
    }
    if (QThread::currentThread() != QApplication::instance()->thread()){
        qCritical("QGLUEBase GL Thread  is not main");
        return false;
    }
    return true;
}

QGLUEBaseWidget::QGLUEBaseWidget(QWidget* parent) :
    QOpenGLWidget(parent),
    QGLUEBase(parent)
{
    //    m_frameTime.start();
    //    this->setAutoFillBackground(false);
    m_margin=0;
}

void QGLUEBaseWidget::initializeGL()
{
return;
    initializeOpenGLFunctions();
    QColor bg=QWidget::palette().color(QWidget::backgroundRole());
    glClearColor(bg.redF(), bg.blueF(),bg.greenF(),1.0);
    m_gl_initialized=true;
}


void QGLUEBaseWidget::drawText(int x, int y,std::string text,QColor fontColor)
{
    return;
    y=this->height()-y;
    m_painter.begin(this);
    m_painter.setPen(fontColor);
    m_painter.setFont(font());
    m_painter.setRenderHint(QPainter::Antialiasing, true);
    m_painter.drawText(x, height()-y, QString::fromStdString(text));
    m_painter.end();
}


/*===========================================================================*/
/**
 *  @brief  Draws a rectangle as lines.
 *  @param  rect [in] rectangle
 *  @param  width [in] line width
 *  @param  upper_edge_color [in] upper edge color
 *  @param  lower_edge_color [in] lower edge color
 */
/*===========================================================================*/
void QGLUEBaseWidget::drawRectangle(
        const QRect rect,
        const float width,
        const QColor& upper_edge_color,
        const QColor& lower_edge_color )
{
    return;
    GLfloat x0 = static_cast<GLfloat>( rect.x() );
    GLfloat y0 = static_cast<GLfloat>( rect.y() );
    GLfloat x1 = static_cast<GLfloat>( rect.x() + rect.width() );
    GLfloat y1 = static_cast<GLfloat>( rect.y() + rect.height() );

    glLineWidth( width );
    glBegin( GL_LINES );
    {
        glColor3ub( upper_edge_color.red(), upper_edge_color.green(), upper_edge_color.blue() );
        glVertex2f( x0, y0 ); glVertex2f( x1, y0 ); // top
        glVertex2f( x0, y0 ); glVertex2f( x0, y1 ); // left

        glColor3ub(upper_edge_color.red(), upper_edge_color.green(), upper_edge_color.blue() );
        glVertex2f( x1, y1 ); glVertex2f( x0, y1 ); // bottom
        glVertex2f( x1, y0 ); glVertex2f( x1, y1 ); // right
    }
    glEnd();
}
void QGLUEBaseWidget::drawQuad( int x0, int y0, int x1, int y1)
{
    return;
    glBegin( GL_QUADS );
    glVertex2i( x0, y0 );
    glVertex2i( x1, y0 );
    glVertex2i( x1, y1 );
    glVertex2i( x0, y1 );
    glEnd();
}
void QGLUEBaseWidget::drawUVQuad(float u0, float v0, float u1, float v1, int x0, int y0, int x1, int y1)
{
    return;
    glBegin( GL_QUADS );
    glTexCoord2f( u0, v0 ); glVertex2i( x0, y0 );
    glTexCoord2f( u1,    v0 ); glVertex2i( x1, y0 );
    glTexCoord2f( u1,    v1    ); glVertex2i( x1, y1 );
    glTexCoord2f( u0, v1    ); glVertex2i( x0, y1 );
    glEnd();
}

int QGLUEBaseWidget::get_fitted_width( std::string st )
{
    const size_t width = st.size() * CharacterWidth + m_margin * 2;
    return(  width>DEFAULT_WIDTH?width:DEFAULT_WIDTH );
}

int QGLUEBaseWidget::get_fitted_height( void )
{
    return( DEFAULT_HEIGHT + CharacterHeight + m_margin * 2 );
}
}// End namespace QGLUE
