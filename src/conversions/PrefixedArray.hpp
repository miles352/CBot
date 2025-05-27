#pragma once

#include <vector>
#include <memory.h>

#include "conversions/VarInt.hpp"

namespace PrefixedArray
{
    template<typename T>
    static std::vector<T> from_array(uint8_t*& array)
    {
        int arr_length = VarInt::from_array(array, nullptr);
        int type_size = sizeof(T);
        std::vector<T> res;
        
        for (int i = 0; i < arr_length; i++)
        {
            T t;
            memcpy(&t, array, type_size);
            res.push_back(t);
            array += type_size;
        }
        return res;
    }

    template<typename T>
    static std::vector<uint8_t> array_to_prefixed_bytes(T array[], int length)
    {
        std::vector<uint8_t> prefix = VarInt::from_int(length); // number of elements, not bytes
        std::vector<uint8_t> bytes = prefix;
        uint8_t* ptr = reinterpret_cast<uint8_t*>(array);
        bytes.insert(bytes.end(), ptr, ptr + length * sizeof(T));
        return bytes;
    }
}