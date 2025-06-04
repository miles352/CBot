#include "PacketRegistry.hpp"

#include "packets/login/EncryptionRequestS2CPacket.hpp"
#include "packets/login/SetCompressionS2CPacket.hpp"
#include "packets/login/LoginSuccessS2CPacket.hpp"
#include "packets/configuration/KnownPacksS2CPacket.hpp"
#include "packets/configuration/FinishConfigurationS2CPacket.hpp"


std::unordered_map<PacketRegistryKey, std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>)>> clientbound_packet_registry;

void register_clientbound_packets()
{
    register_packet<EncryptionRequestS2CPacket>(ClientState::LOGIN);
    register_packet<SetCompressionS2CPacket>(ClientState::LOGIN);
    register_packet<LoginSuccessS2CPacket>(ClientState::LOGIN);

    register_packet<KnownPacksS2CPacket>(ClientState::CONFIGURATION);
    register_packet<FinishConfigurationS2CPacket>(ClientState::CONFIGURATION);
}

template <IncomingPacket T>
void register_packet(ClientState client_state)
{
    PacketRegistryKey key = std::make_pair(client_state, T::id);
    clientbound_packet_registry[key] = [](std::vector<uint8_t> data) { return std::make_unique<T>(data); };
}

