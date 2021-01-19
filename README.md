# pbvr_client
PBVR QtClient for PBVR, a Particle Based Volume Rendering framework for Client-Server or  Insitu use in HPC environments.


# Build KVS without GLEW, GLU, GLUT

## Checkout KVS

        cd =~/pbvr_dev
        git clone https://github.com/CCSEPBVR/KVS.git
        cd KVS
        git checkout release-v2.9.0.pbvr.memfix

## Configure KVS

        #=============================================================================
        #  KVS enable/support flags
        #  $Id: kvs.conf 1525 2013-04-11 02:58:08Z naohisa.sakamoto@gmail.com $
        #=============================================================================
        KVS_ENABLE_OPENGL     = 1
        KVS_ENABLE_GLU        = 0
        KVS_ENABLE_GLEW       = 0
        KVS_ENABLE_OPENMP     = 0
        KVS_ENABLE_DEPRECATED = 0

        KVS_SUPPORT_CUDA      = 0
        KVS_SUPPORT_GLUT      = 0
        KVS_SUPPORT_OPENCV    = 0
        KVS_SUPPORT_QT        = 0
        KVS_SUPPORT_PYTHON    = 0
        KVS_SUPPORT_EGL       = 0
        KVS_SUPPORT_OSMESA    = 0

## Build KVS
      
       #Build release version
       export KVS_DIR=~/pbvr_dev/kvs_release
       export PATH=$KVS_DIR/bin:$PATH
       make clean
       make -j
       make install
       

## Commandline build of QtPBVR Client

      cd =~/pbvr_dev
      git clone https://github.com/CCSEPBVR/pbvr_client.git
      cd pbvr_client
      git checkout no_glew_glu                                # Test branch for building without GLEW, and GLU
      mkdir build
      cd build
      
      /usr/local/opt/qt5/bin/qmake ../QtClient/QtClient.pro
      make KVS_DIR=~/pbvr_dev/kvs_release
      
      
      
      

       
       
