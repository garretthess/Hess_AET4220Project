/*
  ==============================================================================

    AudioEffectProcessor.h
    Created: 27 Feb 2025 6:43:22pm
    Author:  Garrett Hesselgesser

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class AudioEffectProcessor
{
    public:
    
    // These are functions every audio effect will have
    void prepare(double sampleRate);
    
    void processBuffer(juce::AudioBuffer<float> & buffer, const int channel, const int numSamples);
    
    float processSample(float x, const int channel);
    
    protected:
    // available in derived classes
    
    double Fs;
    
    private:
    
    // double Fs;
};
