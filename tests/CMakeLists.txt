add_executable(tests 
tests.cpp
../src/MicrosoftAuth.cpp
../src/NetworkHandler.cpp
../src/registry/PacketRegistry.cpp
../src/packets/handshaking/HandshakeC2SPacket.cpp
../src/packets/login/serverbound/LoginStartC2SPacket.cpp
../src/packets/login/clientbound/EncryptionRequestS2CPacket.cpp
../src/packets/login/serverbound/EncryptionResponseC2SPacket.cpp
../src/packets/login/serverbound/LoginAcknowledgedC2SPacket.cpp
../src/packets/login/clientbound/LoginSuccessS2CPacket.cpp
../src/packets/login/clientbound/SetCompressionS2CPacket.cpp
../src/packets/configuration/serverbound/KnownPacksC2SPacket.cpp
../src/packets/configuration/clientbound/KnownPacksS2CPacket.cpp
../src/packets/configuration/clientbound/FinishConfigurationS2CPacket.cpp
../src/packets/configuration/serverbound/AcknowledgeFinishConfigurationC2SPacket.cpp
../src/packets/play/clientbound/StartConfigurationS2CPacket.cpp
../src/packets/play/serverbound/AcknowledgeConfigurationC2SPacket.cpp
../src/packets/play/clientbound/KeepAliveS2CPacket.cpp
../src/packets/play/serverbound/KeepAliveC2SPacket.cpp
../src/packets/play/clientbound/SynchronizePlayerPositionS2CPacket.cpp
../src/packets/play/serverbound/ConfirmTeleportationC2SPacket.cpp
../src/packets/play/serverbound/SetPlayerRotationC2SPacket.cpp
../src/packets/play/clientbound/PingS2CPacket.cpp
../src/packets/play/serverbound/PongC2SPacket.cpp
../src/events/TickEvent.cpp
../src/EventBus.cpp
../src/Bot.cpp
)

find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(tests OpenSSL::SSL OpenSSL::Crypto ZLIB::ZLIB)

add_test(NAME test COMMAND tests)