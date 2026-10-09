#pragma once

#include "Vec3.hpp"

namespace AngleHelper
{
    static Vec3d unit_dir_vec(double yaw, double pitch)
    {
        using namespace std::numbers;

        return {
            -std::sin(yaw * pi / 180.0) * std::cos(pitch * pi / 180.0),
            -std::sin(pitch * pi / 180.0),
             std::cos(yaw * pi / 180.0) * std::cos(pitch * pi / 180.0)
        };
    }

    static Vec3d unit_dir_vec(double yaw)
    {
        return unit_dir_vec(yaw, 0.0);
    }
}
