#pragma once
#include <string>

enum class Rarity
{
    COMMON,
    UNCOMMON,
    RARE,
    EPIC
};

/** A class used to represent the constant fields of an item */
class ItemStack
{
    const std::string_view name;
    const int max_stack_size;
    const Rarity rarity;

public:
    constexpr ItemStack(std::string_view name, int max_stack_size, Rarity rarity) :
    name(name), max_stack_size(max_stack_size), rarity(rarity) {};

    std::string_view get_name() const;

    bool operator==(const ItemStack& item_stack) const
    {
        return this->name == item_stack.name;
    }
};