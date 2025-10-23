#pragma once
#include <string>

#include "MsaDeviceCode.hpp"

/** Continuously polls the server to see if the user has signed in yet. */
class MsaTokenResponse
{
public:
    explicit MsaTokenResponse(const MsaDeviceCode& msa_device_code);

    long not_after;
    std::string access_token;
    std::string refresh_token;
};
