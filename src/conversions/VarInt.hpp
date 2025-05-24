#pragma once

#include <vector>
#include <cstdint>
#include <unistd.h>
#include <stdexcept>

const uint8_t SEGMENT_BITMASK = 0b01111111;
const uint8_t CONTINUE_BIT = 0b10000000;

namespace VarInt
{
    static std::vector<uint8_t> from_int(int number)
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
        // check if more than 5 bytes
    }

    static int from_stream(int sockfd)
    {
        int num = 0;
        uint8_t byte = 0;
        int pos = 0;
        while (true)
        {
            read(sockfd, &byte, 1); // TODO: Error handling for socket
            num |= (byte & SEGMENT_BITMASK) << pos; // only add the segment
            if ((byte & CONTINUE_BIT) == 0) break;
        
            pos += 7;

            if (pos >= 32) throw std::runtime_error("VarInt is too big!");
        }
        return num;
    }

    static int from_array(uint8_t*& array)
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