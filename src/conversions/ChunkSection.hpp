#pragma once
#include <netinet/in.h>

#include "PalettedContainer.hpp"

class ChunkSection
{
public:
    int16_t non_air_blocks = 0;
    PalettedContainer block_states;
    PalettedContainer biomes;

    std::vector<uint8_t> to_bytes()
    {
        // unused
    }

    static ChunkSection from_bytes(uint8_t*& bytes)
    {
        ChunkSection chunk_section;
        chunk_section.non_air_blocks = StandardTypes::from_bytes<int16_t>(bytes);
        chunk_section.block_states = PalettedContainer::from_bytes(bytes, PalettedContainer::Type::BLOCKS);
        chunk_section.biomes = PalettedContainer::from_bytes(bytes, PalettedContainer::Type::BIOMES);
        return chunk_section;
    }
};
