#include "SetTabHeaderFooterS2CPacket.hpp"

SetTabHeaderFooterS2CPacket::SetTabHeaderFooterS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();

    this->data.header = TextComponent::from_bytes(bytes);
    this->data.footer = TextComponent::from_bytes(bytes);

    event_bus.emit<SetTabHeaderFooterS2CPacket>(this->data);
}
