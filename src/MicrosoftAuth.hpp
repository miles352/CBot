#pragma once

#include <string>

struct MCAccount
{
    std::string username;
    std::string uuid;
    std::string token;
};

class MicrosoftAuth
{
    public:
    MicrosoftAuth() = delete;

    static MCAccount login_full();

};
