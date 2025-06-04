#pragma once

#include "EventBus.hpp"
#include "NetworkHandler.hpp"


class Bot
{
    public:
    Bot(const std::string& server_ip, const std::string& server_port);
    void start();

    EventBus event_bus;
    NetworkHandler network_handler;
private:
    std::string server_ip;
    std::string server_port;
};