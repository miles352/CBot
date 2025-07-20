#include "LoginS2CPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/Position.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/StandardTypes.hpp"

LoginS2CPacket::LoginS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* ptr = data.data();
    this->data.entity_id = StandardTypes::from_array<int>(ptr);
    this->data.hardcore = StandardTypes::from_array<bool>(ptr);
    this->data.dimension_identifiers = PrefixedArray::from_array_variably_sized<MCString>(ptr);
    this->data.max_players = VarInt::from_array(ptr);
    this->data.render_distance = VarInt::from_array(ptr);
    this->data.simulation_distance = VarInt::from_array(ptr);
    this->data.reduced_debug_info = StandardTypes::from_array<bool>(ptr);
    this->data.respawn_screen_enabled = StandardTypes::from_array<bool>(ptr);
    this->data.limited_crafting = StandardTypes::from_array<bool>(ptr);
    this->data.dimension_type = VarInt::from_array(ptr);
    this->data.current_dimension_identifier = MCString::from_array(ptr);
    this->data.hashed_seed = StandardTypes::from_array<long>(ptr);
    this->data.gamemode = static_cast<Gamemode>(StandardTypes::from_array<uint8_t>(ptr));
    int8_t previous_gamemode = StandardTypes::from_array<int8_t>(ptr);
    if (previous_gamemode < 0)
    {
        this->data.previous_gamemode = std::nullopt;
    }
    else
    {
        this->data.previous_gamemode = static_cast<Gamemode>(previous_gamemode);
    }
    this->data.debug_mode_world = StandardTypes::from_array<bool>(ptr);
    this->data.superflat = StandardTypes::from_array<bool>(ptr);
    if ((this->data.has_death_location = StandardTypes::from_array<bool>(ptr)))
    {
        this->data.death_dimension = MCString::from_array(ptr);
        this->data.death_location = Position::from_array(ptr);
    }
    else
    {
        this->data.death_dimension = std::nullopt;
        this->data.death_location = std::nullopt;
    }
    this->data.portal_cooldown = VarInt::from_array(ptr);
    this->data.sea_level = VarInt::from_array(ptr);
    this->data.enforce_secure_chat = StandardTypes::from_array<bool>(ptr);

    // if (this->data.has_death_location)
    // {
    //     printf("death identifier: %s, death position: %s\n", this->data.death_dimension.value().c_str(), this->data.death_location.value().to_string().c_str());
    // }

    event_bus.emit<LoginS2CPacket>(this->data);
}
