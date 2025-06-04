cmake_minimum_required(VERSION 3.28)
project(CBot)

set(CMAKE_CXX_STANDARD 26)

find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)


add_executable(CBot 
src/main.cpp 
src/MicrosoftAuth.cpp
src/NetworkHandler.cpp
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
src/EventBus.cpp
src/Bot.cpp
)

target_include_directories(CBot PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

target_link_libraries(CBot 
OpenSSL::SSL 
OpenSSL::Crypto
ZLIB::ZLIB
)


enable_testing()
add_subdirectory(tests)