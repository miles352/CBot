#pragma once

#include "NBT.hpp"
#include "StandardTypes.hpp"

namespace TextComponent
{
    /** Special case where a string is sent as a nameless NBT String but still includes the nbt id of 8
     * https://minecraft.wiki/w/Java_Edition_protocol/Data_types#Type:Text_Component
     */
    static NBT::TagString from_string_bytes(uint8_t*& bytes)
    {
        // Read the useless id
        StandardTypes::from_bytes<uint8_t>(bytes);

        return NBT::TagString::from_bytes(bytes);
    }
}
