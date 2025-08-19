#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"
#include "Bot.hpp"
#include "conversions/RegistryEntry.hpp"

class RegistryDataS2CPacket : public ClientboundPacket
{
public:
    RegistryDataS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x07;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        std::string registry_id;
        std::vector<RegistryEntry> entries;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<RegistryDataS2CPacket>& event);
};