#pragma once
#include "packets/ServerboundPacket.hpp"
#include "EventBus.hpp"

class SetHeldItemC2SPacket : public ServerboundPacket
{
public:
    /** @param slot The hotbar slot, 0-8. */
    explicit SetHeldItemC2SPacket(int16_t slot);

    static constexpr int id = 0x33;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        int16_t slot;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<SetHeldItemC2SPacket>& event);
};