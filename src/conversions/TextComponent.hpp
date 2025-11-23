#pragma once

#include "NBT.hpp"

struct TextComponent
{
    /** This tag will only contain either a TAG_STRING or a TAG_COMPOUND */
    NBT::Tag data;

    static TextComponent from_bytes(const uint8_t*& bytes)
    {
        TextComponent text_component;
        auto type = static_cast<NBT::Types>(*bytes);
        if (type != NBT::Types::TAG_STRING && type != NBT::Types::TAG_COMPOUND) throw std::invalid_argument("Not a valid TextComponent");
        text_component.data = NBT::read_tag(type, ++bytes);
        return text_component;
    }

    std::string to_string()
    {
        return std::visit([](const auto& tag) {
            return tag.to_string();
        }, this->data);
    }
};
