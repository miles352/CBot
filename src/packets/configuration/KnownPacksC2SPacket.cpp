#include "packets/configuration/KnownPacksC2SPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/VarInt.hpp"

KnownPacksC2SPacket::KnownPacksC2SPacket()
{

}

std::vector<uint8_t> KnownPacksC2SPacket::encode()
{
    // TODO: remove default packs
    std::vector<uint8_t> name_space = MCString::from_string("minecraft");
    std::vector<uint8_t> ID = MCString::from_string("core");
    std::vector<uint8_t> version = MCString::from_string("1.21.7");

    std::vector<uint8_t> core_pack = name_space;
    core_pack.insert(core_pack.end(), ID.begin(), ID.end());
    core_pack.insert(core_pack.end(), version.begin(), version.end());

    std::vector<uint8_t> prefix = VarInt::from_int(1);
    std::vector<uint8_t> bytes = prefix;
    bytes.insert(bytes.end(), core_pack.begin(), core_pack.end());

    return bytes;
}