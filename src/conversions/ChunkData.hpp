#pragma once
#include "Conversion.hpp"
#include "Heightmap.hpp"
#include "ChunkSection.hpp"
#include "BlockEntity.hpp"

class ChunkData : public Conversion<ChunkData>
{
public:
    std::vector<Heightmap> heightmaps;
    std::vector<ChunkSection> data;
    std::vector<BlockEntity> block_entities;

    std::vector<uint8_t> to_bytes() override
    {
        // unused
    }

    static ChunkData from_bytes(uint8_t*& bytes)
    {
        ChunkData chunk_data;
        chunk_data.heightmaps = PrefixedArray::from_bytes_variable_typed<Heightmap>(bytes);
        // TODO: Read world height from registry_data packet. https://minecraft.wiki/w/Java_Edition_protocol/Registry_data
        // For testing in the nether, world height is 256
        // sections are 16 blocks tall, so 16 sections
        int world_height = 256;
        int chunk_section_length = world_height / 16;
        chunk_data.data.reserve(chunk_section_length);
        for (int i = 0; i < chunk_section_length; i++)
        {
            chunk_data.data.emplace_back(ChunkSection::from_bytes(bytes));
        }
        return chunk_data;
    }
};
