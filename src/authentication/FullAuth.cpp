#include <fstream>
#include <optional>

#include "FullAuth.hpp"
#include "MCAuth.hpp"
#include "MsaTokenResponse.hpp"
#include "SisuAuth.hpp"
#include "XblDeviceToken.hpp"

MCAccount FullAuth::login()
{
    std::optional<MsaTokenResponse> msa_token_response = MsaTokenResponse::load_saved_account();

    if (!msa_token_response.has_value())
    {
        MsaDeviceCode msa_device_code{};

        printf("Please sign in at %s\n", msa_device_code.get_verification_url().c_str());

        msa_token_response = MsaTokenResponse{msa_device_code};
    }

    // Write auth to file to save for later. This is kind of inefficient because it rewrites even if it didn't change, but whatever
    std::ofstream stream;
    stream.open(".AUTH");

    if (!stream.fail())
    {
        stream << msa_token_response->not_after << " ";
        stream << msa_token_response->access_token << " ";
        stream << msa_token_response->refresh_token;
    }

    stream.close();

    XblDeviceToken xbl_device_token{};

    SisuAuth sisu_auth{xbl_device_token, *msa_token_response};

    MCAuth mc_auth{sisu_auth};
    MCAccount mc_account = mc_auth.get_account_info();

    printf("Logged into account with username: %s\n", mc_account.username.c_str());

    return mc_account;
}
