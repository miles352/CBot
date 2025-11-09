#pragma once
#include "MCString.hpp"
#include "NBT.hpp"
#include "StandardTypes.hpp"

class RegistryEntry
{
public:
    std::string entry_id;
    NBT::TagCompound data;

    static RegistryEntry from_bytes(const uint8_t*& bytes)
    {

        RegistryEntry entry;
        entry.entry_id = MCString::from_bytes(bytes);

        auto contains_data = StandardTypes::from_bytes<bool>(bytes);
        if (contains_data)
        {
            entry.data = std::move(NBT::read_root(bytes));
        }
        return entry;
    }
};
