/*
  ==============================================================================

    OverDriveProcessor.h
    Created: 27 Feb 2025 6:43:54pm
    Author:  Garrett Hesselgesser

  ==============================================================================
*/

#pragma once
#include "AudioEffectProcessor.h"

class OverDriveProcessor : public AudioEffectProcessor
{
    public:
    
    float processSample(float x, const int channel)  override
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
    
    private:
    
    float drive = 5.f;
};

//outTwo = zeros(N,1);
//alpha = drive;
//    for n = 1:N
//
//       % first section is soft clipping using arctan
//
//        %arctan
//        outTwo(n,1) = (2/pi) * atan(alpha * outOne(n,1));
//
//    end
//    % b = outOne(n,1);
//        outThree = zeros(N,1);
//
//for n = 1:N
//
//        if (outTwo(n,1) > 0)
//            outThree(n,1) = outTwo(n,1); % second is the half-rectification
//        else
//            outThree(n,1) = 0;
//        end
//end
