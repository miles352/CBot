#pragma once

#include "conversions/UUID.hpp"

struct PlayerJoinEvent
{
    using Data = struct
    {
        UUID uuid;
        std::string username;
    };

    Data data;
};
