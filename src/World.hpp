#pragma once
#include <unordered_map>

#include "Block.hpp"
#include "BlockState.hpp"
#include "conversions/ChunkPos.hpp"
#include "Chunk.hpp"
#include "conversions/NBT.hpp"
#include "conversions/RegistryEntry.hpp"

/** A class containing all the chunks in render distance, and methods to get block states, entities, etc */
class World
{
public:
    World();

    /** Gets a block state at a position in the world.
     * @returns Optionally the block state if the chunk was loaded.
    */
    std::optional<BlockState> get_block_state(BlockPos block_pos);

    /** A method used internally when the block update packet is received.
     * @returns Optionally the old and new block state if the chunk was loaded.
    */
    std::optional<std::pair<BlockState, BlockState>> update_block(BlockPos block_pos, uint16_t new_id);

    /** @Returns The total height of the world, equal to the max height minus the minimum height. */
    int get_height() const;

    /** @Returns The minimum height of the world. */
    int get_min_height() const;

    std::unordered_map<ChunkPos, Chunk> _loaded_chunks;

    std::vector<RegistryEntry> _dimension_types;
    uint8_t _current_dimension_index = 0;

    // TODO: Add block iterator with lambda when efficiency is needed
private:
    uint16_t get_block_id(BlockPos block_pos, const Chunk& chunk, const ChunkSection& section) const;
    void set_block_id(BlockPos block_pos, const Chunk& chunk, ChunkSection& section, uint16_t new_id) const;
    ChunkSection& get_section_at_pos(Chunk& chunk, BlockPos block_pos) const;
};