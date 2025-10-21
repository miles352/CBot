#include <openssl/err.h>

#include "conversions/MCString.hpp"

#include "Bot.hpp"
#include "MicrosoftAuth.hpp"
#include "conversions/Position.hpp"
#include "events/DisconnectEvent.hpp"
#include "events/TickEvent.hpp"
#include "packets/configuration/clientbound/FinishConfigurationS2CPacket.hpp"
#include "packets/configuration/serverbound/KnownPacksC2SPacket.hpp"
#include "packets/login/serverbound/LoginStartC2SPacket.hpp"
#include "packets/login/clientbound/LoginSuccessS2CPacket.hpp"
#include "packets/play/clientbound/SetHealthS2CPacket.hpp"
#include "packets/play/serverbound/SetPlayerPositionRotationC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerRotationC2SPacket.hpp"
#include "packets/play/serverbound/SwingArmC2SPacket.hpp"
#include "packets/play/clientbound/SynchronizePlayerPositionS2CPacket.hpp"
#include "packets/play/serverbound/PlayerActionC2SPacket.hpp"
#include "packets/play/serverbound/SetHeldItemC2SPacket.hpp"
#include "registry/BlockRegistryGenerated.hpp"

// const char* SERVER_IP = "127.0.0.1";
const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
// const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// void follow_path(Bot& bot, std::vector<BlockPos> path)
// {
//     bot.input.forwards = true;
//
//     std::shared_ptr<int> index = std::make_shared<int>(0);
//
//     bot.event_bus.on<TickEvent>([path = std::move(path), index](Bot& bot) {
//         bot.look_at(path[*index]);
//         BlockPos pos = path[*index];
//         if (bot.position.distance_to_squared(pos.to_center_pos()) < 0.1)
//         {
//             (*index)++;
//             printf("Increased index!\n");
//             printf("Coordinates: %s\n", bot.position.to_string().c_str());
//             if (*index >= path.size())
//             {
//                 bot.input.forwards = false;
//                 printf("Done pathing!\n");
//                 bot.event_bus.remove_listener<TickEvent>("path");
//             }
//         }
//     }, "path");
// }



int main()
{




    Bot bot(SERVER_IP, SERVER_PORT);

    // Acts as a spawn event
    bot.event_bus.once<SynchronizePlayerPositionS2CPacket>([](Bot& bot, Event<SynchronizePlayerPositionS2CPacket>& event) {
        printf("Spawned\n");
    });

    // bot.event_bus.on<SynchronizePlayerPositionS2CPacket>([](Bot& bot, Event<SynchronizePlayerPositionS2CPacket>& event) {
    //    printf("Teleport Position: %s\n", event.data.position.to_string().c_str());
    // });
    // bool started = false;
    //
    // int tick_delay = 1;
    //
    //
    // bot.event_bus.on<FinishConfigurationS2CPacket>([&started, &tick_delay](Bot& bot) {
    //    bot.ticks = 0;
    //     started = false;
    //     tick_delay = 1;
    // });
    //
    //
    //
    //
    //
    // bot.event_bus.on<TickEvent>([&started, &tick_delay](Bot& bot) {
    //
    //     if (bot.ticks % 60 == 0)
    //     {
    //         bot.network_handler.write_packet(SwingArmC2SPacket());
    //     }
    //
    //     if (bot.ticks < 95)
    //     {
    //         printf("Tick: %d\n", bot.ticks);
    //     }
    //
    //     if (bot.ticks % 5 == 0)
    //     {
    //         printf("Coordinates: %s, Yaw: %f, pitch: %f Velocity: %s\n", bot.position.to_string().c_str(), bot.yaw, bot.pitch, bot.velocity.to_string().c_str());
    //     }
    //
    //     if (bot.ticks > 100 && !started)
    //     {
    //         // bot.yaw = 180.0F;
    //         // Bot::Input curr = bot.get_input();
    //         // curr.forwards = true;
    //         // bot.set_input(curr);
    //         // started = true;
    //
    //         tick_delay--;
    //
    //     }
    // }, "", 0);
    //
    // bot.event_bus.on<SetHealthS2CPacket>([](Bot& bot, Event<SetHealthS2CPacket>& event) {
    //     if (event.data.health < 19.0f)
    //     {
    //         bot.disconnect();
    //     }
    //     printf("Health: %f, Food: %d\n", event.data.health, event.data.food);
    // });
    //
    bot.start();
}
