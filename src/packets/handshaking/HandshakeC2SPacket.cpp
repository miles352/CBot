#include "HandshakeC2SPacket.hpp"
#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"

#include <vector>
#include <netinet/in.h>

static const int MAX_SERVER_ADDRESS_LENGTH = 255;
static const int MAX_SERVER_PORT_LENGTH = 5;

HandshakeC2SPacket::HandshakeC2SPacket(int protocol_version, const std::string& server_address, const std::string& server_port, HandshakeIntent intent)
{
    // TODO: Check that the version is valid
    this->protocol_version = protocol_version;
    
    if (server_address.size() > MAX_SERVER_ADDRESS_LENGTH)
    {
        throw std::length_error("Server address is too long!");
    }
    this->server_address = server_address;

    if (server_port.size() > MAX_SERVER_PORT_LENGTH)
    {
        throw std::length_error("Server port is too long!");
    }
    this->server_port = server_port;

    this->intent = intent;
}

std::vector<uint8_t> HandshakeC2SPacket::encode()
{
    std::vector<uint8_t> handshake;

    std::vector<uint8_t> protocol_version_bytes = VarInt::from_int(this->protocol_version);
    handshake.insert(handshake.end(), protocol_version_bytes.begin(), protocol_version_bytes.end());

    std::vector<uint8_t> server_address_bytes = MCString::from_string(this->server_address);
    handshake.insert(handshake.end(), server_address_bytes.begin(), server_address_bytes.end());

    uint16_t server_port_short = htons(std::stoi(this->server_port));
    handshake.emplace_back(server_port_short >> 8);
    handshake.emplace_back(server_port_short & 0x00FF);

    std::vector<uint8_t> next_state = VarInt::from_int(this->intent);

    handshake.insert(handshake.end(), next_state.begin(), next_state.end());
    
    return handshake;
}