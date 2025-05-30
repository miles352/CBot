#include "LoginStartC2SPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/UUID.hpp"

static const int MAX_USERNAME_LENGTH = 16;

LoginStartC2SPacket::LoginStartC2SPacket(const std::string& username, const std::string& uuid)
{
    if (username.size() > MAX_USERNAME_LENGTH)
    {
        throw std::length_error("Username is too long!");
    }
    this->username = username;

    this->uuid = uuid;
}

std::vector<uint8_t> LoginStartC2SPacket::encode()
{
    std::vector<uint8_t> name = MCString::from_string(username);
    
    uint8_t uuid_bytes[16];
    UUID::to_big_endian_bytes(uuid, uuid_bytes);

    std::vector<uint8_t> login = name;
    login.insert(login.end(), uuid_bytes, uuid_bytes + 16);

    return login;
}