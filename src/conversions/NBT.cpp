#include "NBT.hpp"

#include <functional>
#include <memory>
#include <cstdint>

#include "StandardTypes.hpp"

namespace NBT
{
    std::string read_nbt_string(uint8_t*& bytes)
    {
        const uint16_t name_length = StandardTypes::from_bytes<uint16_t>(bytes);
        std::string str;
        for (int i = 0; i < name_length; i++)
        {
            str.push_back(static_cast<char>(*bytes));
            bytes++;
        }
        return str;
    }

    TagCompound read_root(uint8_t*& bytes)
    {
        int id = StandardTypes::from_bytes<uint8_t>(bytes);
        if (id != TAG_COMPOUND)
        {
            throw std::runtime_error("Read a root NBT tag without a root compound tag!");
        }
        return std::get<TagCompound>(read_tag(TAG_COMPOUND, bytes));
    }

    Tag read_tag(Types type, uint8_t*& bytes)
    {
        return readers[type](bytes);
    }


    TagByte TagByte::from_bytes(uint8_t*& bytes)
    {
        TagByte tag;
        tag.value = StandardTypes::from_bytes<int8_t>(bytes);
        return tag;
    }

    int8_t TagByte::get() const
    {
        return this->value;
    }

    TagShort TagShort::from_bytes(uint8_t*& bytes)
    {
        TagShort tag;
        tag.value = StandardTypes::from_bytes<int16_t>(bytes);
        return tag;
    }

    int16_t TagShort::get() const
    {
        return this->value;
    }

    TagInt TagInt::from_bytes(uint8_t*& bytes)
    {
        TagInt tag;
        tag.value = StandardTypes::from_bytes<int32_t>(bytes);
        return tag;
    }

    int32_t TagInt::get() const
    {
        return this->value;
    }

    TagLong TagLong::from_bytes(uint8_t*& bytes)
    {
        TagLong tag;
        tag.value = StandardTypes::from_bytes<int64_t>(bytes);
        return tag;
    }

    int64_t TagLong::get() const
    {
        return this->value;
    }

    TagFloat TagFloat::from_bytes(uint8_t*& bytes)
    {
        TagFloat tag;
        tag.value = StandardTypes::from_bytes<float>(bytes);
        return tag;
    }

    float TagFloat::get() const
    {
        return this->value;
    }

    TagDouble TagDouble::from_bytes(uint8_t*& bytes)
    {
        TagDouble tag;
        tag.value = StandardTypes::from_bytes<double>(bytes);
        return tag;
    }

    double TagDouble::get() const
    {
        return this->value;
    }

    TagByteArray TagByteArray::from_bytes(uint8_t*& bytes)
    {
        int32_t list_length = StandardTypes::from_bytes<int32_t>(bytes);
        TagByteArray tag;
        for (int i = 0; i < list_length; i++)
        {
            tag.data.emplace_back(std::get<TAG_BYTE>(read_tag(TAG_BYTE, bytes)).get());
        }
        return tag;
    }

    const std::vector<int8_t>& TagByteArray::get() const
    {
        return this->data;
    }

    TagString TagString::from_bytes(uint8_t*& bytes)
    {
        TagString tag;
        tag.value = read_nbt_string(bytes);
        return tag;
    }

    const std::string& TagString::get() const
    {
        return this->value;
    }

    TagList TagList::from_bytes(uint8_t*& bytes)
    {
        uint8_t list_type = StandardTypes::from_bytes<uint8_t>(bytes);
        int32_t list_length = StandardTypes::from_bytes<int32_t>(bytes);
        // TODO: Handler values <= 0
        TagList tag;
        tag.data.reserve(list_length);
        for (int i = 0; i < list_length; i++)
        {
            tag.data.emplace_back(read_tag(static_cast<Types>(list_type), bytes));
        }
        return tag;
    }

    const std::vector<Tag>& TagList::get() const
    {
        return this->data;
    }

    TagCompound TagCompound::from_bytes(uint8_t*& bytes)
    {
        uint8_t type_id = StandardTypes::from_bytes<uint8_t>(bytes);
        TagCompound compound;
        while (type_id != TAG_END)
        {
            std::string name = read_nbt_string(bytes);

            compound.data[name] = read_tag(static_cast<Types>(type_id), bytes);

            // Read the next tags id
            type_id = StandardTypes::from_bytes<uint8_t>(bytes);
        }
        return compound;
    }

    TagIntArray TagIntArray::from_bytes(uint8_t*& bytes)
    {
        int32_t list_length = StandardTypes::from_bytes<int32_t>(bytes);
        TagIntArray tag;
        tag.data.reserve(list_length);
        for (int i = 0; i < list_length; i++)
        {
            tag.data.emplace_back(std::get<TagInt>(read_tag(TAG_INT, bytes)).get());
        }
        return tag;
    }

    const std::vector<int32_t>& TagIntArray::get() const
    {
        return this->data;
    }

    TagLongArray TagLongArray::from_bytes(uint8_t*& bytes)
    {
        int64_t list_length = StandardTypes::from_bytes<int64_t>(bytes);
        TagLongArray tag;
        tag.data.reserve(list_length);
        for (int i = 0; i < list_length; i++)
        {
            tag.data.emplace_back(std::get<TagLong>(read_tag(TAG_LONG, bytes)).get());
        }
        return tag;
    }

    const std::vector<int64_t>& TagLongArray::get() const
    {
        return this->data;
    }
}
