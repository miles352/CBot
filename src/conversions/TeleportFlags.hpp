#pragma once
#include <cstdint>

#include "StandardTypes.hpp"

/** A true value means the teleportation on the corresponding axis is relative, and a false value means it is absolute. */
class TeleportFlags
{
public:
    bool relative_x;
    bool relative_y;
    bool relative_z;
    bool relative_yaw;
    bool relative_pitch;
    bool relative_velocity_x;
    bool relative_velocity_y;
    bool relative_velocity_z;
    bool rotate_velocity_rotation;

    static TeleportFlags from_array(const std::uint8_t*& array)
    {
        int bit_field = StandardTypes::from_bytes<int>(array);
        TeleportFlags flags;
        flags.relative_x = bit_field & 0x0001;
        flags.relative_y = bit_field & 0x0002;
        flags.relative_z = bit_field & 0x0004;
        flags.relative_yaw = bit_field & 0x0008;
        flags.relative_pitch = bit_field & 0x0010;
        flags.relative_velocity_x = bit_field & 0x0020;
        flags.relative_velocity_y = bit_field & 0x0040;
        flags.relative_velocity_z = bit_field & 0x0080;
        flags.rotate_velocity_rotation = bit_field & 0x0100;
        return flags;
    }
};
