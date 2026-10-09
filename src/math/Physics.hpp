#pragma once

#include "Box.hpp"
#include "registry/BlockRegistryGenerated.hpp"
#include "AngleHelper.hpp"

class Physics
{
public:
    /** The speed that a player walks, in blocks per tick. */
    static constexpr float PLAYER_WALK_SPEED = 0.21600002F;
    /** The base movement speed of the player */
    static constexpr float PLAYER_MOVE_SPEED = 0.1F;
    static constexpr double PLAYER_GRAVITY = 0.08;

    static Vec3d calc_gliding_velocity(Vec3d velocity, float yaw, float pitch, double gravity)
    {
        Vec3d rot_vec = AngleHelper::unit_dir_vec(yaw, pitch);
        double pitch_rads = pitch * std::numbers::pi / 180;
        double rot_horizontal_length = rot_vec.horizontal_length();
        double velocity_length = velocity.horizontal_length();
        double pitch_cos_squared = std::pow(std::cos(pitch_rads), 2);
        velocity = velocity.add(0.0, gravity * (-1.0 + pitch_cos_squared * 0.75), 0.0);

        if (velocity.y < 0.0 && rot_horizontal_length > 0.0)
        {
            double lift = velocity.y * -0.1 * pitch_cos_squared;
            velocity = velocity.add(rot_vec.x * lift / rot_horizontal_length,
                                    lift,
                                    rot_vec.z * lift / rot_horizontal_length);
        }

        if (pitch_rads < 0.0 && rot_horizontal_length > 0.0)
        {
            double climb_boost = velocity_length * -std::sin(pitch_rads) * 0.04;
            velocity = velocity.add(-rot_vec.x * climb_boost / rot_horizontal_length,
                                    climb_boost * 3.2,
                                    -rot_vec.z * climb_boost / rot_horizontal_length);
        }

        if (rot_horizontal_length > 0.0)
        {
            velocity = velocity.add((rot_vec.x / rot_horizontal_length * velocity_length - velocity.x) * 0.1,
                                    0.0,
                                    (rot_vec.z / rot_horizontal_length * velocity_length - velocity.z) * 0.1);
        }

        return velocity.multiply(0.99, 0.98, 0.99);
    }

    static Vec3d adjust_movement_for_collisions(Bot& bot, Vec3d velocity, Box bot_bounding_box, std::vector<Box> collisions)
    {
        // printf("Bounding box: %s %s\n", bot_bounding_box.min.to_string().c_str(), bot_bounding_box.max.to_string().c_str());
        std::vector<Box> total_collisions = find_collisions_for_movement(bot, collisions, bot_bounding_box.stretch(velocity));
        if (total_collisions.empty())
        {
            // printf("NO collisiojs??\n");
            return velocity;
        }

        // for (Box box : total_collisions)
        // {
        //     printf("Collision at %s to %s\n\n", box.min.to_string().c_str(), box.max.to_string().c_str());
        // }

        Vec3d axis_order = {1, 0, 0};
        if (std::abs(velocity.x) < std::abs(velocity.z))
        {
            axis_order = {0, 0, 1};
        }

        Vec3d new_velocity{};

        for (int i = 0; i < 2; i++)
        {
            double axis_component = velocity.dot(axis_order);
            if (std::abs(axis_component) > 1.0e-7)
            {
                // The component after it has gone as far as it can into the collision
                double clamped_component = axis_component;
                Box moved_box = bot_bounding_box.offset(new_velocity);

                for (Box collision : total_collisions)
                {
                    if (!collision.intersects(moved_box.stretch(axis_order.scale(axis_component)))) continue;

                    if (axis_component > 0.0) clamped_component = std::min(clamped_component, collision.min.dot(axis_order) - moved_box.max.dot(axis_order));
                    else if (axis_component < 0.0) clamped_component = std::max(clamped_component, collision.max.dot(axis_order) - moved_box.min.dot(axis_order));
                }
                new_velocity = new_velocity.add(axis_order.scale(clamped_component));
            }

            axis_order = {axis_order.z, 0, axis_order.x};
        }
        return new_velocity;
    }

    static std::vector<Box> find_collisions_for_movement(Bot& bot, std::vector<Box> regular_collisions, Box moving_entity_bounding_box)
    {
        std::vector<Box> collisions = regular_collisions;

        // TODO: Add world border collisions

        // printf("Bounding box: %s %s\n", moving_entity_bounding_box.min.to_string().c_str(), moving_entity_bounding_box.max.to_string().c_str());
#ifndef NO_REGISTRY
        std::vector<Box> block_collisions = get_block_collisions(bot.world, moving_entity_bounding_box);
#else
        std::vector<Box> block_collisions = {};
#endif
        collisions.insert(collisions.end(), block_collisions.begin(), block_collisions.end());

        return collisions;
    }

#ifndef NO_REGISTRY
    static std::vector<Box> get_block_collisions(World& world, Box moving_entity_bounding_box)
    {

        int x_min = std::floor(moving_entity_bounding_box.min.x) - 1;
        int x_max = std::floor(moving_entity_bounding_box.max.x) + 1;
        int y_min = std::floor(moving_entity_bounding_box.min.y) - 1;
        int y_max = std::floor(moving_entity_bounding_box.max.y) + 1;
        int z_min = std::floor(moving_entity_bounding_box.min.z) - 1;
        int z_max = std::floor(moving_entity_bounding_box.max.z) + 1;

        std::vector<Box> collisions;

        for (int x = x_min; x <= x_max; x++)
        {
            for (int y = y_min; y <= y_max; y++)
            {
                for (int z = z_min; z <= z_max; z++)
                {
                    BlockPos pos(x, y, z);

                    std::optional<BlockState> state = world.get_block_state(pos);

                    if (state.has_value())
                    {
                        // printf("Block state: %s collidable: %d\n", state.value().get_block().name.c_str(), state.value().get_block().get_collidable());
                        if (!state.value().get_block().get_collidable()) continue;
                        Box block_box(pos);
                        if (block_box.intersects(moving_entity_bounding_box))
                        {
                            collisions.push_back(block_box);
                        }
                    }
                }
            }
        }

        return collisions;
    }
#endif
};
