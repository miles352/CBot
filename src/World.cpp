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

    auto it = this->_loaded_chunks.find(chunk_pos);
    if (it == this->_loaded_chunks.end())
    {
        return std::nullopt;
    }

    Chunk& chunk = it->second;

    // If outside of the world
    int min_height = this->get_min_height();
    if (block_pos.y < min_height || block_pos.y >= min_height + this->get_height())
    {
        return BlockState(&Blocks::VOID_AIR, {});
    }

    const ChunkSection& section = this->get_section_at_pos(chunk, block_pos);
    switch (section.block_states.format)
    {
        case PalettedContainer::SINGLE:
        {
            return BlockRegistry::block_registry[section.block_states.palette[0]];
        }
        case PalettedContainer::INDIRECT:
        {
            return BlockRegistry::block_registry[section.block_states.palette[this->get_block_id(block_pos, chunk, section)]];
        }
        case PalettedContainer::DIRECT:
        {
            throw std::runtime_error("Block palettes should only be stored in single or indirect mode.");
        }
    }
}

ChunkSection& World::get_section_at_pos(Chunk& chunk, BlockPos block_pos) const
{
    return chunk.sections[(block_pos.y - this->get_min_height()) / 16];
}

uint16_t World::get_block_id(const BlockPos block_pos, const Chunk& chunk, const ChunkSection& section) const
{
    int entries_for_coord = ((block_pos.y - this->get_min_height()) & 15) * 256 +
                            (block_pos.z - chunk.pos.z * 16) * 16 +
                            (block_pos.x - chunk.pos.x * 16);
    uint8_t bpe = section.block_states.bits_per_entry;
    int entries_per_long = 64 / bpe;
    int long_index = entries_for_coord / entries_per_long;
    uint64_t packed_entries = section.block_states.data[long_index];
    uint64_t bitmask = (static_cast<uint64_t>(1) << bpe) - 1;
    int entry_in_long = entries_for_coord % entries_per_long;
    return static_cast<uint16_t>((packed_entries >> (entry_in_long * bpe)) & bitmask);
}

void World::set_block_id(const BlockPos block_pos, const Chunk& chunk, ChunkSection& section, uint16_t new_id) const
{
    int entries_for_coord = ((block_pos.y - this->get_min_height()) & 15) * 256 +
                            (block_pos.z - chunk.pos.z * 16) * 16 +
                            (block_pos.x - chunk.pos.x * 16);
    uint8_t bpe = section.block_states.bits_per_entry;
    int entries_per_long = 64 / bpe;
    int long_index = entries_for_coord / entries_per_long;
    uint64_t& packed_entries = section.block_states.data[long_index];
    uint64_t bitmask = (static_cast<uint64_t>(1) << bpe) - 1;
    int entry_in_long = entries_for_coord % entries_per_long;

    // Clear current id
    packed_entries &= ~(bitmask << (entry_in_long * bpe));
    // Add new id. new_id must have <= bpe bits set or it will overflow into next id
    packed_entries |= static_cast<uint64_t>(new_id) << (entry_in_long * bpe);
}

std::optional<std::pair<BlockState, BlockState>> World::update_block(BlockPos block_pos, uint16_t new_id)
{
    ChunkPos chunk_pos(block_pos);

    // if chunk is not loaded, return nullopt
    auto chunk_it = this->_loaded_chunks.find(chunk_pos);
    if (chunk_it == this->_loaded_chunks.end())
    {
        return std::nullopt;
    }

    BlockState old_state = this->get_block_state(block_pos).value();

    ChunkSection& section = this->get_section_at_pos(chunk_it->second, block_pos);
    switch (section.block_states.format)
    {
        case PalettedContainer::SINGLE:
        {
            // printf("Converting to indirect\n");
            // convert single to indirect
            // BPE for single palette is 1, so just divide by size of long. index of palette is 0 because there is only 1 entry
            section.block_states.data.assign(4096 / 64, 0);
            // TODO: Change .assign to memcpy for performance
            section.block_states.bits_per_entry = 1;
            section.block_states.format = PalettedContainer::INDIRECT;

            [[fallthrough]]; // There is intentionally no break here so that control flow goes into indirect after converting
        }
        case PalettedContainer::INDIRECT:
        {
            // if new id not in palette, add it to palette
            PalettedContainer& block_states = section.block_states;
            auto palette_it = std::find(block_states.palette.begin(), block_states.palette.end(), new_id);
            int palette_index;
            if (palette_it == block_states.palette.end())
            {
                palette_index = block_states.palette.size();
                block_states.palette.push_back(new_id);
            }
            else
            {
                palette_index = palette_it - block_states.palette.begin();
            }

            int new_bpe = std::bit_width(block_states.palette.size());

            if (new_bpe != block_states.bits_per_entry)
            {
                // printf("Updating BPE!\n");
                // Reformat packed longs with the new bpe
                std::vector<uint64_t> repacked;
                repacked.reserve(4096);

                uint64_t current{};
                int bits_left_in_long = 64;
                const uint64_t bitmask = (static_cast<uint64_t>(1) << block_states.bits_per_entry) - 1;
                for (uint64_t packed : block_states.data)
                {
                    for (int i = 0; i < (64 / block_states.bits_per_entry); i++)
                    {
                        uint64_t index = (packed >> (block_states.bits_per_entry * i)) & bitmask;

                        current |= index << (64 - bits_left_in_long);
                        bits_left_in_long -= new_bpe;

                        if (bits_left_in_long < new_bpe)
                        {
                            repacked.push_back(current);
                            current = 0;
                            bits_left_in_long = 64;
                        }
                    }
                }
                if (bits_left_in_long < 64)
                {
                    repacked.push_back(current);
                }

                block_states.bits_per_entry = new_bpe;
                block_states.data = std::move(repacked);
            }

            // if bpe did not change:
            // just replace at index with proper palette index

            // else:
            // loop block ids and add to new packed vector, then replace at index with proper palette index

            this->set_block_id(block_pos, chunk_it->second, section, palette_index);
            return std::make_pair(old_state, BlockRegistry::block_registry[new_id]);
        }
        default:
        {
            throw std::runtime_error("Block palettes should only be stored in single or indirect mode.");
        }
    }
}

int World::get_height() const
{
    return this->_dimension_types[this->_current_dimension_index].data.read_int("height").value();
}

int World::get_min_height() const
{
    return this->_dimension_types[_current_dimension_index].data.read_int("min_y").value();
}
