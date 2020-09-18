#ifndef PBVR__VIZ_PARAMETER_FILE_H_INCLUDE
#define PBVR__VIZ_PARAMETER_FILE_H_INCLUDE

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <fstream>
#include "Types.h"
#include <kvs/RGBColor>

class VizParameterFile
{

public:

    static int ReadParamFile( const char* fname, const int readflag = 1 );
    static int WriteParamFile( const char* fname );
    static void ConversionFloatToClass();
    static void ConversionClassToFloat();
    static kvs::RGBColor getBackgroundColor();

};

#endif // PBVR__VIZ_PARAMETER_FILE_H_INCLUDE
