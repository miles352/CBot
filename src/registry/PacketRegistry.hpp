#pragma once

#include <unordered_map>
#include <functional>
#include <memory>
#include <concepts>

#include "packets/ClientboundPacket.hpp"

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
extern std::unordered_map<PacketRegistryKey, std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>)>> clientbound_packet_registry;

template <IncomingPacket T>
void register_packet(ClientState client_state);

/** Registers all the clientbound packets. */
void register_clientbound_packets();