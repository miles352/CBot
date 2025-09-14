#include "GameEventS2CPacket.hpp"

#include "Bot.hpp"
#include "conversions/StandardTypes.hpp"
#include "packets/play/serverbound/PlayerLoadedC2SPacket.hpp"

GameEventS2CPacket::GameEventS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* bytes = data.data();
    this->data.event = static_cast<GameEvent>(StandardTypes::from_bytes<uint8_t>(bytes));
    this->data.value = StandardTypes::from_bytes<float>(bytes);

    event_bus.emit<GameEventS2CPacket>(this->data);
}

void GameEventS2CPacket::default_handler(Bot& bot, Event<GameEventS2CPacket>& event)
{
    if (event.data.event == GameEvent::LEVEL_READY)
    {
        bot.network_handler.write_packet(PlayerLoadedC2SPacket());
    }
}
