#pragma once

#ifndef NO_REGISTRY

#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>

#include "math/BlockPos.hpp"

struct Node
{
    /** The actual cost from the start of the path to this node. */
    float g_cost;
    /** The heuristic, or estimated cost from this node to the end of the path. */
    float h_cost;
    /** g + h = f. This is the estimated final cost to get from the start to the end. */
    float f_cost;
    std::optional<BlockPos> parent;
    BlockPos position;

    bool operator==(const Node& other) const
    {
        return this->position == other.position;
    }
};

// template <>
// struct std::hash<Node>
// {
//     std::size_t operator()(const Node& node) const noexcept
//     {
//         return std::hash<Vec3i>{}(node.position);
//     }
// };

class Bot;

class Pathfinder
{
public:
    explicit Pathfinder(Bot& bot) : bot(bot) {};

    std::vector<BlockPos> path_to(BlockPos goal_pos);

private:
    BlockPos current_goal;

    std::vector<BlockPos> get_path(Node goal);

    // Open is set sorted by greatest f value
    static inline auto cmp = [](const Node& a, const Node& b) {
        if (a.f_cost != b.f_cost) return a.f_cost < b.f_cost;
        return a.position < b.position;
    };
    std::set<Node, decltype(cmp)> open;

    // no duplicates

    // set that is hashed by position but sorted by f value

    // std::priority_queue<Node, std::vector<Node>, decltype(cmp)> open;

    // Closed is unordered_set
    // std::unordered_set<Node> closed;

    std::unordered_map<Vec3i, Node> closed;

    Bot& bot;
};

#endif