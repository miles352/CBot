add_executable(tests 
tests.cpp
../src/NetworkHandler.cpp
../src/registry/PacketRegistry.cpp
../src/packets/login/EncryptionRequestS2CPacket.cpp 
../src/packets/handshaking/HandshakeC2SPacket.cpp
../src/packets/login/LoginStartC2SPacket.cpp
../src/packets/login/EncryptionResponseC2SPacket.cpp
../src/packets/login/LoginAcknowledgedC2SPacket.cpp 
../src/packets/login/LoginSuccessS2CPacket.cpp 
../src/packets/login/SetCompressionS2CPacket.cpp
../src/packets/configuration/KnownPacksC2SPacket.cpp
../src/packets/configuration/KnownPacksS2CPacket.cpp
../src/packets/configuration/FinishConfigurationS2CPacket.cpp
../src/packets/configuration/AcknowledgeFinishConfigurationC2SPacket.cpp
../src/EventBus.cpp
)

find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(tests OpenSSL::SSL OpenSSL::Crypto ZLIB::ZLIB)

add_test(NAME test COMMAND tests)