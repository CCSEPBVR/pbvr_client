TEMPLATE = subdirs
CONFIG  -= ordered

CONFIG += warn_off
#QMAKE_CFLAGS_WARN_ON -= -Wall
#QMAKE_CXXFLAGS_WARN_ON -= -Wall
#QMAKE_CFLAGS_WARN_ON -= -W
#QMAKE_CXXFLAGS_WARN_ON -= -W
#QMAKE_CFLAGS_WARN_OFF += -Wall
#QMAKE_CXXFLAGS_WARN_OFF += -Wall
#QMAKE_CFLAGS_WARN_OFF += -W
#QMAKE_CXXFLAGS_WARN_OFF += -W

SUBDIRS += Common
SUBDIRS += FunctionParser
SUBDIRS += Client
SUBDIRS += QGlue
SUBDIRS += Panels
SUBDIRS += App

App.depends = Common FunctionParser Client QGlue Panels
