#pragma once
#include "math/Vec3.hpp"

#include "StandardTypes.hpp"

class Position
{
public:
    static Vec3i from_bytes(uint8_t*& array)
    {
        int64_t encoded_position = StandardTypes::from_bytes<int64_t>(array);
        Vec3i result;
        result.x = (encoded_position & 0xFFFFFFC000000000) >> 38; // move first 26 bits to the end
        result.z = (encoded_position & 0x0000003FFFFFF000) >> 12; // move next 26 bits to the end
        result.y = encoded_position & 0x0000000000000FFF; // select last 12 bits

        // sign extend. right shifting signed numbers keeps the sign
        result.x = (result.x << 6) >> 6;
        result.z = (result.z << 6) >> 6;
        result.y = (result.y << 20) >> 20;

        return result;
    }

    static std::vector<uint8_t> to_bytes(Vec3i position)
    {
        int64_t encoded_position = ((static_cast<int64_t>(position.x) & 0x3FFFFFF) << 38)
        | ((static_cast<int64_t>(position.z) & 0x3FFFFFF) << 12)
        | (static_cast<int64_t>(position.y) & 0xFFF);
        return StandardTypes::to_bytes<int64_t>(encoded_position);
    }
};
