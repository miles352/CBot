#include "Pathfinder.hpp"

Pathfinder::Pathfinder()
{

}

void Pathfinder::set_bot(std::unique_ptr<Bot> bot)
{
    this->bot = std::move(bot);
}

