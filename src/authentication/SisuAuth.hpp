#pragma once
#include "MsaTokenResponse.hpp"
#include "XblDeviceToken.hpp"

class SisuAuth
{
public:
    SisuAuth(const XblDeviceToken& xbl_device_token, const MsaTokenResponse& msa_token_response);

    std::string authorization_token;
    std::string user_hash;
};
