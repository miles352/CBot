#pragma once

#include <string>

/** A class that represents a block in the world. Only one instance of this class should exist for each unique block. */
class Block
{
public:

    class BlockSetting
    {
    public:
        BlockSetting();
        float resistance;
        float hardness;
        bool tool_required;
        float slipperiness;
        float velocity_multiplier;
        float jump_velocity_multiplier;
        bool collidable;
        BlockSetting& set_resistance(float resistance);
        BlockSetting& set_hardness(float hardness);
        BlockSetting& requires_tool(bool required);
        BlockSetting& set_slipperiness(float slipperiness);
        BlockSetting& set_velocity_multiplier(float velocity_multiplier);
        BlockSetting& set_jump_velocity_multiplier(float jump_velocity_multiplier);
        BlockSetting& set_collidable(bool collidable);
    };

    Block(std::string name, const BlockSetting &settings);

    const std::string name;

    float get_resistance() const;
    float get_hardness() const;
    bool get_tool_required() const;
    float get_slipperiness() const;
    float get_velocity_multiplier() const;
    float get_jump_velocity_multiplier() const;
    bool get_collidable() const;

    /** @returns True if the block is any of the 3 types of air. */
    bool is_air() const;

    bool operator==(const Block& other) const
    {
        return this->name == other.name;
    }

private:
    BlockSetting settings;
};
