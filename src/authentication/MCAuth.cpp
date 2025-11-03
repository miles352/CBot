#include "MCAuth.hpp"

#include <chrono>
#include <stdexcept>
#include <string>

#include "utils/JSON.hpp"
#include "utils/WebRequests.hpp"

MCAuth::MCAuth(const SisuAuth& sisu_auth)
{
    std::string mcAuthAddr = "api.minecraftservices.com/launcher/login";
    std::string mcAuthBody = "{"
                                 "\"platform\": \"PC_LAUNCHER\","
                                 "\"xtoken\": \"XBL3.0 x=" + sisu_auth.user_hash + ";" + sisu_auth.authorization_token + "\""
                             "}";

    std::string response = WebRequests::https_post(mcAuthAddr, mcAuthBody, "application/json");

    if (response.contains("Too Many Requests"))
    {
        throw std::runtime_error("Rate limited, try again.");
    }

    std::optional<std::string> mc_access_token = JSON::get_value(response, "access_token");

    if (!mc_access_token.has_value()) throw std::runtime_error("Failed to find mc auth token!");

    this->access_token = std::move(mc_access_token.value());
    long expires_in = std::stoi(JSON::get_value(response, "expires_in").value());
    this->not_after = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() + expires_in;
    this->token_type = JSON::get_value(response, "token_type").value();
}

MCAccount MCAuth::get_account_info() const
{
    std::string mcProfileAddr = "api.minecraftservices.com/minecraft/profile";
    std::string authorization_header = "authorization: " + this->token_type + " " + this->access_token + "\r\n";

    std::string response = WebRequests::https_get(mcProfileAddr, authorization_header);

    std::optional<std::string> error = JSON::get_value(response, "error");
    if (error.has_value()) throw std::runtime_error("Received error on account info, does the account own the game?");

    std::optional<std::string> mc_uuid = JSON::get_value(response, "id");
    std::optional<std::string> mc_username = JSON::get_value(response, "name");

    return MCAccount{std::move(mc_username.value()), std::move(mc_uuid.value()), this->access_token};
}
