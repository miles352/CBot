#include "packets/play/clientbound/SynchronizePlayerPositionS2CPacket.hpp"

#include "Bot.hpp"
#include "../serverbound/ConfirmTeleportationC2SPacket.hpp"
#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"
#include "packets/play/serverbound/SetPlayerPositionRotationC2SPacket.hpp"

SynchronizePlayerPositionS2CPacket::SynchronizePlayerPositionS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus)
{
    const uint8_t* data_ptr = data.data();
    this->data.teleport_id = VarInt::from_bytes(data_ptr);

    this->data.position.x = StandardTypes::from_bytes<double>(data_ptr);
    this->data.position.y = StandardTypes::from_bytes<double>(data_ptr);
    this->data.position.z = StandardTypes::from_bytes<double>(data_ptr);

    this->data.velocity.x = StandardTypes::from_bytes<double>(data_ptr);
    this->data.velocity.y = StandardTypes::from_bytes<double>(data_ptr);
    this->data.velocity.z = StandardTypes::from_bytes<double>(data_ptr);

    this->data.yaw = StandardTypes::from_bytes<float>(data_ptr);
    this->data.pitch = StandardTypes::from_bytes<float>(data_ptr);

    this->data.teleport_flags = TeleportFlags::from_array(data_ptr);

    event_bus.emit<SynchronizePlayerPositionS2CPacket>(this->data);
}

void SynchronizePlayerPositionS2CPacket::default_handler(Bot& bot, const Event<SynchronizePlayerPositionS2CPacket>& event)
{
    bot.position.x = event.data.teleport_flags.relative_x ? bot.position.x + event.data.position.x : event.data.position.x;
    bot.position.y = event.data.teleport_flags.relative_y ? bot.position.y + event.data.position.y : event.data.position.y;
    bot.position.z = event.data.teleport_flags.relative_z ? bot.position.z + event.data.position.z : event.data.position.z;

    bot.velocity.x = event.data.teleport_flags.relative_velocity_x ? bot.velocity.x + event.data.velocity.x : event.data.velocity.x;
    bot.velocity.y = event.data.teleport_flags.relative_velocity_y ? bot.velocity.y + event.data.velocity.y : event.data.velocity.y;
    bot.velocity.z = event.data.teleport_flags.relative_velocity_z ? bot.velocity.z + event.data.velocity.z : event.data.velocity.z;

    bot.yaw = event.data.teleport_flags.relative_yaw ? bot.yaw + event.data.yaw : event.data.yaw;
    bot.pitch = event.data.teleport_flags.relative_pitch ? bot.pitch + event.data.pitch : event.data.pitch;

    // Idk what the rotate velocity thingy is for: event.data.teleport_flags.rotate_velocity_rotation

    // TODO: Set last position to current position + velocity (see setPosition in ClientPlayNetworkHandler.java)

    bot.network_handler.write_packet(ConfirmTeleportationC2SPacket(event.data.teleport_id));
    bot.network_handler.write_packet(SetPlayerPositionRotationC2SPacket(bot.position, bot.yaw, bot.pitch, false, false));
}
