#pragma once

#include <unordered_map>
#include <functional>
#include <memory>
#include <concepts>

#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"
#include "packets/ServerboundPacket.hpp"

enum ClientState
{
    HANDSHAKING,
    LOGIN,
    CONFIGURATION,
    PLAY
};

/** A type that contains the state of the client and the packet id, representing a unique packet. */
using PacketRegistryKey = std::pair<ClientState, int>;

template <typename T>
concept IncomingPacket = std::derived_from<T, ClientboundPacket>;

template <typename T>
concept OutgoingPacket = std::derived_from<T, ServerboundPacket>;

namespace std
{
    template<>
    struct hash<PacketRegistryKey>
    {
        size_t operator()(const PacketRegistryKey& key) const noexcept
        {
            return std::hash<int>()(std::get<0>(key)) ^
                (std::hash<int>()(std::get<1>(key)) << 1);
        }
    };
}

/** A map of unique packet identifiers to a function that decodes the packet. */
extern std::unordered_map<PacketRegistryKey, std::function<void(std::vector<uint8_t>, EventBus& event_bus)>> clientbound_packet_registry;

template <IncomingPacket T>
void register_clientbound_packet(ClientState client_state, EventBus& event_bus);

/** Registers all the clientbound packets. */
void register_clientbound_packets(EventBus& event_bus);

template <OutgoingPacket T>
void register_serverbound_packet(ClientState client_state, EventBus& event_bus);

/** Registers all serverbound packets */
void register_serverbound_packets(EventBus& event_bus);
