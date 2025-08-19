#pragma once

#include <vector>
#include <memory.h>

#include "conversions/VarInt.hpp"

namespace PrefixedArray
{
    /** Converts an array of fixed size elements of type T, prefixed with a VarInt that gives the size of the array. */
    template<typename T>
    static std::vector<T> from_bytes_fixed(uint8_t*& array)
    {
        int arr_length = VarInt::from_bytes(array, nullptr);
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

    /** Converts an array of variably sized elements of type T, prefixed with a VarInt that gives the size of the array.
     * T must be a class with a <code>from_array</code> method defined.
     */
    template<typename T>
    static std::vector<T> from_bytes_variable_typed(uint8_t*& array)
    {
        int arr_length = VarInt::from_bytes(array, nullptr);
        std::vector<T> res;

        for (int i = 0; i < arr_length; i++)
        {
            res.emplace_back(T::from_bytes(array));
        }
        return res;
    }

    template<typename T>
    static std::vector<typename T::type> from_bytes_variable(uint8_t*& array)
    {
        int arr_length = VarInt::from_bytes(array, nullptr);
        std::vector<typename T::type> res;

        for (int i = 0; i < arr_length; i++)
        {
            res.emplace_back(T::from_bytes(array));
        }
        return res;
    }

    template<typename T>
    static std::vector<uint8_t> array_to_prefixed_bytes(T array[], int length)
    {
        std::vector<uint8_t> prefix = VarInt::to_bytes(length); // number of elements, not bytes
        std::vector<uint8_t> bytes = prefix;
        uint8_t* ptr = reinterpret_cast<uint8_t*>(array);
        bytes.insert(bytes.end(), ptr, ptr + length * sizeof(T));
        return bytes;
    }
}