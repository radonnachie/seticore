#include <algorithm>
#include <functional>
#include <iostream>
#include <math.h>

#include <fmt/core.h>
#include <highfive/H5File.hpp>

using namespace std;

static_assert(sizeof(float) == 4, "require 32-bit floats");

int main(int argc, char **argv) {
  if (argc != 2) {
    cerr << "usage: seticore <h5file>" << endl;
    return 1;
  }

  // Open the file
  string filename = string(argv[1]);
  cout << "argument is: " << filename << endl;
  HighFive::File file(filename, HighFive::File::ReadOnly);
  HighFive::DataSet dataset = file.getDataSet("data");

  double foff;
  auto foff_attr = dataset.getAttribute("foff");
  string foff_datatype = foff_attr.getDataType().string();
  if (foff_datatype != "Float64") {
    cout << "foff is " << foff_datatype << " but we expected Float64" << endl;
    return 1;
  }
  foff_attr.read(&foff);
  
  double tsamp;
  auto tsamp_attr = dataset.getAttribute("tsamp");
  string tsamp_datatype = tsamp_attr.getDataType().string();
  if (tsamp_datatype != "Float64") {
    cout << "tsamp is " << tsamp_datatype << " but we expected Float64" << endl;
    return 1;
  }
  tsamp_attr.read(&tsamp);
  
  string datatype = dataset.getDataType().string();
  if (datatype != "Float32") {
    cout << "this data is " << datatype << " but we can only handle Float32" << endl;
    return 1;
  }
  auto dimensions = dataset.getDimensions();
  for (int i = 0; i < dimensions.size(); ++i) {
    if (i == 0) {
      cout << "hdf5 data dimensions = ";
    } else {
      cout << " x ";
    }
    cout << dimensions[i];
  }
  cout << endl;

  if (dimensions.size() != 3) {
    cout << "expected three data dimensions" << endl;
    return 1;
  }

  if (dimensions[1] != 1) {
    cout << "unexpected second dimension: " << dimensions[1] << endl;
  }

  // Guess the coarse channel size
  int coarse_channel_size;
  if (dimensions[0] == 16 && dimensions[2] % 1048576 == 0) {
    // Looks like Green Bank data
    coarse_channel_size = 1048576;
  } else {
    cout << "unrecognized data dimensions" << endl;
    return 1;
  }
  int num_coarse_channels = dimensions[2] / coarse_channel_size;
  int num_timesteps = dimensions[0];
  double obs_length = num_timesteps * tsamp;
  double drift_rate_resolution = 1e6 * foff / obs_length;
  cout << fmt::format("drift rate resolution: {:.8f}\n", drift_rate_resolution);
  
  // Loop through the coarse channels
  for (int coarse_channel = 0; coarse_channel < num_coarse_channels; ++coarse_channel) {
    vector<vector<vector<float> > > data;
    dataset.select({0, 0, coarse_channel * coarse_channel_size},
		   {num_timesteps, 1, coarse_channel_size}).read(data);

    // Calculate distribution statistics
    vector<float> column_sums(coarse_channel_size, 0);
    int mid = coarse_channel_size / 2;
    for (auto boxed_row : data) {
      auto row = boxed_row[0];
      std::transform(column_sums.begin(), column_sums.end(), row.begin(),
		     column_sums.begin(), std::plus<float>());

      // Remove the DC spike by making it the average of the adjacent columns
      row[mid] = (row[mid - 1] + row[mid + 1]) / 2.0;
    }
    std::sort(column_sums.begin(), column_sums.end());
    float median;
    if (mid % 2 == 0) {
      median = column_sums[mid];
    } else {
      median = (column_sums[mid - 1] + column_sums[mid]) / 2.0;
    }
    // cout << fmt::format("sample {} median: {:.3f}\n", coarse_channel, median);

    // Use the central 90% to calculate standard deviation
    int begin = ceil(0.05 * column_sums.size());
    int end = floor(0.95 * column_sums.size()) + 1;
    float sum = std::accumulate(column_sums.begin() + begin, column_sums.begin() + end, 0.0);
    float m = sum / (end - begin);
    float accum = 0.0;
    std::for_each(column_sums.begin() + begin, column_sums.begin() + end,
		  [&](const float f) {
		    accum += (f - m) * (f - m);
		  });
    float stdev = sqrt(accum / (end - begin));
    cout << fmt::format("sample {} stdev: {:.3f}\n", coarse_channel, stdev);

    float max_drift = 10.0;
    
  }
  return 0;
}
