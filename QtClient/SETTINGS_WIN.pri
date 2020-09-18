CONFIG -= debug_and_release debug_and_release_target

DEFINES += WIN32_LEAN_AND_MEAN
DEFINES += NOMINMAX
#PBVR LOCATION
PBVR_PATH    = ../..

#DEPLOY DIRECTORY
DEPLOYDIR = "../deploy_client"

CONFIG(debug, debug|release) :RELTYPE=debug
CONFIG(release, debug|release) :RELTYPE=release
#ADD LINKING FOR PBVR BUILD LOCATION
PBVR_LPATH=$${PBVR_PATH}/x64/$${RELTYPE}

LIB_SUFFIX = .lib
KVS_DIR = ../../QtClient/KVS_build/$${RELTYPE}
FP_DIR = $${PBVR_LPATH}

#FIGURE OUT BUILD DIR
Release:BUILDDIR = $$OUT_PWD/release
Debug:BUILDDIR = $$OUT_PWD/debug

#FIGURE OUT WINDEPLOYQT FLAG
Release:RELDBUG = --release
Debug:RELDBUG = --debug

COMPATH = ../Common
COMPATH2 = $${PBVR_PATH}/Common


#message( INCLUDING FOR PLATFORM $${PLATFORM} $${RELTYPE}. PBVR_LPATH: $${PBVR_LPATH} LIB:$${LIBS} )
