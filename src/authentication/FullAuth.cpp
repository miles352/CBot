#include "FullAuth.hpp"
#include <iostream>
#include <format>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <unistd.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <chrono>
#include <openssl/rand.h>

#include "MCAuth.hpp"
#include "MsaDeviceCode.hpp"
#include "MsaTokenResponse.hpp"
#include "SisuAuth.hpp"
#include "XblDeviceToken.hpp"
#include "../utils/JSON.hpp"

MCAccount FullAuth::login()
{
    MsaDeviceCode msa_device_code{};


    printf("Please sign in at %s\n", msa_device_code.get_verification_url().c_str());

    MsaTokenResponse msa_token_response{msa_device_code};

    XblDeviceToken xbl_device_token{};

    SisuAuth sisu_auth{xbl_device_token, msa_token_response};

    MCAuth mc_auth{sisu_auth};
    MCAccount mc_account = mc_auth.get_account_info();

    printf("Logged into account with username: %s\n", mc_account.username.c_str());

    return mc_account;
}
