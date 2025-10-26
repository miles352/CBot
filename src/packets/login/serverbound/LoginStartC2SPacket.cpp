#include "LoginStartC2SPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/UUID.hpp"

static constexpr int MAX_USERNAME_LENGTH = 16;

LoginStartC2SPacket::LoginStartC2SPacket(const std::string& username, const std::string& uuid)
{
    if (username.size() > MAX_USERNAME_LENGTH)
    {
        throw std::length_error("Username is too long!");
    }
    this->data.username = username;

    this->data.uuid = uuid;
}

std::vector<uint8_t> LoginStartC2SPacket::encode()
{
    std::vector<uint8_t> name = MCString::to_bytes(this->data.username);

    UUID uuid{this->data.uuid};

    std::vector<uint8_t> login = name;
    login.insert(login.end(), uuid.bytes.begin(), uuid.bytes.end());

    return login;
}