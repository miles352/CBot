#pragma once

#include <queue>

#include "EventBus.hpp"
#include "NetworkHandler.hpp"
#include "math/Vec3.hpp"
#include "World.hpp"
#include "packets/play/ChunkDataS2CPacket.hpp"


class Bot : public std::enable_shared_from_this<Bot>
{
public:
    /** Do not call this directly, call <code>Bot::create</code> instead */
    Bot(const std::string& server_ip, const std::string& server_port);
    static std::shared_ptr<Bot> create(const std::string& server_ip, const std::string& server_port);

    void start();

    std::unique_ptr<EventBus> event_bus;
    std::unique_ptr<NetworkHandler> network_handler;

    World world;

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
