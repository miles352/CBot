#include "conversions/MCString.hpp"

#include "Bot.hpp"
#include "events/DisconnectEvent.hpp"
#include "events/TickEvent.hpp"
#include "packets/configuration/KnownPacksC2SPacket.hpp"
#include "packets/login/LoginStartC2SPacket.hpp"
#include "packets/login/LoginSuccessS2CPacket.hpp"
#include "packets/play/SetHealthS2CPacket.hpp"
#include "packets/play/SetPlayerPositionRotationC2SPacket.hpp"
#include "packets/play/SetPlayerRotationC2SPacket.hpp"
#include "packets/play/SwingArmC2SPacket.hpp"
#include "packets/play/SynchronizePlayerPositionS2CPacket.hpp"
#include "math/Physics.hpp"
#include "Block.hpp"
#include "registry/BlockRegistry.hpp"

#include <print>

#include "events/BlockUpdateEvent.hpp"
#include "registry/BlockRegistryGenerated.hpp"


// const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 197db9ea-56e4-4cce-a4d5-3e0da590476a
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";

int main()
{
    std::shared_ptr<Bot> bot = Bot::create(SERVER_IP, SERVER_PORT);

    bot->event_bus->on<SynchronizePlayerPositionS2CPacket>([](Bot& bot, Event<SynchronizePlayerPositionS2CPacket>& event) {
       printf("Position: %s\n", event.data.position.to_string().c_str());
    });

    // bot->input.forwards = true;

    bot->event_bus->on<BlockUpdateEvent>([](Bot& bot, Event<BlockUpdateEvent> event) {
        bot.network_handler->write_packet(SwingArmC2SPacket());
        printf("Block %s was replaced with block %s\n", event.data.old_state.get_block().name.c_str(), event.data.new_state.get_block().name.c_str());
        printf("Block at position is %s\n\n", bot.world.get_block_state(event.data.position).value().get_block().name.c_str());
    });

    bot->event_bus->on<TickEvent>([](Bot& bot) {
        // std::println("Tick {}", bot.ticks);
        // bot.network_handler->write_packet(SetPlayerRotationC2SPacket(bot.ticks, 90, true, false));
        // bot.network_handler->write_packet(SwingArmC2SPacket());
        // bot.network_handler->write_packet(SetPlayerPositionRotationC2SPacket(bot.position, bot.yaw, bot.pitch, true, false));
        // if (bot.ticks % 60 == 0)
        // {
        //     bot.network_handler->write_packet(SwingArmC2SPacket());
        // }

        BlockPos start(3743222, 128, -6053);

        std::optional<BlockState> block_state = bot.world.get_block_state(start);
        if (block_state.has_value())
        {
            printf("Block is %s with state %d\n", block_state->get_block().name.c_str(), static_cast<int>(*block_state->get_state<Rotation>()));
        }

        // for (int x = 0; x < 15; x++)
        // {
        //     for (int z = 0; z < 15; z++)
        //     {
        //         BlockPos cur = start.add(x, 0, z);
        //         std::optional<BlockState> block_state = bot.world.get_block_state(cur);
        //         if (block_state.has_value())
        //         {
        //             printf("Block at %s is: %s\n", cur.to_string().c_str(), block_state.value().get_block().name.c_str());
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


    });

    bot->event_bus->on<SetHealthS2CPacket>([](Bot& bot, Event<SetHealthS2CPacket>& event) {
        if (event.data.health < 15)
        {
            bot.disconnect();
        }
        printf("Health: %f, Food: %d\n", event.data.health, event.data.food);
    });

    bot->start();
}