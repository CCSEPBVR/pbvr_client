# pbvr_client
PBVR QtClient for PBVR, a Particle Based Volume Rendering framework for Client-Server or Insitu use in HPC environments.


# Build KVS 

## Checkout KVS

        cd ~/pbvr_dev
        git clone https://github.com/CCSEPBVR/KVS.git
        cd KVS
        git checkout release-v2.9.0.pbvr.memfix

## Configure KVS

Edit kvs.conf. On Linux and Mac, you only need to enable KVS_ENABLE_OPENGL. On Windows,
KVS_ENABLE_GLEW, and KVS_SUPPORT_GLUT also needs to be enabled.

        #=============================================================================
        #  KVS enable/support flags
        #  $Id: kvs.conf 1525 2013-04-11 02:58:08Z naohisa.sakamoto@gmail.com $
        #=============================================================================
        KVS_ENABLE_OPENGL     = 1
        KVS_ENABLE_GLU        = 0
        KVS_ENABLE_GLEW       = 0    # 1 to enable on Windows
        KVS_ENABLE_OPENMP     = 0
        KVS_ENABLE_DEPRECATED = 0

        KVS_SUPPORT_CUDA      = 0
        KVS_SUPPORT_GLUT      = 0    # 1 to enable on Windows
        KVS_SUPPORT_OPENCV    = 0
        KVS_SUPPORT_QT        = 0
        KVS_SUPPORT_PYTHON    = 0
        KVS_SUPPORT_EGL       = 0
        KVS_SUPPORT_OSMESA    = 0
        
        #KVS_GLEW_DIR =  /Users/jaea/pbvr_dev/OpenGL  # (For Windows, point to your GLEW installation)

## Build KVS - Linux & Mac
      
       #Build release version
       export KVS_DIR=~/pbvr_dev/kvs_release
       export PATH=$KVS_DIR/bin:$PATH
       make clean
       make -j
       make install

## Build KVS - Windows
       
       #Build release version
       set KVS_DIR=/Users/jaea/pbvr_dev/kvs_release
       set PATH=%KVS_DIR%/bin;%PATH%
       nmake clean
       nmake 
       nmake install

# Commandline build of QtPBVR Client

## Configure QtPBVR

Edit qtpbvr.conf. Set the PBVR_MODE to either CS for ClientServer, or IS for Insitu.
Set KVS_DIR to point to the install location from above.

If you enabled GLEW while building KVS, you also need to provide the variable KVS_GLEW_DIR,
set to the same location as the when building KVS

      #PBVR_MODE - Either CS (ClientServer), or IS (Insitu) - Needed on all platforms
      PBVR_MODE = CS
      #PBVR_MODE = IS

      #KVS_DIR - Path to KVS installation - Needed on all platforms
      KVS_DIR = /Users/jaea/pbvr_dev/kvs_release

      #KVS_GLEW_DIR - Path to GLEW, Only if KVS was compiled with option KVS_ENABLE_GLEW
      #KVS_GLEW_DIR =  /Users/jaea/pbvr_dev/OpenGL

      cd ~/pbvr_dev
      git clone https://github.com/CCSEPBVR/pbvr_client.git
      cd pbvr_client
      git checkout develop                              
      mkdir build                                       
      cd build
      rm -r *.*                                         # Make sure build directory IS CLEAN 
                                                        # If it contains old build files Make will 
                                                        # complain about glew_ symbols
      
      /usr/local/opt/qt5/bin/qmake ../QtClient/QtClient.pro  # Your qmake might be in a different location
      make KVS_DIR=~/pbvr_dev/kvs_release
      
## Deploying QtPBVR Client

### OSX:

      /usr/local/opt/qt5/bin/macdeployqt  App/pbvr_client.app  -always-overwrite -dmg  #dmg is optional
      
An error message [ERROR: Unexpected prefix "@executable_path"] might be displayed, but this should not prevent deployment process from completing.
  
### Windows:

     \Qt\Qt5.12.9\5.12.9\msvc_2017\bin\windeployqt --release App/pbvr_client.exe --dir App/pbvr_client
      
      
      

       
       
