#include "LoginStartC2SPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/UUID.hpp"

LoginStartC2SPacket::LoginStartC2SPacket(const std::string& username, const std::string& uuid)
{
    std::vector<uint8_t> name = MCString::from_string(username);
    uint8_t uuid_bytes[16];
    UUID::to_big_endian_bytes(uuid, uuid_bytes);

    std::vector<uint8_t> login = name;
    login.insert(login.end(), uuid_bytes, uuid_bytes + 16);

    this->id = 0x0;
    this->data = login;
}