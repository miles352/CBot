#pragma once
#include <cstring>
#include <optional>
#include <string>

namespace JSON
{
    /** Finds a json key and returns the value. */
    inline std::optional<std::string> get_value(const std::string& json, const std::string& key)
    {
        int brackets = 0;
        size_t start = json.find("\"" + key + "\"");
        if (start == std::string::npos) return std::nullopt;

        const char* ptr = strchr(json.data() + start + key.length(), ':') + 1;

        bool in_string = false;

        std::string out;

        while (*ptr)
        {
            out.push_back(*ptr);

            switch (*ptr)
            {
                case '"':
                {
                    if (!in_string) // Opening string quote
                    {
                        in_string = true;
                        if (brackets == 0) // Strip quotes if its at top level, meaning its the value were getting
                        {
                            out.pop_back();
                        }
                    }
                    else // Possible closing string quote
                    {
                        char next = *(ptr + 1); // Shouldnt go out of bounds because json shouldnt end in a quote, and would just read null anyways
                        if (next == ',' || next == '}' || next == ':') // Closing quote
                        {
                            if (brackets == 0)
                            {
                                out.pop_back();
                                return out;
                            }
                            in_string = false;
                        }
                    }
                    break;
                }
                case '{':
                {
                    if (!in_string) brackets++; // Opening brace
                    break;
                }
                case '}':
                {
                    if (!in_string) // Closing brace
                    {
                        if (brackets == 0)
                        {
                            out.pop_back();
                            return out;
                        }
                        brackets--;
                    }
                    break;
                }
                case ',':
                {
                    if (!in_string && brackets == 0)
                    {
                        out.pop_back();
                        return out;
                    }
                    break;
                }
                case ' ':
                {
                    if (!in_string) out.pop_back();
                    break;
                }
                default:
                {
                    break;
                }
            }
            ptr++;
        }
        return out;
    }

}
