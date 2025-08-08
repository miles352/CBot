#include "BlockUpdateS2CPacket.hpp"

#include "Bot.hpp"
#include "conversions/Position.hpp"
#include "conversions/VarInt.hpp"

BlockUpdateS2CPacket::BlockUpdateS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* bytes = data.data();
    this->data.location = Position::from_bytes(bytes);
    this->data.new_block_id = VarInt::from_bytes(bytes);

    event_bus.emit<BlockUpdateS2CPacket>(this->data);
}

void BlockUpdateS2CPacket::default_handler(Bot& bot, Event<BlockUpdateS2CPacket>& event)
{
    std::optional<BlockState> old_state = bot.world.update_block(event.data.location, event.data.new_block_id);
    if (old_state.has_value())
    {
        std::optional<BlockState> new_state = bot.world.get_block_state(event.data.location);
        // TODO: Send block update event with old and new block state
    }
}
