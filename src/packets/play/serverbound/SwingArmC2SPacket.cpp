#include "packets/play/serverbound/SwingArmC2SPacket.hpp"

#include "conversions/VarInt.hpp"

SwingArmC2SPacket::SwingArmC2SPacket(bool offhand)
{
    this->data.offhand = offhand;
}

std::vector<uint8_t> SwingArmC2SPacket::encode()
{
    return VarInt::to_bytes(this->data.offhand);
}
