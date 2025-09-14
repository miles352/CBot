#pragma once
#include "Box.hpp"
#include "registry/BlockRegistryGenerated.hpp"
#include "Bot.hpp"

class Physics
{
public:
    /** The speed that a player walks, in blocks per tick. */
    static constexpr float PLAYER_WALK_SPEED = 0.21600002F;
    /** The base movement speed of the player */
    static constexpr float PLAYER_MOVE_SPEED = 0.1F;
    static constexpr double PLAYER_GRAVITY = 0.08;

    static Vec3d adjust_movement_for_collisions(Bot& bot, Vec3d velocity, Box bot_bounding_box, std::vector<Box> collisions)
    {
        std::vector<Box> total_collisions = find_collisions_for_movement(bot, collisions, bot_bounding_box.stretch(velocity));
        if (total_collisions.empty()) return velocity;

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

        std::vector<Box> block_collisions = get_block_collisions(bot.world, moving_entity_bounding_box);
        collisions.insert(collisions.end(), block_collisions.begin(), block_collisions.end());

        return collisions;
    }

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
};
