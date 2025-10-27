#include "ChunkDataS2CPacket.hpp"

#include "Bot.hpp"

ChunkDataS2CPacket::ChunkDataS2CPacket(std::vector<std::uint8_t> data, EventBus& event_bus)
{
    uint8_t* ptr = data.data();
    this->data.chunk_pos = ChunkPos(ptr);
    this->data.chunk_data = ChunkData::from_bytes(ptr);
    // this->data.light_data = LightData::from_bytes(ptr);

    event_bus.emit<ChunkDataS2CPacket>(this->data);
}

void ChunkDataS2CPacket::default_handler(Bot& bot, Event<ChunkDataS2CPacket>& event)
{

    int chunk_sections_count = bot.world.get_height() / 16;
    std::vector<ChunkSection> sections;
    sections.reserve(chunk_sections_count);
    uint8_t* section_bytes = event.data.chunk_data.data.data();
    for (int i = 0; i < chunk_sections_count; i++)
    {
        sections.push_back(ChunkSection::from_bytes(section_bytes));
    }
    bot.world._loaded_chunks.emplace(event.data.chunk_pos,
        Chunk(event.data.chunk_pos, std::move(sections), event.data.chunk_data.heightmaps, event.data.chunk_data.block_entities)
    );
}
