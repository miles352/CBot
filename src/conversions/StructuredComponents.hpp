#pragma once
#include <cstdint>
#include <functional>
#include <unordered_map>
#include <variant>

#include "MCString.hpp"
#include "NBT.hpp"
#include "PrefixedArray.hpp"
#include "Trim.hpp"

enum class Enchantment
{

};

struct EnchantmentComponent
{
    /** ID to level. */
    std::unordered_map<Enchantment, int> enchantments;

    static EnchantmentComponent from_bytes(uint8_t*& bytes);
};

struct StructuredComponents
{
    // https://minecraft.wiki/w/Java_Edition_protocol/Slot_data#Structured_components
    // TODO: 95 to add lmao
    enum class ComponentId
    {
        CUSTOM_DATA = 0,
        DAMAGE = 3,
        CUSTOM_NAME = 5,
        ENCHANTMENTS = 10,
        REPAIR_COST = 16,
        TRIM = 47,
        CONTAINER = 66,
    };

    typedef std::variant<EnchantmentComponent, int, NBT::TagCompound, NBT::TagString, Trim, std::vector<struct Slot>> ComponentTypes;

    std::unordered_map<ComponentId, ComponentTypes> values;

    void add(uint8_t*& bytes);

    static std::unordered_map<ComponentId, std::function<ComponentTypes(uint8_t*&)>> readers;
};




