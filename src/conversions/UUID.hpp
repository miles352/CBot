#pragma once

#include <array>
#include <string>
#include <stdexcept>
#include <cstdint>

#include "StandardTypes.hpp"


struct UUID
{
    // UUID stored in big-endian order
    std::array<uint8_t, 16> bytes;

    UUID() = default;

    explicit UUID(const std::string& uuid)
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
            bytes[i] = byte;
        }
    }

    static UUID from_bytes(uint8_t*& bytes)
    {
        UUID uuid;

        memcpy(uuid.bytes.data(), bytes, 2 * sizeof(uint64_t));

        bytes += 2 * sizeof(uint64_t);

        return uuid;
    }

    // std::string to_string();
};
