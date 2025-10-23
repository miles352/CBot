#include "MsaTokenResponse.hpp"

#include <chrono>
#include <stdexcept>
#include <string>
#include <thread>

#include "config.hpp"
#include "utils/JSON.hpp"
#include "utils/WebRequests.hpp"

MsaTokenResponse::MsaTokenResponse(const MsaDeviceCode& msa_device_code)
{
    std::string oAuthPollAddr = "login.live.com/oauth20_token.srf";
    std::string oAuthPollBody = "grant_type=device_code"
                                "&client_id=" + CLIENT_ID +
                                "&device_code=" + msa_device_code.device_code;
    std::string response = WebRequests::https_post(oAuthPollAddr, oAuthPollBody);

    std::optional<std::string> oAuthToken = std::nullopt;
    std::chrono::time_point<std::chrono::system_clock> initial_time = std::chrono::system_clock::now();
    while (!oAuthToken.has_value())
    {
        response = WebRequests::https_post(oAuthPollAddr, oAuthPollBody);

        oAuthToken = JSON::get_value(response, "access_token");

        std::this_thread::sleep_for(std::chrono::seconds(msa_device_code.interval));
        if (std::chrono::duration_cast<std::chrono::seconds>((std::chrono::system_clock::now() - initial_time)).count() >= msa_device_code.expires_in) throw std::runtime_error("OAuth Authorization has expired.");
    }

    long expires_in = std::stoi(JSON::get_value(response, "expires_in").value());
    this->not_after = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() + expires_in;
    this->access_token = std::move(oAuthToken.value());
    this->refresh_token = JSON::get_value(response, "refresh_token").value();
}
