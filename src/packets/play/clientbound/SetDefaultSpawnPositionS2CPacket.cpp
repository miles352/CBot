#include "SetDefaultSpawnPositionS2CPacket.hpp"

#include "conversions/Position.hpp"

SetDefaultSpawnPositionS2CPacket::SetDefaultSpawnPositionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.position = Position::from_bytes(bytes);
    this->data.angle = StandardTypes::from_bytes<float>(bytes);

    event_bus.emit<SetDefaultSpawnPositionS2CPacket>(this->data);
}
