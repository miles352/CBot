#include "MsaDeviceCode.hpp"

#include <stdexcept>

#include "Constants.hpp"
#include "utils/JSON.hpp"
#include "utils/WebRequests.hpp"

MsaDeviceCode::MsaDeviceCode()
{
    std::string oAuthCreateAddr = "login.live.com/oauth20_connect.srf";
    std::string oAuthCreateBody = "client_id=" + CLIENT_ID +
                                  "&scope=service::user.auth.xboxlive.com::MBI_SSL" +
                                  "&response_type=device_code";
    std::string response = WebRequests::https_post(oAuthCreateAddr, oAuthCreateBody);

    std::optional<std::string> device_code = JSON::get_value(response, "device_code");

    if (!device_code.has_value()) // If device code is found, the others are assumed to be there as well
    {
        throw std::runtime_error("Failed to find device_code in oauth response.");
    }

    this->user_code = JSON::get_value(response, "user_code").value();
    this->device_code = std::move(device_code.value());
    this->verification_uri = JSON::get_value(response, "verification_uri").value();
    this->interval = stoi(JSON::get_value(response, "interval").value());
    this->expires_in = stoi(JSON::get_value(response, "expires_in").value());
}

std::string MsaDeviceCode::get_verification_url() const
{
    return this->verification_uri + "?otc=" + this->user_code;
}
