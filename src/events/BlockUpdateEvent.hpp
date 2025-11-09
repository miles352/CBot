#pragma once

#ifndef NO_REGISTRY

#include "BlockState.hpp"
#include "math/BlockPos.hpp"

class BlockUpdateEvent
{
public:
    BlockUpdateEvent(BlockPos position, BlockState old_state, BlockState new_state);

    using Data = struct
    {
        BlockPos position;
        BlockState old_state;
        BlockState new_state;
    };

    Data data;
};

#endif