#pragma once

#include <vector>
#include <cstdint>
#include <optional>

#include "math/Vec3.hpp"
#include "packets/ServerboundPacket.hpp"

class InteractC2SPacket final : public ServerboundPacket
{
public:

    enum class Type
    {
        INTERACT,
        ATTACK,
        INTERACT_AT
    };

    InteractC2SPacket(int entity_id, Type type, std::optional<Vec3f> target, std::optional<bool> offhand, bool sneaking)
        : data(entity_id, type, target, offhand, sneaking) {};

    static constexpr int id = 0x18;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        int entity_id;
        Type type;
        std::optional<Vec3f> target;
        std::optional<bool> offhand;
        bool sneaking;
    };

    Data data{};
};
