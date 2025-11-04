#pragma once

#include <vector>
#include <memory.h>

#include "conversions/VarInt.hpp"

namespace PrefixedArray
{
    /** Converts an array of fixed size elements of type T, prefixed with a VarInt that gives the size of the array. */
    template<typename T>
    static std::vector<T> from_bytes_fixed(const uint8_t*& bytes)
    {
        int arr_length = VarInt::from_bytes(bytes);
        int type_size = sizeof(T);
        std::vector<T> res;
        
        for (int i = 0; i < arr_length; i++)
        {
            T t;
            memcpy(&t, bytes, type_size);
            res.push_back(t);
            bytes += type_size;
        }
        return res;
    }

    /** Converts an array of variably sized elements of type T, prefixed with a VarInt that gives the size of the array.
     * T must be a class with a <code>from_bytes</code> method defined.
     */
    template<typename T>
    static std::vector<T> from_bytes_variable_typed(const uint8_t*& bytes)
    {
        int arr_length = VarInt::from_bytes(bytes);
        std::vector<T> res;

        for (int i = 0; i < arr_length; i++)
        {
            res.emplace_back(T::from_bytes(bytes));
        }
        return res;
    }

    /** Similar to from_bytes_variable_typed, but this should be used when the conversion type does not
     * store the converted type as a member variable, for example MCString.
     * T must be a class with a <code>from_bytes</code> method and a <code>T::type</code> type defined.
     */
    template<typename T>
    static std::vector<typename T::type> from_bytes_variable(const uint8_t*& bytes)
    {
        int arr_length = VarInt::from_bytes(bytes);
        std::vector<typename T::type> res;

        for (int i = 0; i < arr_length; i++)
        {
            res.emplace_back(T::from_bytes(bytes));
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