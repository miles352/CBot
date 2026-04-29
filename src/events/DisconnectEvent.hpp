#pragma once

#include <string>

struct DisconnectEvent
{
    using Data = struct
    {
        std::string reason;
    };

    Data data{};
};
