#include "BlockUpdateEvent.hpp"

BlockUpdateEvent::BlockUpdateEvent(BlockPos position, BlockState old_state, BlockState new_state) : data{position, old_state, new_state}
{

};


