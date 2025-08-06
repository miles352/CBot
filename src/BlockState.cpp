#include "BlockState.hpp"

const Block& BlockState::get_block() const
{
    return *this->block;
}
