#include <assert.h>
#include <iostream>

#include "filterbank_metadata.h"

using namespace std;

FilterbankMetadata::FilterbankMetadata(): has_dc_spike(false), coarse_channel_size(0) {}

/*
  Guesses some metadata from other metadata:
    coarse_channel_size
    has_dc_spike
    num_coarse_channels
 */
void FilterbankMetadata::inferMetadata() {
  if (num_timesteps == 16 && num_freqs % 1048576 == 0) {
    // Looks like Green Bank data
    assert(telescope_id == NO_TELESCOPE_ID || telescope_id == GREEN_BANK);
    if (coarse_channel_size == 0) {
      coarse_channel_size = 1048576;
    }
    has_dc_spike = true;
  } else if (num_freqs == 50331648) {
    // Looks like ATA data
    assert(telescope_id == NO_TELESCOPE_ID || telescope_id == ATA);
    if (coarse_channel_size == 0) {
      coarse_channel_size = 262144;
    }
    has_dc_spike = false;
  } else if (coarse_channel_size > 0) {
    // We already have a coarse channel size set, so we only want to infer whether we
    // have a dc spike.
    has_dc_spike = (telescope_id == GREEN_BANK);
  } else {
    cerr << "unable to infer coarse channel size for data with dimensions: "
         << num_timesteps << " x " << num_freqs << ". please set the nfpc header."
         << endl;
    exit(1);
  }
  num_coarse_channels = num_freqs / coarse_channel_size;
}
