#include "ClientInformationC2SPacket.hpp"

#include "conversions/MCString.hpp"

ClientInformationC2SPacket::ClientInformationC2SPacket(std::string&& locale, int8_t render_distance, ChatMode chat_mode,
                                                       bool chat_colors, uint8_t skin_parts, MainHand main_hand, bool enable_text_filtering, bool allow_server_listings,
                                                       ParticleStatus particle_status) : data{std::move(locale), render_distance, chat_mode, chat_colors, skin_parts, main_hand, enable_text_filtering, allow_server_listings, particle_status}
{

}

std::vector<uint8_t> ClientInformationC2SPacket::encode()
{
    std::vector<uint8_t> bytes = MCString::to_bytes(this->data.locale);
    std::vector<uint8_t> chat_mode = VarInt::to_bytes(static_cast<int>(this->data.chat_mode));
    std::vector<uint8_t> main_hand = VarInt::to_bytes(static_cast<int>(this->data.main_hand));
    std::vector<uint8_t> particle_status = VarInt::to_bytes(static_cast<int>(this->data.particle_status));

    bytes.push_back(this->data.render_distance);
    bytes.insert(bytes.end(), chat_mode.begin(), chat_mode.end());
    bytes.push_back(this->data.chat_colors);
    bytes.push_back(this->data.skin_parts);
    bytes.insert(bytes.end(), main_hand.begin(), main_hand.end());
    bytes.push_back(this->data.enable_text_filtering);
    bytes.push_back(this->data.allow_server_listings);
    bytes.insert(bytes.end(), particle_status.begin(), particle_status.end());

    return bytes;
}
