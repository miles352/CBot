#include "conversions/MCString.hpp"

#include "Bot.hpp"
#include "events/DisconnectEvent.hpp"
#include "events/TickEvent.hpp"
#include "packets/configuration/serverbound/KnownPacksC2SPacket.hpp"
#include "packets/login/serverbound/LoginStartC2SPacket.hpp"
#include "packets/login/clientbound/LoginSuccessS2CPacket.hpp"
#include "packets/play/clientbound/SetHealthS2CPacket.hpp"
#include "packets/play/serverbound/SetPlayerPositionRotationC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerRotationC2SPacket.hpp"
#include "packets/play/serverbound/SwingArmC2SPacket.hpp"
#include "packets/play/clientbound/SynchronizePlayerPositionS2CPacket.hpp"
#include "packets/play/serverbound/SetHeldItemC2SPacket.hpp"


// const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 197db9ea-56e4-4cce-a4d5-3e0da590476a
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";

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

    bot.event_bus.on<TickEvent>([&started](Bot& bot) {
        // bot.yaw = 70;
        if (bot.ticks % 60 == 0)
        {
            bot.network_handler.write_packet(SwingArmC2SPacket());
        }

        // if (bot.ticks % 5 == 0)
        // {
            // printf("Coordinates: %s, Yaw: %.1f, pitch: %.1f Velocity: %s\n", bot.position.to_string().c_str(), bot.yaw, bot.pitch, bot.velocity.to_string().c_str());
        // }

        if (bot.ticks > 100 && !started)
        {


            int slot_index = bot.inventory.hotbar_slot;
            Slot held_slot = bot.inventory.player_slots[36 + slot_index];
            if (!held_slot.item_data.has_value())
            {
                printf("Currently holding slot %d with item: Air\n", slot_index);
            }
            else
            {
                std::string item_name = ItemRegistry[held_slot.item_data.value().item_id]->get_name();
                printf("Currently holding slot %d with item: %s\n", slot_index, item_name.c_str());
            }

            bot.network_handler.write_packet(SetHeldItemC2SPacket(8));

            started = true;
        }

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



    });

    bot.event_bus.on<SetHealthS2CPacket>([](Bot& bot, Event<SetHealthS2CPacket>& event) {
        if (event.data.health < 19.0f)
        {
            bot.disconnect();
        }
        printf("Health: %f, Food: %d\n", event.data.health, event.data.food);
    });

    bot.start();
}