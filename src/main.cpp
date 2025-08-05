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

    bot->event_bus->on<TickEvent>([](Bot& bot) {
        std::println("Tick {}", bot.ticks);
        // bot.network_handler->write_packet(SetPlayerRotationC2SPacket(bot.ticks, 90, true, false));
        // bot.network_handler->write_packet(SwingArmC2SPacket());
        // bot.network_handler->write_packet(SetPlayerPositionRotationC2SPacket(bot.position, bot.yaw, bot.pitch, true, false));
        if (bot.ticks % 60 == 0)
        {
            bot.network_handler->write_packet(SwingArmC2SPacket());
        }
        BlockPos pos(3750529, 128, -98);
        std::optional<Block> block = bot.world.get_block(pos);
        if (block.has_value())
        {
            std::println("Block at {} is: {} and {}", pos.to_string(), *block.value().name, static_cast<int>(block.value().get_block_state<ComparatorMode>().value()));
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