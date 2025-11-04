#pragma once
#include <cstdint>
#include <unordered_map>

#include "conversions/VarInt.hpp"

struct EnchantmentComponent
{
    enum class EnchantmentIds
    {
        EFFICIENCY = 8
    };

    /** ID to level. */
    std::unordered_map<EnchantmentIds, int> enchantments;

    static EnchantmentComponent from_bytes(const uint8_t*& bytes)
    {
        int count = VarInt::from_bytes(bytes);
        EnchantmentComponent component;
        for (int i = 0; i < count; i++)
        {
            int id = VarInt::from_bytes(bytes);
            int level = VarInt::from_bytes(bytes);
            component.enchantments[static_cast<EnchantmentIds>(id)] = level;
        }
        return component;
    }
};
