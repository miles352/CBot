#pragma once
#include "Bot.hpp"

class Pathfinder
{
public:
    Pathfinder();

private:
    void set_bot(std::unique_ptr<Bot> bot);
    std::unique_ptr<Bot> bot;
};
