#pragma once
#include <cstdint>
#include <cstring>
#include <vector>

namespace StandardTypes
{
    /** Reads from a big-endian byte point and properly converts it into type T. */
    template <typename T>
    T from_bytes(const uint8_t*& bytes, int* bytes_read = nullptr)
    {
        constexpr int size = sizeof(T);
        uint8_t reversed_bytes[size];

        for (int i = 0; i < size; i++)
        {
            reversed_bytes[size - 1 - i] = bytes[i];
        }

        T result;
        memcpy(&result, reversed_bytes, size);
        bytes += size;
        if (bytes_read != nullptr) *bytes_read = size;
        return result;
    }

    /** Converts input of type T into a vector of big-endian bytes. */
    template <typename T>
    std::vector<uint8_t> to_bytes(T input)
    {
        constexpr int size = sizeof(T);
        std::vector<uint8_t> result(size);
        auto* ptr = reinterpret_cast<uint8_t*>(&input);

        for (int i = 0; i < size; i++)
        {
            result[size - i - 1] = *(ptr + i);
        }

        return result;
    }
}
