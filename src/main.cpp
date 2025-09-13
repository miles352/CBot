#include "conversions/MCString.hpp"

#include "Bot.hpp"
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

const char* SERVER_IP = "127.0.0.1";
// const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
// const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 3.129.70.181:25565

// 197db9ea-56e4-4cce-a4d5-3e0da590476a2
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";
// x658 = df53a8c3e23547c58466311dc35d23b0
// 0x658 = 197db9ea56e44ccea4d53e0da590476a

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

    bot.event_bus.on<SynchronizePlayerPositionS2CPacket>([](Bot& bot, Event<SynchronizePlayerPositionS2CPacket>& event) {
       printf("Teleport Position: %s\n", event.data.position.to_string().c_str());
    });
    bool started = false;

    int tick_delay = 1;


    // bot.event_bus.on<FinishConfigurationS2CPacket>([&started, &tick_delay](Bot& bot) {
    //    bot.ticks = 0;
    //     started = false;
    //     tick_delay = 1;
    // });





    bot.event_bus.on<TickEvent>([&started, &tick_delay](Bot& bot) {
        bot.yaw = 180;
        if (bot.ticks % 60 == 0)
        {
            bot.network_handler.write_packet(SwingArmC2SPacket());
        }

        printf("Tick: %d\n", bot.ticks);

        if (bot.ticks % 5 == 0)
        {
            printf("Coordinates: %s, Yaw: %f, pitch: %f Velocity: %s\n", bot.position.to_string().c_str(), bot.yaw, bot.pitch, bot.velocity.to_string().c_str());
        }

        if (bot.position.z < -28.0)
        {
            printf("Done walking!\n");
            bot.clear_input();
        }

        if (bot.ticks > 100 && !started)
        {

            Bot::Input curr = bot.get_input();
            curr.forwards = true;
            bot.set_input(curr);
            started = true;
            //
            // InventorySlot held_slot = bot.inventory.get_held_slot();
            // printf("Held item: %s\n", held_slot.item->get_name().c_str());


            // 9647, 128, -17556
            // bot.mine_block({-53, 126, -15});
            // if (tick_delay == 1)
            // {
            //     bot.network_handler.write_packet<PlayerActionC2SPacket>({ActionStatus::STARTED_DIGGING, {1861653, 70, 1622672}, BlockFace::TOP, 1});
            //     printf("Started\n");
            // }
            // else if (tick_delay == 0)
            // {
            //     bot.network_handler.write_packet<PlayerActionC2SPacket>({ActionStatus::FINISHED_DIGGING, {1861653, 70, 1622672}, BlockFace::TOP, 2});
            //     printf("Ended!\n");
            //     started = true;
            // }

            tick_delay--;

        }

        // if (bot.ticks > 100 && !bot.currently_mining)
        // {
        //     for (int x = -3; x <= 3; x++)
        //     {
        //         for (int z = -3; z <= 3; z++)
        //         {
        //             for (int y = 0; y <= 3; y++)
        //             {
        //                 BlockPos position(bot.get_block_pos().add(x, y, z));
        //                 std::optional<BlockState> block_state = bot.world.get_block_state(position);
        //                 if (block_state.has_value())
        //                 {
        //                     if (block_state.value().get_block() != Blocks::AIR)
        //                     {
        //                         printf("Mining at %s\n", position.to_string().c_str());
        //                         // bot.look_at(position);
        //                         bot.mine_block(position);
        //                         return;
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }


        // bot.yaw = bot.ticks * 2;

        // movement * 0.2F if using item

        // Entity.java
        // boolean bl = !MathHelper.approximatelyEquals(movement.x, vec3d.x);
        // boolean bl2 = !MathHelper.approximatelyEquals(movement.z, vec3d.z);
        // this.horizontalCollision = bl || bl2;
        // this.verticalCollision = movement.y != vec3d.y;
        // this.groundCollision = this.verticalCollision && movement.y < 0.0;

        // PlayerEntity.java
        // adjustMovementForSneaking

        // collisions: Entity#adjustMovementForCollisions



    }, "", 99);

    bot.event_bus.on<SetHealthS2CPacket>([](Bot& bot, Event<SetHealthS2CPacket>& event) {
        if (event.data.health < 19.0f)
        {
            bot.disconnect();
        }
        printf("Health: %f, Food: %d\n", event.data.health, event.data.food);
    });

    bot.start();
}