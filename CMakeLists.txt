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
src/packets/login/LoginStartC2SPacket.cpp
src/packets/login/EncryptionRequestS2CPacket.cpp
src/packets/login/EncryptionResponseC2SPacket.cpp
src/packets/login/LoginAcknowledgedC2SPacket.cpp 
src/packets/login/LoginSuccessS2CPacket.cpp 
src/packets/login/SetCompressionS2CPacket.cpp
src/packets/configuration/KnownPacksC2SPacket.cpp
src/packets/configuration/KnownPacksS2CPacket.cpp
src/packets/configuration/FinishConfigurationS2CPacket.cpp
src/packets/configuration/AcknowledgeFinishConfigurationC2SPacket.cpp
src/packets/configuration/RegistryDataS2CPacket.cpp
src/packets/play/StartConfigurationS2CPacket.cpp
src/packets/play/AcknowledgeConfigurationC2SPacket.cpp
src/packets/play/KeepAliveS2CPacket.cpp
src/packets/play/KeepAliveC2SPacket.cpp
src/packets/play/SynchronizePlayerPositionS2CPacket.cpp
src/packets/play/ConfirmTeleportationC2SPacket.cpp
src/packets/play/SetPlayerRotationC2SPacket.cpp
src/packets/play/PingS2CPacket.cpp
src/packets/play/PongC2SPacket.cpp
src/packets/play/SwingArmC2SPacket.cpp
src/packets/play/LoginS2CPacket.cpp
src/packets/play/PlayerAbilitiesS2CPacket.cpp
src/packets/play/SetHeldItemS2CPacket.cpp
src/packets/play/SetHealthS2CPacket.cpp
src/packets/play/SetPlayerPositionRotationC2SPacket.cpp
src/packets/play/ChunkDataS2CPacket.cpp
src/packets/play/DisconnectS2CPacket.cpp
src/packets/play/BlockUpdateS2CPacket.cpp
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
)

target_include_directories(CBot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_link_libraries(CBot 
OpenSSL::SSL 
OpenSSL::Crypto
ZLIB::ZLIB
)


enable_testing()
add_subdirectory(tests)