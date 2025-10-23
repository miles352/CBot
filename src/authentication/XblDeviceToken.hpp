#pragma once
#include <string>
#include <openssl/types.h>

class XblDeviceToken
{

public:
    XblDeviceToken();
    /** Important deconstructor that frees the OpenSSL pointers and cleans up garbage. */
    ~XblDeviceToken();

    long not_after;
    std::string token;
    std::string device_id;

    EVP_PKEY* pkey;
};
