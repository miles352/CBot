#pragma once
#include <cstdint>
#include <vector>

#include "conversions/PrefixedArray.hpp"
#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"

struct FireworkExplosion
{
    enum class Shape
    {
        SMALL_BALL,
        LARGE_BALL,
        STAR,
        CREEPER,
        BURST
    };

    Shape shape;
    std::vector<int32_t> colors;
    std::vector<int32_t> fade_colors;
    bool has_trail;
    bool has_twinkle;

    static FireworkExplosion from_bytes(uint8_t*& bytes)
    {
        FireworkExplosion fe;
        fe.shape = static_cast<Shape>(VarInt::from_bytes(bytes));
        fe.colors = PrefixedArray::from_bytes_fixed<int32_t>(bytes);
        fe.fade_colors = PrefixedArray::from_bytes_fixed<int32_t>(bytes);
        fe.has_trail = StandardTypes::from_bytes<bool>(bytes);
        fe.has_twinkle = StandardTypes::from_bytes<bool>(bytes);
        return fe;
    }
};

struct FireworkComponent
{
    int flight_duration;
    std::vector<FireworkExplosion> explosions;

    static FireworkComponent from_bytes(uint8_t*& bytes)
    {
        FireworkComponent fc;
        fc.flight_duration = VarInt::from_bytes(bytes);
        fc.explosions = PrefixedArray::from_bytes_variable_typed<FireworkExplosion>(bytes);
        return fc;
    }
};