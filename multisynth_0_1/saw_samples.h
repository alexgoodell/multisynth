#pragma once
#include <Audio.h>
//#include <AudioStream.h>
//#include <AudioSynthWavetable.h>

extern const AudioSynthWavetable::sample_data saw_samples[1];
const uint8_t saw_ranges[] = {127, };

const AudioSynthWavetable::instrument_data saw = {1, saw_ranges, saw_samples };


extern const uint32_t sample_0_saw_AnalogSaw1060L[44160];
