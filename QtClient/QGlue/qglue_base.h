#ifndef QGLUEBASE_H
#define QGLUEBASE_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QPainter>
#include <QTime>
#include <QGlue/labelbase.h>

#include<kvs/Texture1D>
#include<kvs/Texture2D>

#define DEFAULT_MARGIN  (size_t)10
#define DEFAULT_WIDTH   (size_t)350
#define DEFAULT_HEIGHT  (size_t) 50
#define DEFAULT_COLOR   QColor( 255, 255, 255 )
#define DEFAULT_BORDER  QColor( 230, 230, 230 )
#define DEFAULT_BORDER_DARK  QColor( 138, 138, 138 )

namespace  QGlue {

class Texture2D: public kvs::Texture2D
{

public:
    int __width;
    int __height;
    const void* __data;
    bool complete=false;
    void load( const size_t width,
               const size_t height,
               const void* data,
               const size_t xoffset=0,
               const size_t yoffset=0)
    {
        __data=data;
        __width=width;
        if (isValid()){
            kvs::Texture2D::bind();
            kvs::Texture2D::load( width, height,data);
            complete=true;
            kvs::Texture2D::unbind();
        }
        else{


            kvs::Texture2D::createID();
            if (isCreated() ){
                kvs::Texture2D::bind();
                Texture::setSize( width, height );
                Texture::setParameter( GL_TEXTURE_MAG_FILTER, BaseClass::magFilter() );
                Texture::setParameter( GL_TEXTURE_MIN_FILTER, BaseClass::minFilter() );
                Texture::setParameter( GL_TEXTURE_WRAP_S, BaseClass::wrapS() );
                Texture::setParameter( GL_TEXTURE_WRAP_T, BaseClass::wrapT() );
                kvs::Texture2D::load( width, height, data );
                kvs::Texture2D::unbind();
            }
        }
    }

    void bind()
    {
        if (__data==NULL )
            return;
        if (!isCreated()){
            kvs::Texture2D::createID();
            kvs::Texture2D::bind();
            Texture::setSize( __width, __height );
            Texture::setParameter( GL_TEXTURE_MAG_FILTER, BaseClass::magFilter() );
            Texture::setParameter( GL_TEXTURE_MIN_FILTER, BaseClass::minFilter() );
            Texture::setParameter( GL_TEXTURE_WRAP_S, BaseClass::wrapS() );
            Texture::setParameter( GL_TEXTURE_WRAP_T, BaseClass::wrapT() );
            kvs::Texture2D::load( __width, __height, __data );
            kvs::Texture2D::unbind();
        }

        kvs::Texture2D::bind();
    }
};

class Texture1D: public kvs::Texture1D
{

public:
    int __width;
    const void* __data;
    bool complete=false;
    void load(int width, const void* data, bool hasContext){
        __data=data;
        __width=width;
        if (hasContext){
            if (isValid()){
                kvs::Texture1D::bind();
                kvs::Texture1D::load( width, data );
                complete=true;
                kvs::Texture1D::unbind();
            }
            else{
                kvs::Texture1D::createID();
                if (isCreated() ){
                    Texture1D::bind();
                    Texture::setSize( width );
                    Texture::setParameter( GL_TEXTURE_MAG_FILTER, BaseClass::magFilter() );
                    Texture::setParameter( GL_TEXTURE_MIN_FILTER, BaseClass::minFilter() );
                    Texture::setParameter( GL_TEXTURE_WRAP_S, BaseClass::wrapS() );
                    kvs::Texture1D::load( width, data );
                    kvs::Texture1D::unbind();
                    complete=true;
                }
            }
        }
    }

    void bind()
    {
        if (!isCreated()){
            kvs::Texture1D::createID();
            Texture1D::bind();
            Texture::setSize( __width );
            Texture::setParameter( GL_TEXTURE_MAG_FILTER, BaseClass::magFilter() );
            Texture::setParameter( GL_TEXTURE_MIN_FILTER, BaseClass::minFilter() );
            Texture::setParameter( GL_TEXTURE_WRAP_S, BaseClass::wrapS() );         
            kvs::Texture1D::load( __width, __data );
            kvs::Texture1D::unbind();
            complete=true;
        }

        kvs::Texture1D::bind();
    }
};
class QGLUEBase: public QOpenGLFunctions
{
public:

    enum FontType
    {
        BITMAP_8_BY_13,
        BITMAP_9_BY_15,
        BITMAP_TIMES_ROMAN_10,
        BITMAP_TIMES_ROMAN_24,
        BITMAP_HELVETICA_10,
        BITMAP_HELVETICA_12,
        BITMAP_HELVETICA_18
    };

    QGLUEBase(QWidget* parent);
    void setCharacterType( FontType font );
    void renderLabel(kvs::Vector3f v, const float length, Label &lbl);

protected:
    int _x=0;
    int _y=0;
    int _height=200;
    int _width=200;
    int         CharacterHeight =12;
    const int   CharacterWidth = 8;

    bool        m_texture_downloaded=false;

    void    begin_draw( void );
    void    end_draw( void );

    FontType m_font;


    int     x0(){return _x;}
    int     x1(){return _width;}
    int     y0(){return _y+CharacterHeight;}
    int     y1(){return _height-CharacterHeight;}

};
class QGLUEBaseWidget:public QOpenGLWidget , protected QGLUEBase
{

public:

    QGLUEBaseWidget(QWidget* parent=0);


protected:

    QPainter    m_painter;
    QTime       m_frameTime;
    size_t      m_frameCount=0;
    float       m_fps;
    bool        m_editable;
    bool        m_gl_initialized=false;
    int         m_margin;



    void    drawText(int x, int y,std::string text,QColor fontColor=QColor(0,0,0,255));

    int     get_fitted_width( std::string st  );

    int     get_fitted_height( void );


protected:

    void    initializeGL();

    void    drawQuad(int x0,   int y0,    int x1,  int y1);
    void    drawUVQuad(float u0,float v0, float u1, float v1,
                       int x0,   int y0,    int x1,  int y1);
    void    drawRectangle( const QRect rect, const float width,
                           const QColor& upper_edge_color,
                           const QColor& lower_edge_color );



};

}// End namespace QGLUE
#endif // QGLUEBASE_H
