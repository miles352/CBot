#pragma once
#include "Bot.hpp"
#include "packets/ServerboundPacket.hpp"

class PlayerCommandC2SPacket final : public ServerboundPacket
{
public:
    enum class Action
    {
        START_SNEAKING,
        STOP_SNEAKING,
        LEAVE_BED,
        START_SPRINTING,
        STOP_SPRINTING,
        START_HORSE_JUMP,
        STOP_HORSE_JUMP,
        OPEN_VEHICLE_INVENTORY,
        START_FLYING
    };

    PlayerCommandC2SPacket(int entity_id, Action action, int jump_boost = 0);

    static constexpr int id = 0x28;
    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        int entity_id;
        Action action;
        int jump_boost;
    };

    Data data{};
};