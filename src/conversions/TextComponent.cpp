#include "TextComponent.hpp"

#include <stdexcept>

static std::string read_chat_tag(const NBT::Tag& tag);

static std::string translate(const std::string& format, const std::optional<std::vector<NBT::Tag>>& data)
{
    if (!data.has_value()) return format;
    // go to % in format
    // if next character is a number, use that as index into data
    // if not, use index, then increase index
    // if run out of data, make %s -> ""
    // if run out of %s, ignore other data

    std::string translated;
    size_t data_index = 0;
    for (int i = 0; i < format.size(); i++)
    {
        if (format[i] == '%')
        {
            if (std::isdigit(format[i + 1])) // if the format is %x$s where x is a number
            {
                // Assumes number is a single digit
                translated += read_chat_tag(data->at(format[i + 1] - '0'));
                i += 3; // skip the rest of the format specifier
            }
            else // if it is just %s
            {
                if (data_index < data->size())
                {
                    translated += read_chat_tag(data->at(data_index++)); // leave blank if data does not exist
                }
                i += 1;
            }
        }
        else
        {
            translated += format[i];
        }
    }
    return translated;
}

static std::string read_chat_tag(const NBT::Tag& tag)
{
    return std::visit([]<typename T>(const T& tag) -> std::string
    {
        if constexpr (std::is_same_v<T, NBT::TagCompound>)
        {
            if (tag.data.contains("text"))
            {
                std::string temp_str;
                temp_str += *tag.read_string("text");
                if (tag.data.contains("extra"))
                {
                    auto extra_tags = *tag.read_list("extra");
                    for (const NBT::Tag& extra_tag : extra_tags)
                    {
                        temp_str += read_chat_tag(extra_tag);
                    }
                }
                return temp_str;
            }
            else if (tag.data.contains(""))
            {
                return *tag.read_string("");
            }
            else if (tag.data.contains("translate"))
            {
                std::string translation_key = *tag.read_string("translate");
                // TODO: Find out where the translated things are and use this as a key
                auto list = tag.read_list("with");
                return translate(translation_key, list);
            }
        }
        else if constexpr (std::is_same_v<T, NBT::TagString>)
        {
            return tag.get();
        }
        return "";
    }, tag);
}

TextComponent TextComponent::from_bytes(const uint8_t*& bytes)
{
    TextComponent text_component;
    auto type = static_cast<NBT::Types>(*bytes);
    if (type != NBT::Types::TAG_STRING && type != NBT::Types::TAG_COMPOUND) throw std::invalid_argument("Not a valid TextComponent");
    text_component.data = NBT::read_tag(type, ++bytes);
    return text_component;
}

std::string TextComponent::to_string()
{
    return std::visit([](const auto& tag) {
        return tag.to_string();
    }, this->data);
}

std::string TextComponent::to_chat_string()
{
    return std::visit([]<typename T>(const T& tag) -> std::string
    {
        // Not sure if it would ever be a TagString in those packets but cant hurt to just return the string if it is
        if constexpr (std::is_same_v<T, NBT::TagString>)
        {
            return tag.get();
        }
        else if constexpr(std::is_same_v<T, NBT::TagCompound>)
        {
            return read_chat_tag(tag);
        }
        return "";
    }, data);
}
