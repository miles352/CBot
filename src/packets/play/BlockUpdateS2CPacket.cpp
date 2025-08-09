#include "BlockUpdateS2CPacket.hpp"

#include <chrono>

#include "Bot.hpp"
#include "conversions/Position.hpp"
#include "conversions/VarInt.hpp"
#include "events/BlockUpdateEvent.hpp"

BlockUpdateS2CPacket::BlockUpdateS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* bytes = data.data();
    this->data.location = Position::from_bytes(bytes);
    this->data.new_block_id = VarInt::from_bytes(bytes);

    event_bus.emit<BlockUpdateS2CPacket>(this->data);
}

void BlockUpdateS2CPacket::default_handler(Bot& bot, Event<BlockUpdateS2CPacket>& event)
{
    std::optional<std::pair<BlockState, BlockState>> states = bot.world.update_block(event.data.location, event.data.new_block_id);
    if (states.has_value())
    {
        bot.event_bus->emit<BlockUpdateEvent>(BlockUpdateEvent::Data(event.data.location, states.value().first, states.value().second));
    }
}
