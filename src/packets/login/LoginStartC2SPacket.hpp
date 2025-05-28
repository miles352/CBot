#pragma once

#include "packets/Packet.hpp"

#include <string>

class LoginStartC2SPacket : public Packet
{
    public:
    LoginStartC2SPacket(const std::string& username, const std::string& uuid);
};