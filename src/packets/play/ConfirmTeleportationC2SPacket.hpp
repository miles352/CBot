#pragma once
#include "EventBus.hpp"
#include "packets/ServerboundPacket.hpp"

class ConfirmTeleportationC2SPacket : public ServerboundPacket
{
    public:

    ConfirmTeleportationC2SPacket(int teleport_id);

    static constexpr int id = 0x00;

    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        int teleport_id;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<ConfirmTeleportationC2SPacket>& event);
};