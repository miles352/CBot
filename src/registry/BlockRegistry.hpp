#pragma once

#include "Block.hpp"
#include <vector>

void get_combinations(std::vector<std::vector<int>>& output, const std::vector<int>& original_states, std::vector<int>& current, int index);

inline std::vector<Block> block_registry;

void generate_block_states(const std::vector<std::pair<std::string, std::vector<std::pair<std::type_index, int>>>>& input);
