#pragma once
#include <optional>
#include <string>

#include "MsaDeviceCode.hpp"

/** Continuously polls the server to see if the user has signed in yet. */
class MsaTokenResponse
{
public:
    MsaTokenResponse() = default;
    explicit MsaTokenResponse(const MsaDeviceCode& msa_device_code);

    static std::optional<MsaTokenResponse> load_saved_account(const std::string& save_name);

    long not_after;
    std::string access_token;
    std::string refresh_token;
};
