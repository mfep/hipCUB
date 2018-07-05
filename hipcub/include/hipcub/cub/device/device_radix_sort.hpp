// Copyright (c) 2018 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#ifndef HIPCUB_CUB_DEVICE_DEVICE_RADIX_SORT_HPP_
#define HIPCUB_CUB_DEVICE_DEVICE_RADIX_SORT_HPP_

#include "../../config.hpp"

#include <cub/device/device_radix_sort.cuh>

BEGIN_HIPCUB_NAMESPACE

struct DeviceRadixSort
{
    template<typename KeyT, typename ValueT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortPairs(void * d_temp_storage,
                         size_t& temp_storage_bytes,
                         const KeyT * d_keys_in,
                         KeyT * d_keys_out,
                         const ValueT * d_values_in,
                         ValueT * d_values_out,
                         int num_items,
                         int begin_bit = 0,
                         int end_bit = sizeof(KeyT) * 8,
                         hipStream_t stream = 0,
                         bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortPairs(
                d_temp_storage, temp_storage_bytes,
                d_keys_in, d_keys_out,
                d_values_in, d_values_out, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );
    }

    template<typename KeyT, typename ValueT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortPairs(void * d_temp_storage,
                         size_t& temp_storage_bytes,
                         DoubleBuffer<KeyT>& d_keys,
                         DoubleBuffer<ValueT>& d_values,
                         int num_items,
                         int begin_bit = 0,
                         int end_bit = sizeof(KeyT) * 8,
                         hipStream_t stream = 0,
                         bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortPairs(
                d_temp_storage, temp_storage_bytes,
                d_keys, d_values, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );
    }

    template<typename KeyT, typename ValueT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortPairsDescending(void * d_temp_storage,
                                   size_t& temp_storage_bytes,
                                   const KeyT * d_keys_in,
                                   KeyT * d_keys_out,
                                   const ValueT * d_values_in,
                                   ValueT * d_values_out,
                                   int num_items,
                                   int begin_bit = 0,
                                   int end_bit = sizeof(KeyT) * 8,
                                   hipStream_t stream = 0,
                                   bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortPairsDescending(
                d_temp_storage, temp_storage_bytes,
                d_keys_in, d_keys_out,
                d_values_in, d_values_out, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );

    }

    template<typename KeyT, typename ValueT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortPairsDescending(void * d_temp_storage,
                                   size_t& temp_storage_bytes,
                                   DoubleBuffer<KeyT>& d_keys,
                                   DoubleBuffer<ValueT>& d_values,
                                   int num_items,
                                   int begin_bit = 0,
                                   int end_bit = sizeof(KeyT) * 8,
                                   hipStream_t stream = 0,
                                   bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortPairsDescending(
                d_temp_storage, temp_storage_bytes,
                d_keys, d_values, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );
    }

    template<typename KeyT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortKeys(void * d_temp_storage,
                        size_t& temp_storage_bytes,
                        const KeyT * d_keys_in,
                        KeyT * d_keys_out,
                        int num_items,
                        int begin_bit = 0,
                        int end_bit = sizeof(KeyT) * 8,
                        hipStream_t stream = 0,
                        bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortKeys(
                d_temp_storage, temp_storage_bytes,
                d_keys_in, d_keys_out, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );
    }

    template<typename KeyT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortKeys(void * d_temp_storage,
                        size_t& temp_storage_bytes,
                        DoubleBuffer<KeyT>& d_keys,
                        int num_items,
                        int begin_bit = 0,
                        int end_bit = sizeof(KeyT) * 8,
                        hipStream_t stream = 0,
                        bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortKeys(
                d_temp_storage, temp_storage_bytes,
                d_keys, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );
    }

    template<typename KeyT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortKeysDescending(void * d_temp_storage,
                                  size_t& temp_storage_bytes,
                                  const KeyT * d_keys_in,
                                  KeyT * d_keys_out,
                                  int num_items,
                                  int begin_bit = 0,
                                  int end_bit = sizeof(KeyT) * 8,
                                  hipStream_t stream = 0,
                                  bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortKeysDescending(
                d_temp_storage, temp_storage_bytes,
                d_keys_in, d_keys_out, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );
    }

    template<typename KeyT>
    HIPCUB_RUNTIME_FUNCTION static
    hipError_t SortKeysDescending(void * d_temp_storage,
                                  size_t& temp_storage_bytes,
                                  DoubleBuffer<KeyT>& d_keys,
                                  int num_items,
                                  int begin_bit = 0,
                                  int end_bit = sizeof(KeyT) * 8,
                                  hipStream_t stream = 0,
                                  bool debug_synchronous = false)
    {
        return hipCUDAErrorTohipError(
            ::cub::DeviceRadixSort::SortKeysDescending(
                d_temp_storage, temp_storage_bytes,
                d_keys, num_items,
                begin_bit, end_bit,
                stream, debug_synchronous
            )
        );
    }
};

END_HIPCUB_NAMESPACE

#endif // HIPCUB_CUB_DEVICE_DEVICE_RADIX_SORT_HPP_
