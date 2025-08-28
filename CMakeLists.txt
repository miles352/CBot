cmake_minimum_required(VERSION 3.28)
project(CBot)

set(CMAKE_CXX_STANDARD 23)

find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)


add_executable(CBot 
src/main.cpp 
src/MicrosoftAuth.cpp
src/NetworkHandler.cpp
src/Chunk.cpp
src/World.cpp
src/registry/PacketRegistry.cpp
src/packets/handshaking/HandshakeC2SPacket.cpp
src/packets/login/serverbound/LoginStartC2SPacket.cpp
src/packets/login/clientbound/EncryptionRequestS2CPacket.cpp
src/packets/login/serverbound/EncryptionResponseC2SPacket.cpp
src/packets/login/serverbound/LoginAcknowledgedC2SPacket.cpp
src/packets/login/clientbound/LoginSuccessS2CPacket.cpp
src/packets/login/clientbound/SetCompressionS2CPacket.cpp
src/packets/configuration/serverbound/KnownPacksC2SPacket.cpp
src/packets/configuration/clientbound/KnownPacksS2CPacket.cpp
src/packets/configuration/clientbound/FinishConfigurationS2CPacket.cpp
src/packets/configuration/serverbound/AcknowledgeFinishConfigurationC2SPacket.cpp
src/packets/configuration/clientbound/RegistryDataS2CPacket.cpp
src/packets/play/clientbound/StartConfigurationS2CPacket.cpp
src/packets/play/serverbound/AcknowledgeConfigurationC2SPacket.cpp
src/packets/play/clientbound/KeepAliveS2CPacket.cpp
src/packets/play/serverbound/KeepAliveC2SPacket.cpp
src/packets/play/clientbound/SynchronizePlayerPositionS2CPacket.cpp
src/packets/play/serverbound/ConfirmTeleportationC2SPacket.cpp
src/packets/play/serverbound/SetPlayerRotationC2SPacket.cpp
src/packets/play/clientbound/PingS2CPacket.cpp
src/packets/play/serverbound/PongC2SPacket.cpp
src/packets/play/serverbound/SwingArmC2SPacket.cpp
src/packets/play/clientbound/LoginS2CPacket.cpp
src/packets/play/clientbound/PlayerAbilitiesS2CPacket.cpp
src/packets/play/clientbound/SetHeldItemS2CPacket.cpp
src/packets/play/clientbound/SetHealthS2CPacket.cpp
src/packets/play/serverbound/SetPlayerPositionRotationC2SPacket.cpp
src/packets/play/clientbound/ChunkDataS2CPacket.cpp
src/packets/play/clientbound/DisconnectS2CPacket.cpp
src/packets/play/clientbound/BlockUpdateS2CPacket.cpp
src/events/TickEvent.cpp
src/events/DisconnectEvent.cpp
src/events/BlockUpdateEvent.cpp
src/EventBus.cpp
src/Bot.cpp
src/registry/BlockRegistry.cpp
src/Block.cpp
src/BlockState.cpp
src/conversions/NBT.cpp
src/Pathfinder.cpp
src/math/Box.cpp
)

target_include_directories(CBot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_link_libraries(CBot 
OpenSSL::SSL 
OpenSSL::Crypto
ZLIB::ZLIB
)


enable_testing()
add_subdirectory(tests)