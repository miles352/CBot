#include "NBT.hpp"

#include <functional>
#include <cstdint>
#include <format>

#include "StandardTypes.hpp"

namespace NBT
{
    std::string read_nbt_string(const uint8_t*& bytes)
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

    TagCompound read_root(const uint8_t*& bytes)
    {
        int id = StandardTypes::from_bytes<uint8_t>(bytes);
        if (id != TAG_COMPOUND)
        {
            throw std::runtime_error("Read a root NBT tag without a root compound tag!");
        }
        return std::get<TagCompound>(read_tag(TAG_COMPOUND, bytes));
    }

    Tag read_tag(Types type, const uint8_t*& bytes)
    {
        return readers[type](bytes);
    }

    TagByte TagByte::from_bytes(const uint8_t*& bytes)
    {
        TagByte tag;
        tag.value = StandardTypes::from_bytes<int8_t>(bytes);
        return tag;
    }

    std::string TagByte::to_string() const
    {
        return std::format("TAG_BYTE {}", this->value);
    }

    int8_t TagByte::get() const
    {
        return this->value;
    }

    TagShort TagShort::from_bytes(const uint8_t*& bytes)
    {
        TagShort tag;
        tag.value = StandardTypes::from_bytes<int16_t>(bytes);
        return tag;
    }

    std::string TagShort::to_string() const
    {
        return std::format("TAG_SHORT {}", this->value);
    }

    int16_t TagShort::get() const
    {
        return this->value;
    }

    TagInt TagInt::from_bytes(const uint8_t*& bytes)
    {
        TagInt tag;
        tag.value = StandardTypes::from_bytes<int32_t>(bytes);
        return tag;
    }

    std::string TagInt::to_string() const
    {
        return std::format("TAG_INT {}", this->value);
    }

    int32_t TagInt::get() const
    {
        return this->value;
    }

    TagLong TagLong::from_bytes(const uint8_t*& bytes)
    {
        TagLong tag;
        tag.value = StandardTypes::from_bytes<int64_t>(bytes);
        return tag;
    }

    std::string TagLong::to_string() const
    {
        return std::format("TAG_LONG {}", this->value);
    }

    int64_t TagLong::get() const
    {
        return this->value;
    }

    TagFloat TagFloat::from_bytes(const uint8_t*& bytes)
    {
        TagFloat tag;
        tag.value = StandardTypes::from_bytes<float>(bytes);
        return tag;
    }

    std::string TagFloat::to_string() const
    {
        return std::format("TAG_FLOAT {}", this->value);
    }

    float TagFloat::get() const
    {
        return this->value;
    }

    TagDouble TagDouble::from_bytes(const uint8_t*& bytes)
    {
        TagDouble tag;
        tag.value = StandardTypes::from_bytes<double>(bytes);
        return tag;
    }

    std::string TagDouble::to_string() const
    {
        return std::format("TAG_DOUBLE {}", this->value);
    }

    double TagDouble::get() const
    {
        return this->value;
    }

    TagByteArray TagByteArray::from_bytes(const uint8_t*& bytes)
    {
        int32_t list_length = StandardTypes::from_bytes<int32_t>(bytes);
        TagByteArray tag;
        for (int i = 0; i < list_length; i++)
        {
            tag.data.emplace_back(std::get<TAG_BYTE>(read_tag(TAG_BYTE, bytes)).get());
        }
        return tag;
    }

    std::string TagByteArray::to_string() const
    {
        std::string out = "TAG_BYTE_ARRAY [";
        for (const int8_t byte : this->data)
        {
            out += std::to_string(byte) + " ";
        }
        out += "]\n";
        return out;
    }

    const std::vector<int8_t>& TagByteArray::get() const
    {
        return this->data;
    }

    TagString TagString::from_bytes(const uint8_t*& bytes)
    {
        TagString tag;
        tag.value = read_nbt_string(bytes);
        return tag;
    }

    std::string TagString::to_string() const
    {
        return "TAG_STRING " + this->get();
    }

    const std::string& TagString::get() const
    {
        return this->value;
    }

    TagList TagList::from_bytes(const uint8_t*& bytes)
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

    std::string TagList::to_string() const
    {
        std::string out = "TAG_LIST [";
        for (const Tag& tag : this->data)
        {
            std::visit([&out](auto& other_tag) {
                out += other_tag.to_string();
            }, tag);
        }
        out += "]\n";
        return out;
    }

    const std::vector<Tag>& TagList::get() const
    {
        return this->data;
    }

    TagCompound TagCompound::from_bytes(const uint8_t*& bytes)
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

    std::string TagCompound::to_string() const
    {
        std::string output = "TAG_COMPOUND\n";
        for (const auto& it : this->data)
        {
            output += it.first + " ";
            std::visit([&output](auto& variant) {
                output += variant.to_string();
            }, it.second);
            output += "\n";
        }
        output += "END\n";
        return output;
    }

    template<typename T1, typename T2>
    std::optional<T2> TagCompound::get(const std::string& tag_name) const
    {
        auto it = this->data.find(tag_name);
        if (it != this->data.end())
        {
            if (auto ret = std::get_if<T1>(&it->second))
            {
                return static_cast<T1>(*ret).get();
            }
        }
        return std::nullopt;
    }

    std::optional<int8_t> TagCompound::read_byte(const std::string& tag_name) const
    {
        return this->get<TagByte, int8_t>(tag_name);
    }

    std::optional<int16_t> TagCompound::read_short(const std::string& tag_name) const
    {
        return this->get<TagShort, int16_t>(tag_name);
    }

    std::optional<int32_t> TagCompound::read_int(const std::string& tag_name) const
    {
        return this->get<TagInt, int32_t>(tag_name);
    }

    std::optional<int64_t> TagCompound::read_long(const std::string& tag_name) const
    {
        return this->get<TagLong, int64_t>(tag_name);
    }

    std::optional<float> TagCompound::read_float(const std::string& tag_name) const
    {
        return this->get<TagFloat, float>(tag_name);
    }

    std::optional<double> TagCompound::read_double(const std::string& tag_name) const
    {
        return this->get<TagDouble, double>(tag_name);
    }

    std::optional<std::vector<int8_t>> TagCompound::read_byte_array(const std::string& tag_name) const
    {
        return this->get<TagByteArray, std::vector<int8_t>>(tag_name);
    }

    std::optional<std::string> TagCompound::read_string(const std::string& tag_name) const
    {
        return this->get<TagString, std::string>(tag_name);
    }

    std::optional<std::vector<Tag>> TagCompound::read_list(const std::string& tag_name) const
    {
        return this->get<TagList, std::vector<Tag>>(tag_name);
    }

    std::optional<TagCompound> TagCompound::read_compound(const std::string& tag_name) const
    {
        auto it = this->data.find(tag_name);
        if (it != this->data.end())
        {
            if (auto tag = std::get_if<TagCompound>(&it->second))
            {
                return *tag;
            }
        }
        return std::nullopt;
    }

    std::optional<std::vector<int32_t>> TagCompound::read_int_array(const std::string& tag_name) const
    {
        return this->get<TagIntArray, std::vector<int32_t>>(tag_name);
    }

    std::optional<std::vector<int64_t>> TagCompound::read_long_array(const std::string& tag_name) const
    {
        return this->get<TagLongArray, std::vector<int64_t>>(tag_name);
    }

    TagIntArray TagIntArray::from_bytes(const uint8_t*& bytes)
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

    std::string TagIntArray::to_string() const
    {
        std::string out = "TAG_INT_ARRAY [";
        for (const int32_t i : this->data)
        {
            out += std::to_string(i) + " ";
        }
        out += "]\n";
        return out;
    }

    const std::vector<int32_t>& TagIntArray::get() const
    {
        return this->data;
    }

    TagLongArray TagLongArray::from_bytes(const uint8_t*& bytes)
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

    std::string TagLongArray::to_string() const
    {
        std::string out = "TAG_LONG_ARRAY [";
        for (const int64_t l : this->data)
        {
            out += std::to_string(l) + " ";
        }
        out += "]\n";
        return out;
    }

    const std::vector<int64_t>& TagLongArray::get() const
    {
        return this->data;
    }
}
