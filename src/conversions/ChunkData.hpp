#pragma once
#include "Heightmap.hpp"
#include "ChunkSection.hpp"
#include "BlockEntity.hpp"

class ChunkData
{
public:
    std::vector<Heightmap> heightmaps;
    std::vector<uint8_t> data;

    std::vector<BlockEntity> block_entities;

    static ChunkData from_bytes(uint8_t*& bytes)
    {
        ChunkData chunk_data;
        chunk_data.heightmaps = PrefixedArray::from_bytes_variable_typed<Heightmap>(bytes);
        // The world height is not known here because it differs by dimension, so we read the data and
        // parse it later when we know the height.
        chunk_data.data = PrefixedArray::from_bytes_fixed<uint8_t>(bytes);
        // TODO: Read block entities
        return chunk_data;
    }
};
