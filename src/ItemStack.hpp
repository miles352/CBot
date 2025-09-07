#pragma once
#include <string>
#include <utility>

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
    const std::string name;
    const int max_stack_size;
    const Rarity rarity;

public:
    ItemStack(std::string name, int max_stack_size, Rarity rarity) :
    name(std::move(name)), max_stack_size(max_stack_size), rarity(rarity) {};

    const std::string& get_name() const;

    bool operator==(const ItemStack& item_stack) const
    {
        return this->name == item_stack.name;
    }
};