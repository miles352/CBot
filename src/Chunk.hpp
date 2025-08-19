#pragma once
#include "conversions/ChunkPos.hpp"
#include "conversions/ChunkData.hpp"

/** A class that represents a single chunk, and has methods for getting information about it */
class Chunk
{
public:
    ChunkPos pos;
    ChunkData chunk_data;
    // LightData light_data;
    Chunk(const ChunkPos& pos, const ChunkData& chunk_data/*, LightData light_data*/) : pos(pos), chunk_data(chunk_data) {};
};
