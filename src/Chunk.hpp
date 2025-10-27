#pragma once
#include "conversions/ChunkPos.hpp"
#include "conversions/ChunkData.hpp"

/** A class that represents a single chunk, and has methods for getting information about it */
class Chunk
{
public:
    ChunkPos pos;
    std::vector<ChunkSection> sections;
    std::vector<Heightmap> heightmaps;
    std::vector<BlockEntity> block_entities;
    // LightData light_data;
    Chunk(ChunkPos pos, std::vector<ChunkSection> sections, std::vector<Heightmap> heightmaps, std::vector<BlockEntity> block_entities /*, LightData light_data*/)
        : pos(pos), sections(std::move(sections)), heightmaps(std::move(heightmaps)), block_entities(std::move(block_entities)) {};
};
