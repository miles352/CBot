#pragma once
#include "StandardTypes.hpp"

class ChunkPos
{
public:
    int x;
    int z;

    static ChunkPos from_bytes(uint8_t*& bytes)
    {
        ChunkPos pos{};
        pos.x = StandardTypes::from_bytes<int>(bytes);
        pos.z = StandardTypes::from_bytes<int>(bytes);
        return pos;
    }

    bool operator==(const ChunkPos& other) const
    {
        return this->x == other.x && this->z == other.z;
    }

};

template<>
struct std::hash<ChunkPos>
{
    std::size_t operator()(const ChunkPos& chunk_pos) const noexcept
    {
        return chunk_pos.x ^ (chunk_pos.z << 1);
    }
};