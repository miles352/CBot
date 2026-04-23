#include "SetRenderDistanceS2CPacket.hpp"

#include "conversions/VarInt.hpp"

SetRenderDistanceS2CPacket::SetRenderDistanceS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.render_distance = VarInt::from_bytes(bytes);

    event_bus.emit<SetRenderDistanceS2CPacket>(this->data);
}
