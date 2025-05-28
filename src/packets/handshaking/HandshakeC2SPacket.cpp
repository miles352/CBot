#include "HandshakeC2SPacket.hpp"
#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"

#include <vector>
#include <netinet/in.h>

HandshakeC2SPacket::HandshakeC2SPacket(int protocol_version, const std::string& server_address, const std::string& server_port, HandshakeIntent intent)
{
    std::vector<uint8_t> handshake;
    std::vector<uint8_t> protocol_version_bytes = VarInt::from_int(protocol_version);
    handshake.insert(handshake.end(), protocol_version_bytes.begin(), protocol_version_bytes.end());
    std::vector<uint8_t> serverAddress = MCString::from_string(server_address);
    handshake.insert(handshake.end(), serverAddress.begin(), serverAddress.end());
    uint16_t server_port_short = htons(std::stoi(server_port));
    handshake.emplace_back(server_port_short >> 8);
    handshake.emplace_back(server_port_short & 0x00FF);
    std::vector<uint8_t> next_state = VarInt::from_int(intent);
    handshake.insert(handshake.end(), next_state.begin(), next_state.end());

    this->id = 0x0;
    this->data = handshake;
}
