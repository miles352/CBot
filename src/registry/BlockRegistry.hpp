#pragma once

#include "Block.hpp"
#include <vector>

class BlockState;

class BlockRegistry
{
public:
    static void get_combinations(std::vector<std::vector<int>>& output, const std::vector<int>& original_states, std::vector<int>& current, int index);

    static std::vector<BlockState> block_registry;

    static void generate_block_states(const std::vector<std::pair<const Block*, std::vector<std::pair<std::type_index, int>>>>& input);
};
