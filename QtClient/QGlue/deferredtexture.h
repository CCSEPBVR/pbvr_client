#ifndef DEFERREDTEXTURE_H
#define DEFERREDTEXTURE_H

#include <kvs/Texture>
#include <kvs/Texture1D>
#include <kvs/Texture2D>

namespace  QGlue {

class DeferredTexture2D: public kvs::Texture2D
{

public:
    int __width;
    int __height;
    const void* __data;
    bool complete=false;
    void load( const size_t width, const size_t height, const void* data, const size_t xoffset=0, const size_t yoffset=0);
    void bind();
    void unbind();
};

class DeferredTexture1D: public kvs::Texture1D
{

public:
    int __width;
    const void* __data;
    bool complete=false;
    void load(int width, const void* data, bool hasContext);
    void bind();
    void unbind();
};
}
#endif // DEFERREDTEXTURE_H
