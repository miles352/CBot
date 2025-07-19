#pragma once

#include <queue>

#include "EventBus.hpp"
#include "NetworkHandler.hpp"


class Bot : public std::enable_shared_from_this<Bot>
{
public:
    /** Do not call this directly, call <code>Bot::create</code> instead */
    Bot(const std::string& server_ip, const std::string& server_port);
    static std::shared_ptr<Bot> create(const std::string& server_ip, const std::string& server_port);

    void start();

    std::unique_ptr<EventBus> event_bus;
    std::unique_ptr<NetworkHandler> network_handler;

    /** Returns the number of ticks that have passed since the bot was started */
    int get_ticks() const;

    // TODO: Set this when authenticating with microsoft
    const std::string UUID = "197db9ea56e44ccea4d53e0da590476a";

private:
    void init();

    void tick_loop();

    void packet_read_loop();

    int ticks;

    std::mutex loop_mutex;

    std::queue<RawPacket> packets_to_process;

    std::string server_ip;
    std::string server_port;
};