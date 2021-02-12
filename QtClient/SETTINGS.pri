## VERSION
#GIT_HASH = $$system("git log -1 --pretty=format:%h")
#DEFINES += PBVR_VERSION="1.14.PRERELEASE_BUILD.$${GIT_HASH}"
DEFINES += PBVR_VERSION="1.14.1-CS"

## DETERMINE PLATFORM  ##
win32:PLATFORM=WIN
unix:!macx:PLATFORM=UNX
macx:PLATFORM=MAC
## DETERMINE RELEASE TYPE ##
CONFIG(debug, debug|release) :RELTYPE=debug
CONFIG(release, debug|release) :RELTYPE=release

## INCLUDE PLATFORM SETTINGS ##
include(SETTINGS_$${PLATFORM}.pri)

## DETERMINE PBVR_MODE MODE ##
!contains(DEFINES, IS_MODE):!contains(DEFINES, CS_MODE){
  DEFINES += CS_MODE
}
contains(DEFINES, IS_MODE):PBVR_MODE=IS
contains(DEFINES, CS_MODE):PBVR_MODE=CS

## PREPROCESSOR DEFINES ##
#DEFINES += KVS_SUPPORT_GLEW
#DEFINES += SUPPORT_QGLUE
#DEFINES += CPUMODE

!contains(DEFINES, CPUMODE) {
    DEFINES += KVS_SUPPORT_GLEW
}
contains(DEFINES, CPUMODE):RENDER_MODE=CPU
!contains(DEFINES, CPUMODE):RENDER_MODE=GPU

## WARN ON DEPRECEATED QT FUNC ##
DEFINES += QT_DEPRECATED_WARNINGS
## DISABLE DEPRECEATED QT FUNC (disables all the APIs deprecated before Qt 6.0.0) ##
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

## USE PRECOMPILED HEADERS ##
precompile_header:!isEmpty(PRECOMPILED_HEADER) {
DEFINES += USING_PCH
}

#PBVR INCLUDE PATHS
INCLUDEPATH += ../
INCLUDEPATH += $(KVS_DIR)/include
INCLUDEPATH += ../Common/$${PBVR_MODE}
INCLUDEPATH += $${PBVR_PATH}/FunctionParser
INCLUDEPATH += $(GLEW_DIR)/include
