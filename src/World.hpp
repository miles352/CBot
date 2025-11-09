#pragma once

#ifndef NO_REGISTRY

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

    /** Calls the passed in callback for each block in a chunk. This method is optimized for reading all the values and
     * faster by about 30x than reading them individually in a loop. If the callback returns false then the iterator will end early.
     */
    void chunk_iterator(ChunkPos chunk_pos, const std::function<bool(const BlockPos& block_pos, const BlockState& block_state)>& callback);

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
    static uint32_t get_block_id(const BlockPos& block_pos, const ChunkSection& section);
    static void set_block_id(BlockPos block_pos, ChunkSection& section, uint16_t new_id);
    ChunkSection& get_section_at_pos(Chunk& chunk, BlockPos block_pos) const;
};

#endif