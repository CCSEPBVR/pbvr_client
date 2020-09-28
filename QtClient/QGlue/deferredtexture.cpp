#include "deferredtexture.h"

#include <QThread>
#include <QApplication>
namespace  QGlue {

DeferredTexture2D::DeferredTexture2D(QGLUEBase* surface, size_t bytes, std::string name){
    this->surface=surface;
    this->name=name+"[2D]";
    this->nbytes=bytes;

}
void DeferredTexture2D::cacheData(size_t w, size_t h , const void* data, size_t xo, size_t yo)
{
    std::cout<<name<<"::prepareCache : "<< w<<"*"<<h<<"*"<<nbytes<<std::endl;
    __width=w;
    __height=h;
    __xoffset=xo;
    __yoffset=yo;
    if (cache != NULL){
        delete cache;
    };
    cache= malloc(w*h * nbytes);
    memcpy(cache,data,w*h*nbytes);
}

void DeferredTexture2D::create(size_t width, size_t height, const void* data)
{
    std::cout<<name<<"::create : "<< width<<","<<height<<std::endl;
    cacheData(width,height,data);
    if(surface->contextReady()){
        Texture2D::create(width,height,data);
    }
}

void  DeferredTexture2D::load( const size_t width, const size_t height,
                               const void* data, const size_t xoffset, const size_t yoffset)
{
    std::cout<<name<<"::load "<< width<<", "<<height <<std::endl;
    cacheData(width,height,data, xoffset,yoffset);
    if(surface->contextReady() ){
        if( !isCreated()){
            Texture2D::create(width,height,data);
        }
        else{
            Texture2D::bind();
            Texture2D::load(width, height,data , xoffset,yoffset);
            Texture2D::unbind();
        }
    }
}

bool  DeferredTexture2D::bind()
{

    if(surface->contextReady()){
        if (!isCreated() ){
            std::cout<<name<<"::bind DEFFERED CREATE: "<< __width <<":"<<__height<<std::endl;
            Texture::createID();
            Texture::setSize( __width,__height );
            Texture::GuardedBinder binder( *this );
            Texture::bind();
            if (__width * __height > 0){
                Texture2D::load( __width,__height, cache ,__xoffset,__yoffset);
            }
        }
        else if (!isLoaded() &&  __width * __height > 0){
            std::cout<<name<<"::bind RELOAD FROM CACHE: "<< __width <<":"<<__height<<std::endl;
            Texture::bind();
            Texture2D::load(__width, __height,  cache,__xoffset,__yoffset);
        }

        else if(!isBound()){
            std::cout<<name<<"::bind existing texture " <<std::endl;
            kvs::Texture2D::bind();
        }
        else if(isBound()){
            std::cout<<name<<"::bind:: allready bound " <<std::endl;
        }
        else{
            std::cout<<name<<"::bind FAILED " <<std::endl;
            return false;
        }

        if (isBound()){
            glDisable( GL_TEXTURE_1D );
            glEnable(  GL_TEXTURE_2D );
        #if defined( GL_TEXTURE_3D )
            glDisable( GL_TEXTURE_3D );
        #endif
        }

        surface->checkGLerrors();
        return isBound();
    }
}

void DeferredTexture2D::unbind()
{
    std::cout<<name<<"::unbind " <<std::endl;
    if(surface->contextReady()){
        if (this->isBound())
            Texture2D::unbind();
    }
}

DeferredTexture1D::DeferredTexture1D(QGLUEBase* surface, size_t bytes, std::string name){
    this->surface=surface;
    this->name=name+"[1D]";
    this->nbytes=bytes;
}
void DeferredTexture1D::cacheData(size_t w, const void* data,size_t o)
{
    std::cout<<name<<"::makecache : "<< w<<"*"<<nbytes <<std::endl;
    __width=w;
    __offset=o;
    if (cache != NULL){
        delete cache;
    }
    cache= malloc(w*nbytes);
    memcpy(cache,data,w*nbytes);
}

void DeferredTexture1D::create(size_t width, const void* data)
{
    cacheData(width,data);
    if(surface->contextReady()){
        Texture1D::release();
        Texture1D::create(width,data);
    }
}
void  DeferredTexture1D::load(int width, const void* data, size_t offset){
    std::cout<<name<<"::load "<< width <<std::endl;
    cacheData(width,data,offset);
    if( surface->contextReady() ){
        if( !isCreated()){
            Texture1D::create(width,data);
        }
        Texture1D::bind();
        Texture1D::load(width,data ,offset);
        Texture1D::unbind();
    }
}

bool  DeferredTexture1D::bind()
{
    if(surface->contextReady()){
        if (!isCreated() ){
            std::cout<<name<<"::bind DEFFERED CREATE: "<< __width <<std::endl;
            Texture::createID();
            Texture::setSize( __width );
            Texture::GuardedBinder binder( *this );
            Texture::bind();
            if (__width > 0){
                Texture1D::load(__width,cache,__offset);
            }
        }
        else if (!isLoaded() && __width>0){
            std::cout<<name<<"::bind RELOAD FROM CACHE: "<< __width <<std::endl;
            Texture::bind();
            Texture1D::load(__width, cache,__offset);
        }

        else if ( !isBound()){
            std::cout<<name<<"::bind existing texture" <<std::endl;
            Texture1D::bind();
        }
        else if(isBound()){
            std::cout<<name<<"::bind allready bound" <<std::endl;
        }
        else{
            qCritical("%s::bind FAILED!",name.c_str());
        }

        if (isBound()){
            glEnable( GL_TEXTURE_1D );
            glDisable( GL_TEXTURE_2D );
        #if defined( GL_TEXTURE_3D )
            glDisable( GL_TEXTURE_3D );
        #endif
        }
        surface->checkGLerrors();
        return isBound();
    }
}

void DeferredTexture1D::unbind()
{
    if(surface->contextReady()){
        if (this->isBound()){
            std::cout<<name<<"::unbind " <<std::endl;
            Texture1D::unbind();
        }
        else{
            std::cout<<name<<"::unbind  ALLREADY UNBOUND" <<std::endl;
        }
    }
}

}

