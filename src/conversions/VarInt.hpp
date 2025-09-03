#pragma once

#include <vector>
#include <cstdint>
#include <unistd.h>
#include <stdexcept>

constexpr uint8_t SEGMENT_BITMASK = 0b01111111;
constexpr uint8_t CONTINUE_BIT = 0b10000000;

class NetworkHandler;

class VarInt
{
public:
    using type = int;

    static std::vector<uint8_t> to_bytes(int number)
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

    static int from_bytes(uint8_t*& array)
    {
        int num = 0;
        uint8_t byte = 0;
        int pos = 0;
        while (true)
        {
            byte = *array;
            array++;
            num |= (byte & SEGMENT_BITMASK) << pos; // only add the segment
            if ((byte & CONTINUE_BIT) == 0) break;
        
            pos += 7;
            
            if (pos >= 32) throw std::runtime_error("VarInt is too big!");
        }
        return num;
    }


};