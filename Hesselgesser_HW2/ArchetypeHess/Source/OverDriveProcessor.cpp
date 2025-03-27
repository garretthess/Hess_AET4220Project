/*
  ==============================================================================

    OverDriveProcessor.cpp
    Created: 6 Mar 2025 5:13:16pm
    Author:  Garrett Hesselgesser

  ==============================================================================
*/

#include "OverDriveProcessor.h"

float drive = 5.f;

float processSample(float x, const int channel) 
{
    float y;
//        arctan soft clipping
    y = (2/M_PI) * atan(drive * x);
//        full-wave rectification
    y = abs(y);
    return y;
    
}
void setDrive(float d){
    drive = d;
}


