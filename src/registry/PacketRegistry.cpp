#include "PacketRegistry.hpp"

#include "packets/configuration/serverbound/AcknowledgeFinishConfigurationC2SPacket.hpp"
#include "packets/login/clientbound/EncryptionRequestS2CPacket.hpp"
#include "packets/login/clientbound/SetCompressionS2CPacket.hpp"
#include "packets/login/clientbound/LoginSuccessS2CPacket.hpp"
#include "packets/configuration/clientbound/KnownPacksS2CPacket.hpp"
#include "packets/configuration/clientbound/FinishConfigurationS2CPacket.hpp"
#include "packets/configuration/serverbound/KnownPacksC2SPacket.hpp"
#include "packets/configuration/clientbound/RegistryDataS2CPacket.hpp"
#include "packets/configuration/clientbound/UpdateTagsS2CPacket.hpp"
#include "packets/login/serverbound/EncryptionResponseC2SPacket.hpp"
#include "packets/login/serverbound/LoginAcknowledgedC2SPacket.hpp"
#include "packets/play/serverbound/AcknowledgeConfigurationC2SPacket.hpp"
#include "packets/play/clientbound/BlockUpdateS2CPacket.hpp"
#include "packets/play/clientbound/ChunkDataS2CPacket.hpp"
#include "packets/play/serverbound/ConfirmTeleportationC2SPacket.hpp"
#include "packets/play/clientbound/DisconnectS2CPacket.hpp"
#include "packets/play/serverbound/KeepAliveC2SPacket.hpp"
#include "packets/play/clientbound/KeepAliveS2CPacket.hpp"
#include "packets/play/clientbound/LoginS2CPacket.hpp"
#include "packets/play/clientbound/PingS2CPacket.hpp"
#include "packets/play/clientbound/PlayerAbilitiesS2CPacket.hpp"
#include "packets/play/clientbound/SetContainerContentS2CPacket.hpp"
#include "packets/play/serverbound/PongC2SPacket.hpp"
#include "packets/play/clientbound/SetHealthS2CPacket.hpp"
#include "packets/play/clientbound/SetHeldItemS2CPacket.hpp"
#include "packets/play/serverbound/SetPlayerPositionRotationC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerRotationC2SPacket.hpp"
#include "packets/play/clientbound/StartConfigurationS2CPacket.hpp"
#include "packets/play/serverbound/SwingArmC2SPacket.hpp"
#include "packets/play/clientbound/SynchronizePlayerPositionS2CPacket.hpp"


std::unordered_map<PacketRegistryKey, std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>, EventBus& event_bus)>> clientbound_packet_registry;

void register_clientbound_packets(EventBus& event_bus)
{
    register_clientbound_packet<EncryptionRequestS2CPacket>(ClientState::LOGIN, event_bus);
    register_clientbound_packet<SetCompressionS2CPacket>(ClientState::LOGIN, event_bus);
    register_clientbound_packet<LoginSuccessS2CPacket>(ClientState::LOGIN, event_bus);

    register_clientbound_packet<KnownPacksS2CPacket>(ClientState::CONFIGURATION, event_bus);
    register_clientbound_packet<FinishConfigurationS2CPacket>(ClientState::CONFIGURATION, event_bus);
    register_clientbound_packet<RegistryDataS2CPacket>(ClientState::CONFIGURATION, event_bus);
    register_clientbound_packet<UpdateTagsS2CPacket>(ClientState::CONFIGURATION, event_bus);

    register_clientbound_packet<StartConfigurationS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<KeepAliveS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<SynchronizePlayerPositionS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<PingS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<LoginS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<PlayerAbilitiesS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<SetHeldItemS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<SetHealthS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<ChunkDataS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<DisconnectS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<BlockUpdateS2CPacket>(ClientState::PLAY, event_bus);
    register_clientbound_packet<SetContainerContentS2CPacket>(ClientState::PLAY, event_bus);
}

void register_serverbound_packets(EventBus& event_bus)
{
    register_serverbound_packet<EncryptionResponseC2SPacket>(ClientState::LOGIN, event_bus);
    register_serverbound_packet<LoginAcknowledgedC2SPacket>(ClientState::LOGIN, event_bus);

    register_serverbound_packet<KnownPacksC2SPacket>(ClientState::CONFIGURATION, event_bus);
    register_serverbound_packet<AcknowledgeFinishConfigurationC2SPacket>(ClientState::CONFIGURATION, event_bus);

    register_serverbound_packet<AcknowledgeConfigurationC2SPacket>(ClientState::PLAY, event_bus);
    register_serverbound_packet<ConfirmTeleportationC2SPacket>(ClientState::PLAY, event_bus);
    register_serverbound_packet<KeepAliveC2SPacket>(ClientState::PLAY, event_bus);
    register_serverbound_packet<SetPlayerRotationC2SPacket>(ClientState::PLAY, event_bus);
    register_serverbound_packet<PongC2SPacket>(ClientState::PLAY, event_bus);
    register_serverbound_packet<SwingArmC2SPacket>(ClientState::PLAY, event_bus);
    register_serverbound_packet<SetPlayerPositionRotationC2SPacket>(ClientState::PLAY, event_bus);
}

template <IncomingPacket T>
void register_clientbound_packet(ClientState client_state, EventBus& event_bus)
{
    // Add the default handler for the event if it is defined.
    if constexpr (requires { T::default_handler; })
    {
        event_bus.on<T>(T::default_handler);
    }

    PacketRegistryKey key = std::make_pair(client_state, T::id);
    clientbound_packet_registry[key] = [](std::vector<uint8_t> data, EventBus& event_bus) {
        auto x = std::make_unique<T>(data, event_bus);
        return x;
    };
}

template <OutgoingPacket T>
void register_serverbound_packet(ClientState client_state, EventBus& event_bus)
{
    if constexpr (requires { T::default_handler; })
    {
        event_bus.on<T>(T::default_handler);
    }
}
