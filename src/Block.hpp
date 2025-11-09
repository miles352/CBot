#pragma once

#ifndef NO_REGISTRY

#include <string>

/** A class that represents a block in the world. Only one instance of this class should exist for each unique block. */
class Block
{
public:

    class BlockSetting
    {
    public:
        constexpr BlockSetting()
        {
            this->resistance = 0.0F;
            this->hardness = 0.0F;
            this->tool_required = false;
            this->slipperiness = 0.6F;
            this->velocity_multiplier = 1.0F;
            this->jump_velocity_multiplier = 1.0F;
            this->collidable = true;
        }

        float resistance;
        float hardness;
        bool tool_required;
        float slipperiness;
        float velocity_multiplier;
        float jump_velocity_multiplier;
        bool collidable;

        constexpr BlockSetting& set_resistance(float resistance)
        {
            this->resistance = std::max(0.0F, resistance);
            return *this;
        }

        constexpr BlockSetting& set_hardness(float hardness)
        {
            this->hardness = hardness;
            return *this;
        }

        constexpr BlockSetting& requires_tool(bool required)
        {
            this->tool_required = required;
            return *this;
        }

        constexpr BlockSetting& set_slipperiness(float slipperiness)
        {
            this->slipperiness = slipperiness;
            return *this;
        }

        constexpr BlockSetting& set_velocity_multiplier(float velocity_multiplier)
        {
            this->velocity_multiplier = velocity_multiplier;
            return *this;
        }

        constexpr BlockSetting& set_jump_velocity_multiplier(float jump_velocity_multiplier)
        {
            this->jump_velocity_multiplier = jump_velocity_multiplier;
            return *this;
        }

        constexpr BlockSetting& set_collidable(bool collidable)
        {
            this->collidable = collidable;
            return *this;
        }
    };

    constexpr Block(std::string_view name, const BlockSetting& settings) : name(name), settings(settings) {};

    std::string_view name;

    constexpr float get_resistance() const { return this->settings.resistance; }
    constexpr float get_hardness() const { return this->settings.hardness; }
    constexpr bool get_tool_required() const { return this->settings.tool_required; }
    constexpr float get_slipperiness() const { return this->settings.slipperiness; }
    constexpr float get_velocity_multiplier() const { return this->settings.velocity_multiplier; }
    constexpr float get_jump_velocity_multiplier() const { return this->settings.jump_velocity_multiplier; }
    constexpr bool get_collidable() const { return this->settings.collidable; }

    /** @returns True if the block is any of the 3 types of air. */
    bool is_air() const;

    constexpr bool operator==(const Block& other) const
    {
        return this->name == other.name;
    }

private:
    BlockSetting settings;
};

#endif