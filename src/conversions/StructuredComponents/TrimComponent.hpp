#pragma once
#include <cstdint>

#include "../IDOrX.hpp"

struct TrimComponent
{
    struct Material
    {
        using type = Material;

        static Material from_bytes(uint8_t*& bytes)
        {

        }
    };

    struct Pattern
    {
        using type = Pattern;

        static Pattern from_bytes(uint8_t*& bytes)
        {

        }
    };

    std::variant<int, Material> material;
    std::variant<int, Pattern> pattern;

    static TrimComponent from_bytes(uint8_t*& bytes)
    {
        TrimComponent trim{};
        trim.material = IDOrX::from_bytes<Material>(bytes);
        trim.pattern = IDOrX::from_bytes<Pattern>(bytes);
        return trim;
    }
};
