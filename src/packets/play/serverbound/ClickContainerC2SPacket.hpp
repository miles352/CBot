#pragma once
#include "Bot.hpp"
#include "packets/ServerboundPacket.hpp"

class ClickContainerC2SPacket final : public ServerboundPacket
{
public:
    enum Mode
    {
        PICKUP,
        QUICK_MOVE,
        SWAP,
        CLONE,
        THROW,
        QUICK_CRAFT,
        PICKUP_ALL
    };

    /** Changed slots and carried item are currently not implemented, assigning a value to them will have no effect. TODO: Implement them */
    ClickContainerC2SPacket(int window_id, int state_id, int16_t slot, int8_t button, Mode mode, std::vector<int> changed_slots = {}, int carried_item = 0);

    static constexpr int id = 0x10;
    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        int window_id;
        int state_id;
        int16_t slot;
        int8_t button;
        Mode mode;
        std::vector<int> changed_slots;
        int carried_item;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<ClickContainerC2SPacket>& event);
};
