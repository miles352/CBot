#include "World.hpp"

#include "Block.hpp"
#include "registry/BlockRegistry.hpp"
#include "registry/BlockRegistryGenerated.hpp"

World::World()
{

}

std::optional<BlockState> World::get_block_state(BlockPos block_pos)
{
    ChunkPos chunk_pos(block_pos);

    auto it = this->loaded_chunks.find(chunk_pos);
    if (it == this->loaded_chunks.end())
    {
        return std::nullopt;
    }

    Chunk& chunk = it->second;

    // If outside of the world
    int lowest_y = 0; // TODO: Get from biome registry
    int highest_y = 256;
    if (block_pos.y < lowest_y || block_pos.y > highest_y)
    {
        return BlockState(&Blocks::VOID_AIR, {});
    }

    ChunkSection& section = chunk.chunk_data.data[(block_pos.y - lowest_y) / 16];
    switch (section.block_states.format)
    {
        case PalettedContainer::SINGLE:
        {
            return BlockRegistry::block_registry[section.block_states.palette[0]];
        }
        case PalettedContainer::INDIRECT:
        {
            int index = this->get_block_id(block_pos, chunk, section);
            return BlockRegistry::block_registry[section.block_states.palette[index]];
        }
        case PalettedContainer::DIRECT:
        {
            return BlockRegistry::block_registry[this->get_block_id(block_pos, chunk, section)];
        }
    }
}

int World::get_block_id(BlockPos block_pos, Chunk& chunk, ChunkSection& section) const
{
    int lowest_y = 0; // TODO: Get from biome registry
    int entries_for_coord = ((block_pos.y - lowest_y) & 15) * 256 +
                            (block_pos.z - chunk.pos.z * 16) * 16 +
                            (block_pos.x - chunk.pos.x * 16);
    uint8_t bpe = section.block_states.bits_per_entry;
    int entries_per_long = 64 / bpe;
    int long_index = entries_for_coord / entries_per_long;
    uint64_t packed_entries = section.block_states.data[long_index];
    uint64_t bitmask = (static_cast<uint64_t>(1) << bpe) - 1;
    int entry_in_long = entries_for_coord % entries_per_long;
    return static_cast<int>((packed_entries >> (entry_in_long * bpe)) & bitmask);
}

std::optional<BlockState> World::update_block(BlockPos block_pos, int new_id)
{
    // if chunk is not loaded, return nullopt
    ChunkPos chunk_pos(block_pos);
    if (!this->loaded_chunks.contains(chunk_pos))
    {
        return std::nullopt;
    }

    // TODO: Change chunk parsing to use indirect to make it easier to update shit
}

