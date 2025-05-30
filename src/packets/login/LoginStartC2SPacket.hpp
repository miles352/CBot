#pragma once

#include "packets/ServerboundPacket.hpp"

#include <string>

class LoginStartC2SPacket : public ServerboundPacket
{
    public:

    static const int id = 0x00;

    LoginStartC2SPacket(const std::string& username, const std::string& uuid);

    std::string username;
    std::string uuid;

    std::vector<uint8_t> encode() override;

    int get_id() const override { return this->id; };
};