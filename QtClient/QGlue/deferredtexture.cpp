#include "deferredtexture.h"


namespace  QGlue {

void  DeferredTexture2D::load( const size_t width, const size_t height,
                               const void* data, const size_t xoffset, const size_t yoffset)
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

void  DeferredTexture2D::bind()
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

void DeferredTexture2D::unbind()
{
    if (this->isBound())
        Texture2D::unbind();
}

void  DeferredTexture1D::load(int width, const void* data, bool hasContext){
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

void  DeferredTexture1D::bind()
{
    if (!isCreated()){
        Texture1D::createID();
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

void DeferredTexture1D::unbind()
{
    if (this->isBound())
        Texture1D::unbind();
}

}

