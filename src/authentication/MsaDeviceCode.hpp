#pragma once
#include <string>

/** Gets the code to be used in a url for a user to sign in through microsoft */
class MsaDeviceCode
{
public:
    MsaDeviceCode();
    [[nodiscard]] std::string get_verification_url() const;

    std::string user_code;
    std::string device_code;
    std::string verification_uri;
    int interval;
    int expires_in;
};
