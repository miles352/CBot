#pragma once
#include <string>

#include "packets/ServerboundPacket.hpp"

class ClientInformationC2SPacket final : public ServerboundPacket
{
public:
    enum class ChatMode
    {
        ENABLED,
        COMMANDS_ONLY,
        HIDDEN
    };

    enum SkinPartsMasks : uint8_t
    {
        CAPE = 0x01,
        JACKET = 0x02,
        LEFT_SLEEVE = 0x04,
        RIGHT_SLEEVE = 0x08,
        LEFT_PANTS_LEG = 0x10,
        RIGHT_PANTS_LEG = 0x20,
        HAT = 0x40
    };

    enum class MainHand
    {
        LEFT,
        RIGHT
    };

    enum class ParticleStatus
    {
        ALL,
        DECREASED,
        MINIMAL
    };

    ClientInformationC2SPacket(std::string&& locale, int8_t render_distance, ChatMode chat_mode, bool chat_colors,
        uint8_t skin_parts, MainHand main_hand, bool enable_text_filtering, bool allow_server_listings,
        ParticleStatus particle_status);

    static constexpr int id = 0x0C;
    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        std::string locale;
        int8_t render_distance;
        ChatMode chat_mode;
        bool chat_colors;
        uint8_t skin_parts;
        MainHand main_hand;
        bool enable_text_filtering;
        bool allow_server_listings;
        ParticleStatus particle_status;
    };

    Data data{};
};