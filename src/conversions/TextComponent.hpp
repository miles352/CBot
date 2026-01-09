#pragma once

#include "NBT.hpp"

struct TextComponent
{
    /** This tag will only contain either a TAG_STRING or a TAG_COMPOUND */
    NBT::Tag data;

    static TextComponent from_bytes(const uint8_t*& bytes);

    std::string to_string();

    /** Parses the TextComponent as they are used in chat, and other things: https://minecraft.wiki/w/Text_component_format/Before_Java_Edition_1.21.5 */
    std::string to_chat_string();
};
