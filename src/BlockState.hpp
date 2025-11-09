#pragma once

#ifndef NO_REGISTRY

#include <optional>
#include <typeindex>
#include <unordered_map>

#include "Block.hpp"


class BlockState
{
    const Block* block;
    std::unordered_map<std::type_index, int> states;

public:
    BlockState(const Block* block, const std::unordered_map<std::type_index, int>& states) : block(block), states(states) {};

    const Block& get_block() const;

    template <typename T>
    std::optional<T> get_state()
    {
        const auto it = states.find(std::type_index(typeid(T)));
        if (it == states.end())
        {
            return std::nullopt;
        }
        return static_cast<T>(it->second);
    }
};

#endif