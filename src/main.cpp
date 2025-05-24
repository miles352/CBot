#include "MicrosoftAuth.hpp"
#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"
#include "conversions/UUID.hpp"

#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>
#include <memory.h>
#include <unistd.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <iostream>

#include <cstdint>

const char* SERVER_IP = "localhost";
// const char* SERVER_IP = "tcpshield.horizonanarchy.net";


// packet struct will contain size method that calls size for things like VarInt and adds them

int main()
{
    // MicrosoftAuth();

    

    // std::vector<uint8_t> x = VarInt::from_int(128);
    // printf("x: %p\n", x.data());

    // while (true)
    // {

    // };

    // printf("Total size: %d\n", packet.size());
    // return 0;

    addrinfo hints;
    addrinfo* servInfo;
    int status;
    memset(&hints, 0, sizeof(hints)); // make sure hints is zeroed
    hints.ai_family = AF_UNSPEC; // ipv4 or v6
    hints.ai_socktype = SOCK_STREAM; // tcp
    hints.ai_flags = AI_PASSIVE;
    if ((status = getaddrinfo(SERVER_IP, "25566", &hints, &servInfo)) != 0) 
    {
        printf("Error getting info: %s\n", gai_strerror(status));
    }

    int s = socket(servInfo->ai_family, servInfo->ai_socktype, 0);

    if (s == -1)
    {
        perror("Error creating socket: ");
    }

    status = connect(s, servInfo->ai_addr, servInfo->ai_addrlen);
    if (status == -1)
    {
        perror("Error connecting: ");
    }

    // struct packet;

    std::vector<uint8_t> handshake;
    
    std::vector<uint8_t> protocol_version = VarInt::from_int(767);
    handshake.insert(handshake.end(), protocol_version.begin(), protocol_version.end());
    std::vector<uint8_t> serverAddress = MCString::from_string("horizonanarchy.net");
    handshake.insert(handshake.end(), serverAddress.begin(), serverAddress.end());
    uint16_t server_port = htons(25566);
    handshake.emplace_back(server_port >> 8);
    handshake.emplace_back(server_port & 0x00FF);
    std::vector<uint8_t> next_state = VarInt::from_int(2);
    handshake.insert(handshake.end(), next_state.begin(), next_state.end());

    std::vector<uint8_t> packetId = VarInt::from_int(0x0);
    std::vector<uint8_t> length = VarInt::from_int(handshake.size() + packetId.size());
    std::vector<uint8_t> packet = length;
    packet.insert(packet.end(), packetId.begin(), packetId.end());
    packet.insert(packet.end(), handshake.begin(), handshake.end());

    write(s, packet.data(), packet.size());


    std::vector<uint8_t> name = MCString::from_string("x658");
    uint8_t uuid_bytes[16];
    UUID::to_big_endian_bytes("df53a8c3-e235-47c5-8466-311dc35d23b0", uuid_bytes);

    std::vector<uint8_t> login = name;
    login.insert(login.end(), uuid_bytes, uuid_bytes + 16);

    packetId = VarInt::from_int(0x0);
    length = VarInt::from_int(login.size() + packetId.size());
    packet = length;
    packet.insert(packet.end(), packetId.begin(), packetId.end());
    packet.insert(packet.end(), login.begin(), login.end());

    write(s, packet.data(), packet.size());



    std::string out;
    char buffer[4096];
    int bytes;

    while (true)
    {
        // bytes = read(s, buffer, sizeof(buffer));
        // if (bytes <= 0) break;
        // out.append(buffer, bytes);

        // int size[1];
        // read(s, size, 5);
        // printf("Size: %d\n", *size);
        int packet_size = VarInt::from_stream(s);
        int packet_id = VarInt::from_stream(s);
        printf("Read packet id 0x%x with size %d\n", packet_id, packet_size);

        int remaining_bytes = packet_size - VarInt::from_int(packet_id).size();

        uint8_t* data;
        read(s, data, remaining_bytes);

        // uint8_t* ptr = data;

        switch (packet_id)
        {
            case 0x01:
            {
                std::string server_id = MCString::from_array(data);
                printf("Server Id: %s\n", server_id.c_str());
            }
        }
    }

    std::cout << out << std::endl;

    close(s);
}