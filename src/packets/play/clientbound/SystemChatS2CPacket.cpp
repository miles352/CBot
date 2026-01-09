#include "SystemChatS2CPacket.hpp"

#include "conversions/TextComponent.hpp"
#include "conversions/UUID.hpp"
#include "conversions/VarInt.hpp"

SystemChatS2CPacket::SystemChatS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();

    this->data.content = TextComponent::from_bytes(bytes);
    this->data.overlay = StandardTypes::from_bytes<bool>(bytes);


    event_bus.emit<SystemChatS2CPacket>(this->data);
}
