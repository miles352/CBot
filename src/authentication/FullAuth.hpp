#pragma once

#include <string>

struct MCAccount
{
    std::string username;
    std::string uuid;
    std::string token;
};

namespace FullAuth
{
    MCAccount login();
}
