#pragma once
#include <unordered_map>

#include "Block.hpp"
#include "BlockState.hpp"
#include "conversions/ChunkPos.hpp"
#include "Chunk.hpp"
#include "math/Vec3.hpp"

/** A class containing all the chunks in render distance, and methods to get block states, entities, etc */
class World
{
public:
    World();

    std::optional<BlockState> get_block_state(BlockPos block_pos);

    /** A method used internally when the block update packet is received.
     * @returns Optionally the old block state if the block was changed.
    */
    std::optional<BlockState> update_block(BlockPos block_pos, int new_id);

    std::unordered_map<ChunkPos, Chunk> loaded_chunks;
private:
    int get_block_id(BlockPos block_pos, Chunk& chunk, ChunkSection& section) const;
};