#pragma once
#include <unordered_map>

#include "conversions/ChunkPos.hpp"
#include "Chunk.hpp"
#include "math/Vec3.hpp"

/** A class containing all the chunks in render distance, and methods to get block states, entities, etc */
class World
{
public:
    World();

    std::optional<int> get_block(BlockPos block_pos);

    std::unordered_map<ChunkPos, Chunk> loaded_chunks;
private:
    int get_block_id(BlockPos block_pos, Chunk& chunk, ChunkSection& section) const;
};