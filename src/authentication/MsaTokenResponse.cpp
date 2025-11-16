#include "MsaTokenResponse.hpp"

#include <chrono>
#include <stdexcept>
#include <string>
#include <thread>
#include <fstream>

#include "Constants.hpp"
#include "utils/JSON.hpp"
#include "utils/WebRequests.hpp"

MsaTokenResponse::MsaTokenResponse(const MsaDeviceCode& msa_device_code)
{
    std::string oAuthPollAddr = "login.live.com/oauth20_token.srf";
    std::string oAuthPollBody = "grant_type=device_code"
                                "&client_id=" + std::string{CLIENT_ID} +
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

std::optional<MsaTokenResponse> MsaTokenResponse::load_saved_account(const std::string& save_name)
{
    std::ifstream stream;
    stream.open(std::string{AUTH_SAVE_FOLDER} + save_name);
    if (stream.fail()) return std::nullopt;

    MsaTokenResponse res;
    stream >> res.not_after;
    stream >> res.access_token;
    stream >> res.refresh_token; // Assumes the data was read correctly

    stream.close();

    long current_time = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    if (res.not_after > current_time) return res; // If the token isn't expired

    // Otherwise, use refresh token to get new token
    std::string msaRefreshAddr = "login.live.com/oauth20_token.srf";
    std::string msaRefreshBody = "grant_type=refresh_token"
                                 "&client_id=" + std::string{CLIENT_ID} +
                                 "&refresh_token=" + res.refresh_token +
                                 "&scope=service::user.auth.xboxlive.com::MBI_SSL";

    std::string response = WebRequests::https_post(msaRefreshAddr, msaRefreshBody);

    std::optional<std::string> oAuthToken = JSON::get_value(response, "access_token");
    if (!oAuthToken.has_value()) return std::nullopt;

    long expires_in = std::stoi(JSON::get_value(response, "expires_in").value());
    res.not_after = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() + expires_in;
    res.access_token = std::move(oAuthToken.value());
    res.refresh_token = JSON::get_value(response, "refresh_token").value();

    return res;
}
