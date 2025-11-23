#include "DisconnectS2CPacket.hpp"

#include <iostream>

#include "conversions/MCString.hpp"
#include "conversions/NBT.hpp"

DisconnectS2CPacket::DisconnectS2CPacket(const std::vector<uint8_t>& data, EventBus &event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.reason = TextComponent::from_bytes(bytes);

    event_bus.emit<DisconnectS2CPacket>(this->data);
}

void DisconnectS2CPacket::default_handler(Bot& bot, Event<DisconnectS2CPacket>& event)
{
    std::cout << "Disconnected: " << event.data.reason.to_string() << std::endl;
}
