#include "ChunkDataS2CPacket.hpp"

#include "conversions/StandardTypes.hpp"

ChunkDataS2CPacket::ChunkDataS2CPacket(std::vector<std::uint8_t> data, EventBus &event_bus)
{
    uint8_t* ptr = data.data();
    // this->data.x = StandardTypes::from_bytes<int>(ptr);
    // this->data.z = StandardTypes::from_bytes<int>(ptr);
    // this->data.chunk_data = ChunkData::from_bytes(ptr);
    // this->data.light_data = LightData::from_bytes(ptr);

    // event_bus.emit<ChunkDataS2CPacket>(this->data);

    printf("Finished reading chunk\n");
}

void ChunkDataS2CPacket::default_handler(Bot &bot, Event<ChunkDataS2CPacket> &event)
{

}

