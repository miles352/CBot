#pragma once

#include "VarInt.hpp"

#include <string>

#include "Conversion.hpp"

class MCString
{
public:
    using type = std::string;
    /** Converts an ASCII ONLY string to a VarInt length prefixed utf-8 string */
    static std::vector<std::uint8_t> to_bytes(const std::string& str)
    {
        std::vector<std::uint8_t> result = VarInt::to_bytes(str.size());
        for (int i = 0; i < str.size(); i++)
        {
            result.push_back(str.at(i));
        }
        return result;
    }

    static std::string from_bytes(uint8_t*& array)
    {
        std::string res = "";
        int length = VarInt::from_bytes(array, nullptr);
        for (int i = 0; i < length; i++)
        {
            res.push_back(*array);
            array++;
        }
        return res;
    }
};
