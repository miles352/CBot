#include "LoginS2CPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/Position.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/StandardTypes.hpp"
#include "Bot.hpp"

LoginS2CPacket::LoginS2CPacket(const std::vector<uint8_t>& data, EventBus &event_bus)
{
    const uint8_t* ptr = data.data();
    this->data.entity_id = StandardTypes::from_bytes<int>(ptr);
    this->data.hardcore = StandardTypes::from_bytes<bool>(ptr);
    this->data.dimension_identifiers = PrefixedArray::from_bytes_variable<MCString>(ptr);
    this->data.max_players = VarInt::from_bytes(ptr);
    this->data.render_distance = VarInt::from_bytes(ptr);
    this->data.simulation_distance = VarInt::from_bytes(ptr);
    this->data.reduced_debug_info = StandardTypes::from_bytes<bool>(ptr);
    this->data.respawn_screen_enabled = StandardTypes::from_bytes<bool>(ptr);
    this->data.limited_crafting = StandardTypes::from_bytes<bool>(ptr);
    this->data.dimension_type = VarInt::from_bytes(ptr);
    this->data.current_dimension_identifier = MCString::from_bytes(ptr);
    this->data.hashed_seed = StandardTypes::from_bytes<int64_t>(ptr);
    this->data.gamemode = static_cast<Gamemode>(StandardTypes::from_bytes<uint8_t>(ptr));
    int8_t previous_gamemode = StandardTypes::from_bytes<int8_t>(ptr);
    if (previous_gamemode < 0)
    {
        this->data.previous_gamemode = std::nullopt;
    }
    else
    {
        this->data.previous_gamemode = static_cast<Gamemode>(previous_gamemode);
    }
    this->data.debug_mode_world = StandardTypes::from_bytes<bool>(ptr);
    this->data.superflat = StandardTypes::from_bytes<bool>(ptr);
    if ((this->data.has_death_location = StandardTypes::from_bytes<bool>(ptr)))
    {
        this->data.death_dimension = MCString::from_bytes(ptr);
        this->data.death_location = Position::from_bytes(ptr);
    }
    else
    {
        this->data.death_dimension = std::nullopt;
        this->data.death_location = std::nullopt;
    }
    this->data.portal_cooldown = VarInt::from_bytes(ptr);
    this->data.sea_level = VarInt::from_bytes(ptr);
    this->data.enforce_secure_chat = StandardTypes::from_bytes<bool>(ptr);

    event_bus.emit<LoginS2CPacket>(this->data);
}

#ifndef NO_REGISTRY
void LoginS2CPacket::default_handler(Bot& bot, Event<LoginS2CPacket>& event)
{
    bot.world._current_dimension_index = event.data.dimension_type;
}
#endif
