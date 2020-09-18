TARGET   = QGlue
TEMPLATE = lib
CONFIG  += static
QT      += core gui opengl  widgets

#PRECOMPILED_HEADER=stable.h

include( ../SETTINGS.pri)
message (Building PBVR:$${TARGET} -  Mode:$${PBVR_MODE}  - Platform: $${PLATFORM}  - ReleaseType: $${RELTYPE})

CONFIG += warn_off
#QMAKE_CFLAGS_WARN_ON -= -Wall
#QMAKE_CXXFLAGS_WARN_ON -= -Wall
#QMAKE_CFLAGS_WARN_ON -= -W
#QMAKE_CXXFLAGS_WARN_ON -= -W
#QMAKE_CFLAGS_WARN_OFF += -Wall
#QMAKE_CXXFLAGS_WARN_OFF += -Wall
#QMAKE_CFLAGS_WARN_OFF += -W
#QMAKE_CXXFLAGS_WARN_OFF += -W

HEADERS += \
    colorpalette.h \
    colormappalette.h \
    renderarea.h \
#    Screen.h \
    orientationaxis.h \
    qglue_base.h \
    timer.h \
    eventlistener.h \
#    timereventlistener.h \
    opacitymappalette.h \
    histogram.h \
    labelbase.h \
    legendbar.h \
    extCommand.h \
    typedSignalConnect.h \
    systeminfo.h \
    colorundoredocommand.h \
    opacityundoredocommand.h

SOURCES +=     \
    colorpalette.cpp \
    colormappalette.cpp \
    renderarea.cpp \
#    Screen.cpp \
    orientationaxis.cpp \
    qglue_base.cpp \
    timer.cpp \
    eventlistener.cpp \
#    timereventlistener.cpp \
    opacitymappalette.cpp \
    histogram.cpp \
    labelbase.cpp \
    legendbar.cpp \
    extCommand.cpp \
    systeminfo.cpp \
    colorundoredocommand.cpp \
    opacityundoredocommand.cpp


