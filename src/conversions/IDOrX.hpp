#pragma once
#include <cstdint>
#include <variant>

#include "VarInt.hpp"

namespace IDOrX
{
    template <typename X>
    std::variant<int, typename X::type> from_bytes(uint8_t*& bytes)
    {
        int id = VarInt::from_bytes(bytes);
        if (id != 0) return id - 1;
        return X::from_bytes(bytes);
    }
}
