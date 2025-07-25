#pragma once
#include <unordered_map>

#include "conversions/ChunkPos.hpp"
#include "Chunk.hpp"

/** A class containing all the chunks in render distance, and methods to get block states, entities, etc */
class World
{
public:
    World();
    std::unordered_map<ChunkPos, Chunk> loaded_chunks;
};