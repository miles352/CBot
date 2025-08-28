#include "packets/configuration/serverbound/KnownPacksC2SPacket.hpp"

#include "conversions/DataPack.hpp"
#include "conversions/MCString.hpp"
#include "conversions/VarInt.hpp"

KnownPacksC2SPacket::KnownPacksC2SPacket()
{

}

std::vector<uint8_t> KnownPacksC2SPacket::encode()
{
    // TODO: automatically fill in version

    std::vector<uint8_t> core_pack = DataPack::to_array("minecraft", "core", "1.21.5");

    std::vector<uint8_t> prefix = VarInt::to_bytes(1);
    std::vector<uint8_t> bytes = prefix;
    bytes.insert(bytes.end(), core_pack.begin(), core_pack.end());

    return bytes;
}