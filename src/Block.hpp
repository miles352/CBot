#pragma once

#include <optional>
#include <string>
#include <typeindex>
#include <unordered_map>

class Block
{
public:

    Block(const std::string* name, const std::unordered_map<std::type_index, int>& states) : name(name), states(states) {};

    const std::string* name;

    template <typename T>
    std::optional<T> get_block_state()
    {
        const auto it = states.find(std::type_index(typeid(T)));
        if (it == states.end())
        {
            return std::nullopt;
        }
        return static_cast<T>(it->second);
    }

    std::unordered_map<std::type_index, int> states;
};
