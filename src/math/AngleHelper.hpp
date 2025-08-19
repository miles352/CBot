#pragma once
#include "Vec3.hpp"

namespace AngleHelper
{
    static Vec3d unit_direction_vec(const double yaw)
    {
        return Vec3d(-std::sin(yaw * std::numbers::pi / 180.0), 0, std::cos(yaw * std::numbers::pi / 180.0));
    }
}
