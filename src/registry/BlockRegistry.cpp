#ifndef NO_REGISTRY

#include "BlockRegistry.hpp"

#include <print>

#include "BlockState.hpp"

void BlockRegistry::get_combinations(std::vector<std::vector<int>>& output, const std::vector<int>& original_states, std::vector<int>& current, int index)
{
    if (index == original_states.size())
    {
        output.emplace_back(current);
        return;
    }

    for (int i = 0; i <= original_states[index]; i++)
    {
        current[index] = i;
        get_combinations(output, original_states, current, index + 1);
    }
}

void BlockRegistry::generate_block_states(const std::vector<std::pair<const Block*, std::vector<std::pair<std::type_index, int>>>>& input)
{
    for (const auto&[block, states] : input)
    {
        std::vector<int> current(states.size());
        std::vector<std::vector<int>> output;
        std::vector<int> original_states;
        for (auto& state : states)
        {
            original_states.emplace_back(state.second);
        }

        get_combinations(output, original_states, current, 0);


        for (std::vector<int>& combination : output)
        {
            std::unordered_map<std::type_index, int> merged_states;

            for (int i = 0; i < combination.size(); i++)
            {
                merged_states.emplace(states[i].first, combination[i]);
            }

            BlockState block_state(block, merged_states);
            block_registry.push_back(std::move(block_state));
        }
    }
}

#endif