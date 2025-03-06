/*
  ==============================================================================

    AudioEffectProcessor.cpp
    Created: 27 Feb 2025 6:43:22pm
    Author:  Garrett Hesselgesser

  ==============================================================================
*/

#include "AudioEffectProcessor.h"


void AudioEffectProcessor::prepare(double sampleRate){
    Fs = sampleRate;
}

void AudioEffectProcessor::processBuffer(juce::AudioBuffer<float> & buffer, const int channel, const int numSamples){
    for (int n = 0 ; n < numSamples ; ++n){
        float x = buffer.getSample(channel,n); // current sample
        float y = processSample(x,channel);
        buffer.setSample(channel,n,y);
    }
}

float AudioEffectProcessor::processSample(float x, const int channel){
    return x; // This is "wire" effect
}
