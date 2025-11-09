#pragma once

#ifndef NO_REGISTRY

#include <mutex>
#include <vector>
#include <typeindex>

#include "Block.hpp"
#include "BlockState.hpp"

namespace BlockRegistry
{
    void get_combinations(std::vector<std::vector<int>>& output, const std::vector<int>& original_states, std::vector<int>& current, int index);

    inline std::once_flag block_registry_flag;
    inline std::vector<BlockState> block_registry;

    void generate_block_states(const std::vector<std::pair<const Block*, std::vector<std::pair<std::type_index, int>>>>& input);
};

#endif