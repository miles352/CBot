#pragma once
#include <cstdint>
#include <cstring>

namespace StandardTypes
{
    template <typename T>
    T from_array(uint8_t*& array, int* bytes_read = nullptr)
    {
        constexpr int size = sizeof(T);
        uint8_t reversed_bytes[size];

        for (int i = 0; i < size; i++)
        {
            reversed_bytes[size - 1 - i] = array[i];
        }

        T result;
        memcpy(&result, reversed_bytes, size);
        array += size;
        if (bytes_read != nullptr) *bytes_read = size;
        return result;
    }

    template <typename T>
    std::vector<uint8_t> to_array(T input)
    {
        constexpr int size = sizeof(T);
        std::vector<uint8_t> result(size);
        for (int i = 0; i < size; i++)
        {
            result[size - i - 1] = static_cast<uint8_t>(*(&input + i));
        }

        return result;
    }
}
