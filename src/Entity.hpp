#pragma once

#include "conversions/UUID.hpp"
#include "math/Vec3.hpp"
#include "registry/EntityRegistryGenerated.hpp"

struct Entity
{
    int id;
    UUID uuid;
    EntityType type;
    Vec3d pos;
    float pitch;
    float yaw;
    float head_yaw;
    int data;
    Vec3d velocity;
    // on_ground not stored because it is not in spawn entity packet, although it is sent in position/rotation updates
};
