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
        for (int i = 0; i < VarInt::from_array(array); i++) // first VarInt is the length of the string
        {
            res.push_back(*array);
            array++;
        }
        return res;
    }
};