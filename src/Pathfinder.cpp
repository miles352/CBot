#include "Pathfinder.hpp"

#include "Bot.hpp"
#include "registry/BlockRegistryGenerated.hpp"

std::vector<BlockPos> Pathfinder::path_to(BlockPos goal_pos)
{
    this->open.emplace(0.0, 0.0, 0.0, std::nullopt, this->bot.get_block_pos());
    while (!this->open.empty())
    {
        Node q = *this->open.begin();
        this->open.erase(open.begin());
        // printf("pos %s\n", q.position.to_string().c_str());
        static constexpr int directions[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

        for (const auto& direction : directions)
        {
            BlockPos neighbor_pos = q.position.add(direction[0], 0, direction[1]);
            // printf("Neighbor pos %s\n", neighbor_pos.to_string().c_str());
            std::optional<BlockState> block_state = bot.world.get_block_state(neighbor_pos);
            if (!block_state.has_value() || block_state.value().get_block() != Blocks::AIR) continue;

            Node neighbor(0.0, 0.0, 0.0, q.position, neighbor_pos);

            if (neighbor_pos == goal_pos)
            {
                this->closed[q.position] = q;

                // this->print_path(neighbor);

                return this->get_path(neighbor);
            }

            // neighbor.g_cost = static_cast<float>(q.g_cost + neighbor_pos.distance_to(q.position));
            neighbor.g_cost = static_cast<float>(q.g_cost + 1.0);
            neighbor.h_cost = static_cast<float>(neighbor_pos.manhattan_distance_to(goal_pos));
            neighbor.f_cost = neighbor.g_cost + neighbor.h_cost;
            // printf("F Cost: %f\n", neighbor.f_cost);

            auto it = this->closed.find(neighbor.position);

            if (it == this->closed.end() || it->second.f_cost > neighbor.f_cost)
            {
                this->open.insert(neighbor);
            }

        }
        // printf("\n");
        // for (Node n : this->open)
        // {
        //     printf("Position: %s, F: %f\n", n.position.to_string().c_str(), n.f_cost);
        // }
        // printf("\n\n\n");
        this->closed[q.position] = q;
    }
    printf("Impossible path found\n");
}

std::vector<BlockPos> Pathfinder::get_path(Node goal)
{
    std::vector<BlockPos> path;
    path.push_back(goal.position);
    do
    {
        goal = this->closed[goal.parent.value()];

        path.push_back(goal.position);
    }
    while (goal.parent.has_value());

    std::reverse(path.begin(), path.end());

    // for (BlockPos block_pos : path)
    // {
    //     printf("Pos: %s\n", block_pos.to_string().c_str());
    // }
    // printf("Steps: %d\n", path.size());

    return path;
}

