#pragma once

#include <vector>
#include <cstdint>
#include <unistd.h>
#include <stdexcept>

constexpr uint8_t SEGMENT_BITMASK = 0b01111111;
constexpr uint8_t CONTINUE_BIT = 0b10000000;

class NetworkHandler;

namespace VarInt
{
    inline std::vector<uint8_t> from_int(int number)
    {
        std::vector<uint8_t> data;
        while (true)
        {
            // check if there is no more data in the most significant (32-7) bits
            if ((number & ~SEGMENT_BITMASK) == 0)
            {
                data.emplace_back(number);
                return data;
            }

            data.emplace_back((number & SEGMENT_BITMASK) | CONTINUE_BIT);
            number = (unsigned int)number >> 7;
        }
    }

    inline int from_array(uint8_t*& array, int* bytes_read)
    {
        int num = 0;
        uint8_t byte = 0;
        int pos = 0;
        int amount_read = 0;
        while (true)
        {
            byte = *array;
            array++;
            amount_read++;
            num |= (byte & SEGMENT_BITMASK) << pos; // only add the segment
            if ((byte & CONTINUE_BIT) == 0) break;
        
            pos += 7;
            
            if (pos >= 32) throw std::runtime_error("VarInt is too big!");
        }
        if (bytes_read != nullptr) *bytes_read = amount_read;
        return num;
    }


};