#pragma once

#include <string>
#include <cstdint>
#include <format>
#include <algorithm>

#define SHA_DIGEST_LENGTH 20

namespace Utils
{
    static const char base_16_chars[] = "0123456789abcdef";

    static std::string SHA1_to_formatted(uint8_t hash[])
    {
        std::string output = "";
        bool is_negative = (hash[0] & 0b10000000) != 0;

        bool carry = false;
        bool last = true;
        for (int i = SHA_DIGEST_LENGTH - 1; i >= 0; i--)
        {   
            if (is_negative)
            {
                hash[i] = ~hash[i];
                if (last || carry)
                {
                    last = false;
                    if (++hash[i] == 0)
                    {
                        carry = true;
                    }
                }
            }

            // reversed nibble order because we reverse the entire string later
            output += base_16_chars[hash[i] & 0x0F];
            output += base_16_chars[hash[i] >> 4];
        }

        std::reverse(output.begin(), output.end());

        int start = output.find_first_not_of('0');
        if (start == std::string::npos)
        {
            output = '0';
        }
        else
        {
            output = output.substr(start);
        }
        
        if (is_negative) output = '-' + output;

        return output;
    }
};


