add_executable(tests 
        tests.cpp
        ../src/authentication/FullAuth.cpp
        ../src/NetworkHandler.cpp
        ../src/Chunk.cpp
        ../src/World.cpp
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
        ../src/packets/configuration/clientbound/RegistryDataS2CPacket.cpp
        ../src/packets/configuration/clientbound/UpdateTagsS2CPacket.cpp
        ../src/packets/play/clientbound/StartConfigurationS2CPacket.cpp
        ../src/packets/play/serverbound/AcknowledgeConfigurationC2SPacket.cpp
        ../src/packets/play/clientbound/KeepAliveS2CPacket.cpp
        ../src/packets/play/serverbound/KeepAliveC2SPacket.cpp
        ../src/packets/play/clientbound/SynchronizePlayerPositionS2CPacket.cpp
        ../src/packets/play/serverbound/ConfirmTeleportationC2SPacket.cpp
        ../src/packets/play/serverbound/SetPlayerRotationC2SPacket.cpp
        ../src/packets/play/clientbound/PingS2CPacket.cpp
        ../src/packets/play/serverbound/PongC2SPacket.cpp
        ../src/packets/play/serverbound/SwingArmC2SPacket.cpp
        ../src/packets/play/clientbound/LoginS2CPacket.cpp
        ../src/packets/play/clientbound/PlayerAbilitiesS2CPacket.cpp
        ../src/packets/play/clientbound/SetHeldItemS2CPacket.cpp
        ../src/packets/play/clientbound/SetHealthS2CPacket.cpp
        ../src/packets/play/serverbound/SetPlayerPositionRotationC2SPacket.cpp
        ../src/packets/play/clientbound/ChunkDataS2CPacket.cpp
        ../src/packets/play/clientbound/DisconnectS2CPacket.cpp
        ../src/packets/play/clientbound/BlockUpdateS2CPacket.cpp
        ../src/packets/play/clientbound/SetContainerContentS2CPacket.cpp
        ../src/packets/play/serverbound/SetHeldItemC2SPacket.cpp
        ../src/packets/play/serverbound/PlayerActionC2SPacket.cpp
        ../src/packets/play/serverbound/SetPlayerPositionC2SPacket.cpp
        ../src/packets/play/serverbound/ClientTickEndC2SPacket.cpp
        ../src/packets/play/serverbound/PlayerInputC2SPacket.cpp
        ../src/packets/play/serverbound/SetPlayerMovementFlagsC2SPacket.cpp
        ../src/packets/play/serverbound/PlayerLoadedC2SPacket.cpp
        ../src/packets/play/clientbound/GameEventS2CPacket.cpp
        ../src/EventBus.cpp
        ../src/Bot.cpp
        ../src/registry/BlockRegistry.cpp
        ../src/Block.cpp
        ../src/BlockState.cpp
        ../src/conversions/NBT.cpp
        ../src/conversions/StructuredComponents/StructuredComponents.cpp
        ../src/Pathfinder.cpp
        ../src/math/Box.cpp
        ../src/ItemStack.cpp
        ../src/Inventory.cpp
        ../src/InventorySlot.cpp
        ../src/utils/WebRequests.cpp
        ../src/utils/Crypto.cpp
        ../src/authentication/MsaDeviceCode.cpp
        ../src/authentication/MsaTokenResponse.cpp
        ../src/authentication/XblDeviceToken.cpp
        ../src/utils/Time.hpp
        ../src/authentication/SisuAuth.cpp
        ../src/authentication/SisuAuth.hpp
        ../src/authentication/MCAuth.cpp
        ../src/authentication/MCAuth.hpp
        ../src/conversions/StructuredComponents/FireworkComponent.hpp
        ../src/conversions/StructuredComponents/EnchantmentComponent.hpp
        ../src/packets/play/clientbound/PlayerInfoRemoveS2CPacket.cpp
        ../src/packets/play/clientbound/PlayerInfoRemoveS2CPacket.hpp
        ../src/packets/play/clientbound/PlayerInfoUpdateS2CPacket.cpp
        ../src/packets/play/clientbound/PlayerInfoUpdateS2CPacket.hpp
        ../src/conversions/PlayerTabActions.hpp
        ../src/events/PlayerJoinEvent.hpp
        ../src/events/PlayerLeaveEvent.hpp
        ../src/events/ChunkDataEvent.hpp
        ../src/packets/play/serverbound/PlayerCommandC2SPacket.cpp
        ../src/packets/play/serverbound/PlayerCommandC2SPacket.hpp
        #        ../src/packets/play/clientbound/PlayerChatMessage.cpp
#        ../src/packets/play/clientbound/PlayerChatMessage.hpp
)

find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

target_include_directories(tests PUBLIC ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(tests OpenSSL::SSL OpenSSL::Crypto ZLIB::ZLIB)

add_test(NAME test COMMAND tests)