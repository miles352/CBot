#include "UnloadChunkS2CPacket.hpp"

#include "Bot.hpp"
#include "World.hpp"

UnloadChunkS2CPacket::UnloadChunkS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    int z = StandardTypes::from_bytes<int32_t>(bytes);
    int x = StandardTypes::from_bytes<int32_t>(bytes);
    this->data.position = ChunkPos{x, z};

    event_bus.emit<UnloadChunkS2CPacket>(this->data);
}

#ifndef NO_REGISTRY
void UnloadChunkS2CPacket::default_handler(Bot& bot, Event<UnloadChunkS2CPacket>& event)
{
    bot.world._loaded_chunks.erase(event.data.position);
}
#endif

