#pragma once

#include <cuda.h>
#include <iostream>

using namespace std;

static_assert(sizeof(float) == 4, "require 32-bit floats");

const int CUDA_BLOCK_SIZE = 1024;

// Helper to nicely display cuda errors
void checkCuda(cudaError_t err);

