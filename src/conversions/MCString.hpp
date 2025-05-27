#pragma once

#include "VarInt.hpp"
#include <iostream>

#include <string>

namespace MCString
{
    /** Converts an ASCII ONLY string to a VarInt length prefixed utf-8 string */
    static std::vector<std::uint8_t> from_string(const std::string& str)
    {
        std::vector<std::uint8_t> mcString = VarInt::from_int(str.size());
        for (int i = 0; i < str.size(); i++)
        {
            mcString.push_back(str.at(i));
        }
        return mcString;
    }

    static std::string from_array(uint8_t*& array)
    {
        std::string res = "";
        int length = VarInt::from_array(array, nullptr);
        for (int i = 0; i < length; i++)
        {
            res.push_back(*array);
            array++;
        }
        return res;
    }
};