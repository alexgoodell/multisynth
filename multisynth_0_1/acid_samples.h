/// BEGIN UNIVERSAL HEADER ///

#pragma once
#include <Audio.h>

/// END UNIVERSAL HEADER ///


extern const AudioSynthWavetable::sample_data acid_samples[1];
const uint8_t acid_ranges[] = {127, };

const AudioSynthWavetable::instrument_data acid = {1, acid_ranges, acid_samples };


extern const uint32_t sample_0_acid_LDAcidSQneutral_C1[22144];
