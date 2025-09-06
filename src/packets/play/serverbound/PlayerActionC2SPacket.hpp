#pragma once
#include "math/BlockPos.hpp"
#include "packets/ServerboundPacket.hpp"

#include "registry/BlockFace.hpp"

enum class ActionStatus
{
    STARTED_DIGGING,
    CANCELLED_DIGGING,
    FINISHED_DIGGING,
    DROP_ITEM_STACK,
    DROP_ITEM,
    UPDATE_HELD_ITEM_STATE,
    SWAP_OFFHAND
};

class PlayerActionC2SPacket : public ServerboundPacket
{
public:

    PlayerActionC2SPacket(ActionStatus status, BlockPos position, BlockFace face, int sequence);

    static constexpr int id = 0x27;
    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        ActionStatus status;
        BlockPos position;
        BlockFace face;
        int sequence;
    };

    Data data{};

    // static void default_handler(Bot& bot, Event<PacketName>& event);
};