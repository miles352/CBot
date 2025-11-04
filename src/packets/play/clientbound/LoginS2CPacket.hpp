#pragma once
#include "EventBus.hpp"
#include "conversions/MCString.hpp"
#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"
#include "registry/Gamemode.hpp"

class LoginS2CPacket : public ClientboundPacket
{
public:

    LoginS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x2B;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int entity_id;
        bool hardcore;
        std::vector<std::string> dimension_identifiers;
        int max_players;
        int render_distance;
        int simulation_distance;
        bool reduced_debug_info;
        bool respawn_screen_enabled;
        bool limited_crafting;
        int dimension_type;
        std::string current_dimension_identifier;
        /** First 8 bytes of the SHA-256 hash of the world's seed. */
        int64_t hashed_seed;
        Gamemode gamemode;
        std::optional<Gamemode> previous_gamemode;
        bool debug_mode_world;
        bool superflat;
        bool has_death_location;
        std::optional<std::string> death_dimension;
        std::optional<Vec3i> death_location;
        int portal_cooldown;
        int sea_level;
        bool enforce_secure_chat;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<LoginS2CPacket>& event);
};