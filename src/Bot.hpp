#pragma once

#include <queue>

#include "EventBus.hpp"
#include "NetworkHandler.hpp"
#include "Pathfinder.hpp"
#include "math/Vec3.hpp"
#include "World.hpp"
#include "math/Box.hpp"
#include "packets/play/clientbound/ChunkDataS2CPacket.hpp"


class Bot
{
public:
    Bot(const std::string& server_ip, const std::string& server_port);

    void start();

    EventBus event_bus;
    NetworkHandler network_handler;

    World world;
    Pathfinder pathfinder;

    /** The number of ticks that have passed since the bot was started */
    int ticks;
    /** The amount of health the bot has. 0-20 */
    float health{};
    /** The amount of food the bot has. 0-20 */
    int food{};
    /** The amount of saturation the bot has. 0-5 */
    float saturation{};
    /** The bots exact position */
    Vec3d position{};
    /** The bots velocity */
    Vec3d velocity{};
    /** The bots yaw */
    float yaw{};
    /** The bots pitch */
    float pitch{};

    struct Input
    {
        bool forwards;
        bool backwards;
        bool left;
        bool right;
    };

    /** The input for the bot, used for movement. */
    Input input{};
    /** Clears the input by disabling each direction. */
    void clear_input();

    /** Disconnects the bot by closing the TCP connection like the vanilla client. */
    void disconnect();

    BlockPos get_block_pos() const;

    /** Changes the bots yaw and pitch to look at the center of the block position passed to this method. */
    void look_at(BlockPos pos);

    Box get_bounding_box() const;

    // TODO: Set this when authenticating with microsoft
    const std::string UUID = "197db9ea56e44ccea4d53e0da590476a";

private:
    void init();

    void tick_loop();

    void packet_read_loop();

    void tick();

    std::mutex loop_mutex;
    bool disconnected;

    std::queue<RawPacket> packets_to_process;

    std::string server_ip;
    std::string server_port;
};
