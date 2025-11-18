#include <algorithm>

#include "Bot.hpp"
#include "events/TickEvent.hpp"
#include "packets/play/clientbound/SetHealthS2CPacket.hpp"
#include "registry/EntityRegistryGenerated.hpp"

const char* SERVER_IP = "127.0.0.1";
const char* SERVER_PORT = "25565";

int main()
{
    Bot bot{SERVER_IP, SERVER_PORT};

    // Look at closest player every tick
    bot.event_bus.on<TickEvent>([](Bot& bot) {
        const std::unordered_map<int, Vec3d>& players = bot.entities[static_cast<int>(EntityType::PLAYER)];

        auto it = std::ranges::min_element(players.begin(), players.end(),
            [&bot](const std::pair<int, Vec3d>& a, const std::pair<int, Vec3d>& b) {
            return a.second.horizontal_distance_to_squared(bot.position) < b.second.horizontal_distance_to_squared(bot.position);
        });

        if (it != players.end())
        {
            bot.look_at(it->second);
        }
    });


    bot.start();
}
