#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

enum class GameEvent
{
    LEVEL_READY = 13
};

class GameEventS2CPacket : public ClientboundPacket
{
public:
    GameEventS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x22;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        GameEvent event;
        float value;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<GameEventS2CPacket>& event);
};
