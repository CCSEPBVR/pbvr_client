#ifndef PBVR__KVS__VISCLIENT__EXTENDED_PARTICLE_VOLUME_RENDERER_H_INCLUDE
#define PBVR__KVS__VISCLIENT__EXTENDED_PARTICLE_VOLUME_RENDERER_H_INCLUDE

#ifdef CPUMODE
#include <kvs/ParticleVolumeRenderer>
#define RENDERER_BASE   kvs::ParticleVolumeRenderer
#define BASE_INIT_ARGS  &point, subpixel_level
#else
#include <kvs/ParticleBasedRenderer>
#define RENDERER_BASE   kvs::glsl::ParticleBasedRenderer
#define BASE_INIT_ARGS  //&(const_cast<kvs::PointObject&>(point)), subpixel_level, repeat_level
#endif

namespace kvs
{
namespace visclient
{


class ExtendedParticleVolumeRenderer : public RENDERER_BASE
{
public:
    ExtendedParticleVolumeRenderer( const kvs::PointObject& point, const size_t subpixel_level = 1, const size_t repeat_level = 1 ): RENDERER_BASE( BASE_INIT_ARGS )
    {}

    ~ExtendedParticleVolumeRenderer() {};


//    void changePointObject( const kvs::PointObject& point )
//    {
////        this->attachPointObject( &point );
//        m_screen->attachPointObject( &point );

//#ifndef CPUMODE
////        this->align_particles();
////        this->create_vertexbuffer();
//#endif
//    }

#ifdef CPUMODE
    void recreateImageBuffer()
    {
//        std::cout<<("THIS WASN'T CALLED FROM CPUMODE UNTIL INSITU MERGE")<<std::endl;
//        std::cout<<"  ## recreateImageBuffer starts ## \n    size: "<<m_width<<":"<<m_height<<std::endl;
        //KVS2.7.0
        //MOD BY)T.Osaki 2020.05.28
        /*
        this->delete_particle_buffer();
        this->create_particle_buffer(
                    BaseClass::m_width,
                    BaseClass::m_height,
                    m_subpixel_level );
        */
        this->deleteParticleBuffer();
        this->createParticleBuffer(
                    BaseClass::windowWidth(),
                    BaseClass::windowHeight(),
                    m_subpixel_level );
//        std::cout<<"  ## recreateImageBuffer ends: ##"<<std::endl;
    }
#endif

};

}
}

#endif    // PBVR__KVS__VISCLIENT__EXTENDED_PARTICLE_VOLUME_RENDERER_H_INCLUDE
