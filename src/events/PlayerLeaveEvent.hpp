#pragma once

#include "conversions/UUID.hpp"

struct PlayerLeaveEvent
{
    using Data = struct
    {
        UUID uuid;
    };

    Data data;
};
