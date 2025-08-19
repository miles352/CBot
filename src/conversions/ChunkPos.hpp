#pragma once
#include "StandardTypes.hpp"
#include "math/Vec3.hpp"
#include "math/BlockPos.hpp"

class ChunkPos
{
public:
    int x;
    int z;


    ChunkPos() : x(0), z(0) {};
    ChunkPos(const int x, const int z) : x(x), z(z) {};

    explicit ChunkPos(const BlockPos block_pos)
    {
        this->x = std::floor(block_pos.x / 16.0);
        this->z = std::floor(block_pos.z / 16.0);
    }

    explicit ChunkPos(uint8_t*& bytes)
    {
        this->x = StandardTypes::from_bytes<int>(bytes);
        this->z = StandardTypes::from_bytes<int>(bytes);
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