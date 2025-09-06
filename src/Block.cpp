#include "Block.hpp"

#include <utility>

Block::Block(std::string name, const BlockSetting &settings) : name(std::move(name)), settings(settings) {}

Block::BlockSetting::BlockSetting()
{
    this->resistance = 0.0F;
    this->hardness = 0.0F;
    this->tool_required = false;
    this->slipperiness = 0.6F;
    this->velocity_multiplier = 1.0F;
    this->jump_velocity_multiplier = 1.0F;
    this->collidable = true;
}

Block::BlockSetting& Block::BlockSetting::requires_tool(const bool required)
{
    this->tool_required = required;
    return *this;
}

Block::BlockSetting& Block::BlockSetting::set_hardness(const float hardness)
{
    this->hardness = hardness;
    return *this;
}

Block::BlockSetting& Block::BlockSetting::set_resistance(const float resistance)
{
    this->resistance = std::max(0.0F, resistance);
    return *this;
}

Block::BlockSetting& Block::BlockSetting::set_jump_velocity_multiplier(const float jump_velocity_multiplier)
{
    this->jump_velocity_multiplier = jump_velocity_multiplier;
    return *this;
}

Block::BlockSetting& Block::BlockSetting::set_slipperiness(float slipperiness)
{
    this->slipperiness = slipperiness;
    return *this;
}

Block::BlockSetting& Block::BlockSetting::set_velocity_multiplier(float velocity_multiplier)
{
    this->velocity_multiplier = velocity_multiplier;
    return *this;
}

Block::BlockSetting& Block::BlockSetting::set_collidable(bool collidable)
{
    this->collidable = collidable;
    return *this;
}

float Block::get_hardness() const
{
    return this->settings.hardness;
}

float Block::get_jump_velocity_multiplier() const
{
    return this->settings.jump_velocity_multiplier;
}

float Block::get_resistance() const
{
    return this->settings.resistance;
}

float Block::get_slipperiness() const
{
    return this->settings.slipperiness;
}

bool Block::get_tool_required() const
{
    return this->settings.tool_required;
}

float Block::get_velocity_multiplier() const
{
    return this->settings.velocity_multiplier;
}

bool Block::get_collidable() const
{
    return this->settings.collidable;
}
