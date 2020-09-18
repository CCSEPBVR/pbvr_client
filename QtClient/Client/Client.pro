TARGET   = Client
TEMPLATE = lib
CONFIG += static
QT       += core gui opengl widgets

PRECOMPILED_HEADER=stable.h

CONFIG += warn_off
QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.14
#QMAKE_CFLAGS_WARN_ON -= -Wall
#QMAKE_CXXFLAGS_WARN_ON -= -Wall
#QMAKE_CFLAGS_WARN_ON -= -W
#QMAKE_CXXFLAGS_WARN_ON -= -W
#QMAKE_CFLAGS_WARN_OFF += -Wall
#QMAKE_CXXFLAGS_WARN_OFF += -Wall
#QMAKE_CFLAGS_WARN_OFF += -W
#QMAKE_CXXFLAGS_WARN_OFF += -W
win32{
QMAKE_CFLAGS_RELEASE += /MT
QMAKE_CXXFLAGS_RELEASE += /MT
QMAKE_CFLAGS_RELEASE -= -MD
QMAKE_CXXFLAGS_RELEASE -= -MD
}
include( ../SETTINGS.pri)
message (Building PBVR:$${TARGET}  Mode:$${PBVR_MODE}  Platform: $${PLATFORM} Release: $${RELTYPE})

HEADERS += \
    Argument.h \
    ColorMapLibrary.h \
    Command.h \
    ComThread.h \
    endian2.h \
    FrequencyTable.h \
    KeyFrameAnimation.h \
    KeyPressEvent.h \
    KVSMLObjectPointWriter.h \
    ParticleMerger.h \
    timer_simple.h \
    TimerEvent.h \
    VizParameterFile.h \
    v3defines.h \
    stable.h \
    ParamExTransFunc.h \
    VisualizationParameter.h \
    ReceivedMessage.h \
    ExtendedParticleVolumeRenderer.h \
    ParameterFile.h \
    ParticleMergeParameter.h


SOURCES += \
    ColorMapLibrary.cpp \
    ComThread.cpp \
    KeyFrameAnimation.cpp \
    KVSMLObjectPointWriter.cpp \
    ParticleMerger.cpp \
    TimerEvent.cpp \
    VizParameterFile.cpp \
    ParameterFile.cpp


HEADERS += ExtendedTransferFunctionMessage_$${PBVR_MODE}.h
SOURCES += ExtendedTransferFunctionMessage_$${PBVR_MODE}.cpp

HEADERS += ParticleServer.h
SOURCES += ParticleServer_$${PBVR_MODE}.cpp

SOURCES += Command_$${PBVR_MODE}.cpp


