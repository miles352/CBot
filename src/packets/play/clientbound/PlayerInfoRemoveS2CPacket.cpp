#include "PlayerInfoRemoveS2CPacket.hpp"

#include "Bot.hpp"
#include "conversions/PrefixedArray.hpp"
#include "events/PlayerLeaveEvent.hpp"

PlayerInfoRemoveS2CPacket::PlayerInfoRemoveS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* bytes = data.data();
    this->data.uuids_to_remove = PrefixedArray::from_bytes_variable_typed<UUID>(bytes);

    event_bus.emit<PlayerInfoRemoveS2CPacket>(this->data);
}

void PlayerInfoRemoveS2CPacket::default_handler(Bot& bot, Event<PlayerInfoRemoveS2CPacket>& event)
{
    for (const UUID& uuid : event.data.uuids_to_remove)
    {
        bot.event_bus.emit<PlayerLeaveEvent>(PlayerLeaveEvent::Data{uuid});
    }
}
