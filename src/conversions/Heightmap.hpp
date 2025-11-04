#pragma once
#include "PrefixedArray.hpp"
#include "VarInt.hpp"

class Heightmap
{
public:
    enum Type
    {
        WORLD_SURFACE = 1,
        MOTION_BLOCKING = 4,
        MOTION_BLOCKING_NO_LEAVES = 5
    };

    Type type;
    std::vector<int64_t> data;

    static Heightmap from_bytes(const uint8_t*& bytes)
    {
        Heightmap hm;
        hm.type = static_cast<Type>(VarInt::from_bytes(bytes));
        hm.data = PrefixedArray::from_bytes_fixed<int64_t>(bytes);
        return hm;
    }
};
