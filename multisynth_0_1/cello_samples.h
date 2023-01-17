/// BEGIN UNIVERSAL HEADER ///

#pragma once
#include <Audio.h>

/// END UNIVERSAL HEADER ///

extern const  AudioSynthWavetable::sample_data cello_samples[1];
const uint8_t cello_ranges[] = {127, };

const AudioSynthWavetable::instrument_data cello = {1, cello_ranges, cello_samples };


extern const uint32_t sample_0_cello_CelloC3L[];
