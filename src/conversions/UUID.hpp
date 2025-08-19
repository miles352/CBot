#pragma once

#include <string>
#include <stdexcept>
#include <cstdint>


namespace UUID
{
    static void to_big_endian_bytes(const std::string& uuid, uint8_t buffer[16]) 
    {
        std::string hex;
        for (char c : uuid) {
            if (c != '-') hex += c;
        }

        if (hex.size() != 32) throw std::invalid_argument("Invalid UUID format");

        for (int i = 0; i < 16; i++) {
            uint8_t byte = 0;
            for (int j = 0; j < 2; j++)
            {
                byte <<= 4;
                char c = hex.at(i * 2 + j);
                if (c >= '0' && c <= '9') {
                    byte |= (c - '0');
                } else if (c >= 'a' && c <= 'f') {
                    byte |= (c - 'a' + 0xA);
                } else if (c >= 'A' && c <= 'F') {
                    byte |= (c - 'A' + 0xA);
                } else {
                    throw std::invalid_argument("Invalid character in UUID");
                } 
            }
            buffer[i] = byte;
        }
    }
}