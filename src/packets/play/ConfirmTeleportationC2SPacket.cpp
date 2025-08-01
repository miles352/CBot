#include "ConfirmTeleportationC2SPacket.hpp"

#include "conversions/VarInt.hpp"

ConfirmTeleportationC2SPacket::ConfirmTeleportationC2SPacket(int teleport_id)
{
    this->data.teleport_id = teleport_id;
}

std::vector<uint8_t> ConfirmTeleportationC2SPacket::encode()
{
    return VarInt::to_bytes(this->data.teleport_id);
}

void ConfirmTeleportationC2SPacket::default_handler(Bot &bot, Event<ConfirmTeleportationC2SPacket> &event)
{

}
