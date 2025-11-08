#include "Block.hpp"

#include "registry/BlockRegistryGenerated.hpp"

// This is in the cpp file and not constexpr because it needs to access the blocks and causes circular dependencies if its in the header
bool Block::is_air() const
{
    return *this == Blocks::AIR || *this == Blocks::CAVE_AIR || *this == Blocks::VOID_AIR;
}
