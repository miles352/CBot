#pragma once
#include <string>
#include <variant>

#include "MCString.hpp"
#include "NBT.hpp"
#include "PrefixedArray.hpp"
#include "UUID.hpp"

enum class TabActionMasks : uint8_t
{
    ADD_PLAYER = 0x01,
    INITIALIZE_CHAT = 0x02,
    UPDATE_GAME_MODE = 0x04,
    UPDATE_LISTED = 0x08,
    UPDATE_LATENCY = 0x10,
    UPDATE_DISPLAY_NAME = 0x20,
    UPDATE_LIST_PRIORITY = 0x40,
    UPDATE_HAT = 0x80
};

struct AddPlayer
{
    struct Property
    {
        std::string name;
        std::string value;
        std::optional<std::string> signature;

        static Property from_bytes(uint8_t*& bytes)
        {
            Property property;
            property.name = MCString::from_bytes(bytes);
            property.value = MCString::from_bytes(bytes);
            bool optional = StandardTypes::from_bytes<bool>(bytes);
            if (optional)
            {
                property.signature = MCString::from_bytes(bytes);
            }
            return property;
        }
    };

    std::string name;
    std::vector<Property> properties;

    static AddPlayer from_bytes(uint8_t*& bytes)
    {
        AddPlayer add_player;
        add_player.name = MCString::from_bytes(bytes);
        add_player.properties = PrefixedArray::from_bytes_variable_typed<Property>(bytes);
        return add_player;
    }
};

struct InitializeChat
{
    struct Data
    {
        UUID uuid;
        int64_t key_expiration;
        std::vector<uint8_t> public_key;
        std::vector<uint8_t> public_key_signature;
    };

    std::optional<Data> data;

    static InitializeChat from_bytes(uint8_t*& bytes)
    {
        InitializeChat initialize_chat;
        bool optional = StandardTypes::from_bytes<bool>(bytes);
        if (optional)
        {
            Data data;
            data.uuid = UUID::from_bytes(bytes);
            data.key_expiration = StandardTypes::from_bytes<int64_t>(bytes);
            data.public_key = PrefixedArray::from_bytes_fixed<uint8_t>(bytes);
            data.public_key_signature = PrefixedArray::from_bytes_fixed<uint8_t>(bytes);
            initialize_chat.data = std::move(data);
        }
        return initialize_chat;
    }
};

using TabActionType = std::variant<AddPlayer, InitializeChat, int32_t, bool, std::optional<NBT::TagCompound>>;

struct PlayerTabActions
{
    UUID uuid;
    std::unordered_map<TabActionMasks, TabActionType> actions;

    static PlayerTabActions from_bytes(uint8_t*& bytes, uint8_t actions)
    {
        PlayerTabActions tab_actions;
        tab_actions.uuid = UUID::from_bytes(bytes);

        uint8_t current_action = actions & -actions; // get lowest set bit
        actions -= current_action;
        while (current_action > 0)
        {
            switch (static_cast<TabActionMasks>(current_action))
            {
                case TabActionMasks::ADD_PLAYER:
                {
                    tab_actions.actions[TabActionMasks::ADD_PLAYER] = AddPlayer::from_bytes(bytes);
                    break;
                }
                case TabActionMasks::INITIALIZE_CHAT:
                {
                    tab_actions.actions[TabActionMasks::INITIALIZE_CHAT] = InitializeChat::from_bytes(bytes);
                    break;
                }
                case TabActionMasks::UPDATE_GAME_MODE:
                {
                    tab_actions.actions[TabActionMasks::UPDATE_GAME_MODE] = VarInt::from_bytes(bytes);
                    break;
                }
                case TabActionMasks::UPDATE_LISTED:
                {
                    tab_actions.actions[TabActionMasks::UPDATE_LISTED] = StandardTypes::from_bytes<bool>(bytes);
                    break;
                }
                case TabActionMasks::UPDATE_LATENCY:
                {
                    tab_actions.actions[TabActionMasks::UPDATE_LATENCY] = VarInt::from_bytes(bytes);
                    break;
                }
                case TabActionMasks::UPDATE_DISPLAY_NAME:
                {
                    bool optional = StandardTypes::from_bytes<bool>(bytes);
                    if (optional)
                    {
                        tab_actions.actions[TabActionMasks::UPDATE_DISPLAY_NAME] = NBT::read_root(bytes);
                    }
                    break;
                }
                case TabActionMasks::UPDATE_LIST_PRIORITY:
                {
                    tab_actions.actions[TabActionMasks::UPDATE_LIST_PRIORITY] = VarInt::from_bytes(bytes);
                    break;
                }
                case TabActionMasks::UPDATE_HAT:
                {
                    tab_actions.actions[TabActionMasks::UPDATE_HAT] = StandardTypes::from_bytes<bool>(bytes);
                    break;
                }
            }

            current_action = actions & -actions;
            actions -= current_action;
        }
        return tab_actions;
    }
};