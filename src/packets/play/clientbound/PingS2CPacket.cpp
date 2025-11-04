#include "packets/play/clientbound/PingS2CPacket.hpp"

#include "../serverbound/PongC2SPacket.hpp"
#include "conversions/StandardTypes.hpp"

PingS2CPacket::PingS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus)
{
    const uint8_t* ptr = data.data();
    this->data.id = StandardTypes::from_bytes<int>(ptr);

    // printf("Received ping with id: %d\n", this->data.id);

    event_bus.emit<PingS2CPacket>(this->data);
}

void PingS2CPacket::default_handler(Bot& bot, Event<PingS2CPacket>& event)
{
    bot.network_handler.write_packet(PongC2SPacket(event.data.id));
}
