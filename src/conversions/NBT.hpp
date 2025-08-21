#pragma once

#include <cstdint>
#include <unordered_map>
#include <string>
#include <functional>
#include <optional>
#include <variant>

#include "NBT.hpp"
namespace NBT
{
    typedef std::variant<struct TagByte,
                         struct TagShort,
                         struct TagInt,
                         struct TagLong,
                         struct TagFloat,
                         struct TagDouble,
                         struct TagByteArray,
                         struct TagString,
                         struct TagList,
                         struct TagCompound,
                         struct TagIntArray,
                         struct TagLongArray> Tag;

    struct TagByte
    {
        static TagByte from_bytes(uint8_t*& bytes);
        int8_t get() const;
    private:
        int8_t value{};
    };

    struct TagShort
    {
        static TagShort from_bytes(uint8_t*& bytes);
        int16_t get() const;
    private:
        int16_t value{};
    };

    struct TagInt
    {
        static TagInt from_bytes(uint8_t*& bytes);
        int32_t get() const;
    private:
        int32_t value{};
    };

    struct TagLong
    {
        static TagLong from_bytes(uint8_t*& bytes);
        int64_t get() const;
    private:
        int64_t value{};
    };

    struct TagFloat
    {
        static TagFloat from_bytes(uint8_t*& bytes);
        float get() const;
    private:
        float value{};
    };

    struct TagDouble
    {
        static TagDouble from_bytes(uint8_t*& bytes);
        double get() const;
    private:
        double value{};
    };

    struct TagByteArray
    {
        static TagByteArray from_bytes(uint8_t*& bytes);
        const std::vector<int8_t>& get() const;
    private:
        std::vector<int8_t> data;
    };

    struct TagString
    {
        static TagString from_bytes(uint8_t*& bytes);
        const std::string& get() const;
    private:
        std::string value;
    };

    struct TagList
    {
        static TagList from_bytes(uint8_t*& bytes);
        const std::vector<Tag>& get() const;
    private:
        std::vector<Tag> data;
    };


    struct TagCompound
    {
        static TagCompound from_bytes(uint8_t*& bytes);

        std::optional<int8_t> read_byte(const std::string& tag_name) const;
        std::optional<int16_t> read_short(const std::string& tag_name) const;
        std::optional<int32_t> read_int(const std::string& tag_name) const;
        std::optional<int64_t> read_long(const std::string& tag_name) const;
        std::optional<float> read_float(const std::string& tag_name) const;
        std::optional<double> read_double(const std::string& tag_name) const;
        std::optional<std::vector<int8_t>> read_byte_array(const std::string& tag_name) const;
        std::optional<std::string> read_string(const std::string& tag_name) const;
        std::optional<std::vector<Tag>> read_list(const std::string& tag_name) const;
        std::optional<TagCompound> read_compound(const std::string& tag_name) const;
        std::optional<std::vector<int32_t>> read_int_array(const std::string& tag_name) const;
        std::optional<std::vector<int64_t>> read_long_array(const std::string& tag_name) const;

        std::unordered_map<std::string, Tag> data;

    private:
        template <typename T1, typename T2>
        std::optional<T2> get(const std::string& tag_name) const;
    };


    struct TagIntArray
    {
        static TagIntArray from_bytes(uint8_t*& bytes);
        const std::vector<int32_t>& get() const;
    private:
        std::vector<int32_t> data;
    };

    struct TagLongArray
    {
        static TagLongArray from_bytes(uint8_t*& bytes);
        const std::vector<int64_t>& get() const;
    private:
        std::vector<int64_t> data;
    };


    enum Types
    {
        TAG_END,
        TAG_BYTE,
        TAG_SHORT,
        TAG_INT,
        TAG_LONG,
        TAG_FLOAT,
        TAG_DOUBLE,
        TAG_BYTE_ARRAY,
        TAG_STRING,
        TAG_LIST,
        TAG_COMPOUND,
        TAG_INT_ARRAY,
        TAG_LONG_ARRAY
    };

    TagCompound read_root(uint8_t*& bytes);

    Tag read_tag(Types type, uint8_t*& bytes);

    inline std::unordered_map<Types, std::function<Tag(uint8_t*&)>> readers =
    {
        { TAG_BYTE, TagByte::from_bytes },
        { TAG_SHORT, TagShort::from_bytes },
        { TAG_INT, TagInt::from_bytes },
        { TAG_LONG, TagLong::from_bytes },
        { TAG_FLOAT, TagFloat::from_bytes },
        { TAG_DOUBLE, TagDouble::from_bytes },
        { TAG_BYTE_ARRAY, TagByteArray::from_bytes },
        { TAG_STRING, TagString::from_bytes },
        { TAG_LIST, TagList::from_bytes },
        { TAG_COMPOUND, TagCompound::from_bytes},
        { TAG_INT_ARRAY, TagIntArray::from_bytes },
        { TAG_LONG_ARRAY, TagLongArray::from_bytes }
    };
}
