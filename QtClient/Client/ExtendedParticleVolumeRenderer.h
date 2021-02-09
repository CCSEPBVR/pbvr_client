#ifndef PBVR__KVS__VISCLIENT__EXTENDED_PARTICLE_VOLUME_RENDERER_H_INCLUDE
#define PBVR__KVS__VISCLIENT__EXTENDED_PARTICLE_VOLUME_RENDERER_H_INCLUDE

#ifdef CPUMODE
#include <kvs/ParticleVolumeRenderer>
#define RENDERER_BASE   kvs::ParticleVolumeRenderer
#define BASE_INIT_ARGS  &point, subpixel_level // Init arguments for kvs::ParticleVolumeRenderer
#else
#include <kvs/ParticleBasedRenderer>
#define RENDERER_BASE   kvs::glsl::ParticleBasedRenderer
#define BASE_INIT_ARGS  // No init arguments for  base class kvs::glsl::ParticleBasedRenderer
#endif

namespace kvs
{
namespace visclient
{


class ExtendedParticleVolumeRenderer : public kvs::ParticleBasedRenderer
{
public:
    ExtendedParticleVolumeRenderer( const kvs::PointObject& point, const size_t subpixel_level = 1): kvs::ParticleBasedRenderer( &point, subpixel_level )
    {

    }
    ExtendedParticleVolumeRenderer(  )
    {

    }
    void recreateImageBuffer()
    {
        //KVS2.7.0
        //MOD BY)T.Osaki 2020.05.28
        //this->setDevicePixelRatio(2);
        this->deleteParticleBuffer();
        this->createParticleBuffer(
                    BaseClass::windowWidth(),
                    BaseClass::windowHeight(),
                    m_subpixel_level );
    }

};

}
}


class SwitchablePBR{
    kvs::glsl::ParticleBasedRenderer* gpu_pbr;
    kvs::visclient::ExtendedParticleVolumeRenderer* cpu_pbr;
    char shaderType='U';
    kvs::Shader::Lambert L;
    kvs::Shader::BlinnPhong B;
    kvs::Shader::Phong P;

    bool _use_gpu=true;
public:
    SwitchablePBR(bool use_gpu=true){
        this->_use_gpu=use_gpu;
        cpu_pbr=new kvs::visclient::ExtendedParticleVolumeRenderer();
        gpu_pbr=new kvs::glsl::ParticleBasedRenderer();
    }

    bool uses_gpu(){return _use_gpu;}
    void enable_gpu(){_use_gpu=true;}
    void disable_gpu(){_use_gpu=false;}



    size_t repetitionLevel(){
        assert (gpu_pbr->repetitionLevel() == cpu_pbr->subpixelLevel()* cpu_pbr->subpixelLevel());
        return  gpu_pbr->repetitionLevel();
    }


    size_t subpixelLevel(){
        assert (gpu_pbr->repetitionLevel() == cpu_pbr->subpixelLevel()* cpu_pbr->subpixelLevel());
        return  cpu_pbr->subpixelLevel();
    }

    kvs::Shader::Base* getShaderBasePointer(){
        if (shaderType=='P' )
            return &this->P;
        if (shaderType=='L' )
            return &this->L;
        if (shaderType=='B' )
            return &this->B;
        // Unknow shader type default to Lambert;
        return NULL;

    }

    void enableShading(){
        gpu_pbr->enableShading();
        cpu_pbr->enableShading();
    }

    void disableShading(){
        gpu_pbr->disableShading();
        cpu_pbr->disableShading();
    }

    void setRendererShaders(){
        gpu_pbr->enableShading();
        cpu_pbr->enableShading();

        if (shaderType=='P' ){
            gpu_pbr->setShader(this->P);
            cpu_pbr->setShader(this->P);
        }
        else if (shaderType=='L' ){
            gpu_pbr->setShader(this->L);
            cpu_pbr->setShader(this->L);
        }
        else if (shaderType=='B' ){
            gpu_pbr->setShader(this->B);
            cpu_pbr->setShader(this->B);
        }
        else{ // Unknown shader
            gpu_pbr->disableShading();
            cpu_pbr->disableShading();
        }
    }
    //    template <typename ShadingType>
    void setShaderString(  const char* shadingLevel)
    {
        this->shaderType=shadingLevel[0];
        kvs::Shader::Base* b = getShaderBasePointer();
        if (b)
            int nscan=sscanf( &shadingLevel[1],",%f,%f,%f,%f", &b->Ka, &b->Kd, &b->Ks, &b->S );
        else
            shaderType='U';  //Unknown Shader
        setRendererShaders();

    }

    void recreateGPUPBR(){
        if (gpu_pbr)
            delete gpu_pbr;
        gpu_pbr=new kvs::glsl::ParticleBasedRenderer();
        setRendererShaders();
    }

    void recreateCPUPBR(){
        if (cpu_pbr)
            delete cpu_pbr;
        cpu_pbr=new kvs::visclient::ExtendedParticleVolumeRenderer();
        setRendererShaders();

    }

    void setRepetitionLevel( const size_t rep_level){

        size_t sp_level=ceil(sqrt(rep_level));
        recreateGPUPBR();
        gpu_pbr->setRepetitionLevel(rep_level);
        recreateCPUPBR();
        cpu_pbr->setSubpixelLevel(sp_level);

        //        cpu_pbr->recreateImageBuffer();

        assert (gpu_pbr->repetitionLevel() == cpu_pbr->subpixelLevel()* cpu_pbr->subpixelLevel());
    }

    void setSubpixelLevel( const size_t sp_level){

        size_t rep_level= sp_level * sp_level;
        recreateGPUPBR();
        gpu_pbr->setRepetitionLevel(rep_level);
        recreateCPUPBR();
        cpu_pbr->setSubpixelLevel(sp_level);
        //        cpu_pbr->recreateImageBuffer();

        assert (gpu_pbr->repetitionLevel() == cpu_pbr->subpixelLevel()* cpu_pbr->subpixelLevel());
    }

    kvs::RendererBase* selected(){
        assert (gpu_pbr->repetitionLevel() == cpu_pbr->subpixelLevel()* cpu_pbr->subpixelLevel());
        if (_use_gpu)
            return  gpu_pbr;
        else
            return cpu_pbr;
    }
};
#endif    // PBVR__KVS__VISCLIENT__EXTENDED_PARTICLE_VOLUME_RENDERER_H_INCLUDE
