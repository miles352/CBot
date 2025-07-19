#include "SynchronizePlayerPositionS2CPacket.hpp"

#include "Bot.hpp"
#include "ConfirmTeleportationC2SPacket.hpp"
#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"

SynchronizePlayerPositionS2CPacket::SynchronizePlayerPositionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* data_ptr = data.data();
    this->data.teleport_id = VarInt::from_array(data_ptr, nullptr);

    this->data.x = StandardTypes::from_array<double>(data_ptr);
    this->data.y = StandardTypes::from_array<double>(data_ptr);
    this->data.z = StandardTypes::from_array<double>(data_ptr);

    this->data.velocity_x = StandardTypes::from_array<double>(data_ptr);
    this->data.velocity_y = StandardTypes::from_array<double>(data_ptr);
    this->data.velocity_z = StandardTypes::from_array<double>(data_ptr);

    this->data.yaw = StandardTypes::from_array<float>(data_ptr);
    this->data.pitch = StandardTypes::from_array<float>(data_ptr);

    this->data.teleport_flags = StandardTypes::from_array<int>(data_ptr);

    event_bus.emit<SynchronizePlayerPositionS2CPacket>(this->data);
}

void SynchronizePlayerPositionS2CPacket::default_handler(const Bot& bot, const Event<SynchronizePlayerPositionS2CPacket>& event)
{
    bot.network_handler->write_packet(ConfirmTeleportationC2SPacket(event.data.teleport_id));
}

