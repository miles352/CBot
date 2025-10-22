#include "MicrosoftAuth.hpp"
#include <iostream>
#include <format>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <unistd.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <chrono>
#include <thread>
#include <openssl/rand.h>

#include "config.hpp"
#include "conversions/StandardTypes.hpp"
#include "utils/Crypto.hpp"
#include "utils/JSON.hpp"
#include "utils/WebRequests.hpp"

MCAccount MicrosoftAuth::login_full()
{
    std::string oAuthCreateAddr = "login.live.com/oauth20_connect.srf";
    std::string oAuthCreateBody = "client_id=" + CLIENT_ID + 
                                  "&scope=service::user.auth.xboxlive.com::MBI_SSL" +
                                  "&response_type=device_code";
    std::string response = WebRequests::https_post(oAuthCreateAddr, oAuthCreateBody);


    std::optional<std::string> verification_uri = JSON::get_value(response, "verification_uri");
    if (!verification_uri.has_value())
    {
        throw std::runtime_error("Failed to find verification_uri in oauth response.");
    }

    std::optional<std::string> user_code = JSON::get_value(response, "user_code");
    if (!user_code.has_value())
    {
        throw std::runtime_error("Failed to find user_code in oauth response.");
    }

    std::optional<std::string> deviceCode = JSON::get_value(response, "device_code");

    if (!deviceCode.has_value())
    {
        throw std::runtime_error("Failed to find device_code in oauth response.");
    }


    printf("Please sign in at %s?otc=%s\n", verification_uri->c_str(), user_code->c_str());


    std::optional<std::string> interval_str = JSON::get_value(response, "interval");
    if (!interval_str.has_value())
    {
        throw std::runtime_error("Failed to read interval in oauth response.");
    }
    int interval = std::stoi(interval_str.value());

    std::optional<std::string> expires_in_str = JSON::get_value(response, "expires_in");
    if (!expires_in_str.has_value())
    {
        throw std::runtime_error("Failed to read expires_in in oauth response.");
    }
    int expires_in = std::stoi(expires_in_str.value());

    std::string oAuthPollAddr = "login.live.com/oauth20_token.srf";
    std::string oAuthPollBody = "grant_type=device_code"
                                "&client_id=" + CLIENT_ID +
                                "&device_code=" + deviceCode.value();

    std::optional<std::string> oAuthToken = std::nullopt;
    std::chrono::time_point<std::chrono::system_clock> initial_time = std::chrono::system_clock::now();
    while (!oAuthToken.has_value())
    {
        response = WebRequests::https_post(oAuthPollAddr, oAuthPollBody);

        oAuthToken = JSON::get_value(response, "access_token");

        std::this_thread::sleep_for(std::chrono::seconds(interval));
        if (std::chrono::duration_cast<std::chrono::seconds>((std::chrono::system_clock::now() - initial_time)).count() >= expires_in) throw std::runtime_error("OAuth Authorization has expired.");
    }


    std::optional<std::string> access_token = JSON::get_value(response, "access_token");
    if (!access_token.has_value())
    {
        throw new std::runtime_error("Failed to find access token!");
    }


    // https://wiki.openssl.org/index.php/Libcrypto_API

    /* Load the human readable error strings for libcrypto */
    ERR_load_crypto_strings();

    /* Load all digest and cipher algorithms */
    OpenSSL_add_all_algorithms();

    EVP_PKEY_CTX* pctx = EVP_PKEY_CTX_new_id(EVP_PKEY_EC, NULL);
    if (!pctx)
    {
        throw std::runtime_error("Failed to create encryption instance.");
    }

    if (!EVP_PKEY_keygen_init(pctx)) throw std::runtime_error("Failed to initialize keygen.");
    if (!EVP_PKEY_CTX_set_ec_paramgen_curve_nid(pctx, NID_X9_62_prime256v1)) throw std::runtime_error("Failed to generate encryption params.");
    EVP_PKEY* pkey = NULL;
    EVP_PKEY_keygen(pctx, &pkey);

    const EC_KEY* private_key = EVP_PKEY_get0_EC_KEY(pkey);
    const EC_GROUP* group = EC_KEY_get0_group(private_key);
    const EC_POINT* public_key = EC_KEY_get0_public_key(private_key);

    std::string uuid = Crypto::get_random_uuid();
    std::string proof_key = Crypto::get_proof_key(group, public_key);


    std::string xboxAuthAddr = "device.auth.xboxlive.com/device/authenticate";
    std::string xboxAuthBody = "{"
                                    "\"Properties\":{"
                                        "\"AuthMethod\":\"ProofOfPossession\","
                                        "\"DeviceType\":\"Win32\","
                                        "\"Id\":\"{" + uuid + "}\","
                                        "\"ProofKey\":" + proof_key + ","
                                        "\"Version\":\"0.0.0\""
                                    "},"
                                    "\"RelyingParty\":\"http://auth.xboxlive.com\","
                                    "\"TokenType\":\"JWT\""
                                "}";

    std::string signature_header = Crypto::get_signature_header(pkey, "POST", "/device/authenticate", "", xboxAuthBody);

    response = WebRequests::https_post(xboxAuthAddr, xboxAuthBody, "application/json", "x-xbl-contract-version: 1\r\n" + signature_header);


    std::optional<std::string> expiration = JSON::get_value(response, "NotAfter");
    std::optional<std::string> token = JSON::get_value(response, "Token");
    std::optional<std::string> device_id = JSON::get_value(response, "did");

    // SISU

    std::string sisuAddr = "sisu.xboxlive.com/authorize";
    std::string sisuBody = "{"
                                "\"AccessToken\": \"t=" + access_token.value() + "\","
                                "\"DeviceToken\": \"" + token.value() + "\","
                                "\"AppId\": \"" + CLIENT_ID + "\","
                                "\"ProofKey\": " + proof_key + ","
                                "\"SiteName\": \"user.auth.xboxlive.com\","
                                "\"RelyingParty\": \"rp://api.minecraftservices.com/\","
                                "\"Sandbox\": \"RETAIL\","
                                "\"UseModernGamertag\": true"
                           "}";

    signature_header = Crypto::get_signature_header(pkey, "POST", "/authorize", "", sisuBody);

    EVP_PKEY_free(pkey);
    EVP_PKEY_CTX_free(pctx);

    /* Removes all digests and ciphers */
    EVP_cleanup();

    /* if you omit the next, a small leak may be left when you make use of the BIO (low level API) for e.g. base64 transformations */
    CRYPTO_cleanup_all_ex_data();

    /* Remove error strings */
    ERR_free_strings();

    response = WebRequests::https_post(sisuAddr, sisuBody, "application/json", signature_header);

    std::optional<std::string> authorization_token_full = JSON::get_value(response, "AuthorizationToken");
    if (!authorization_token_full.has_value()) throw std::runtime_error("Failed to find authorization token!");

    std::optional<std::string> authorization_token = JSON::get_value(*authorization_token_full, "Token");
    std::optional<std::string> user_hash = JSON::get_value(*authorization_token_full, "uhs");


    std::string mcAuthAddr = "api.minecraftservices.com/launcher/login";
    std::string mcAuthBody = "{"
                                 "\"platform\": \"PC_LAUNCHER\","
                                 "\"xtoken\": \"XBL3.0 x=" + user_hash.value() + ";" + authorization_token.value() + "\""
                             "}";

    response = WebRequests::https_post(mcAuthAddr, mcAuthBody, "application/json");

    std::optional<std::string> token_type = JSON::get_value(response, "token_type");
    std::optional<std::string> mc_access_token = JSON::get_value(response, "access_token");

    std::string mcProfileAddr = "api.minecraftservices.com/minecraft/profile";
    std::string authorization_header = "authorization: " + token_type.value() + " " + mc_access_token.value() + "\r\n";

    response = WebRequests::https_get(mcProfileAddr, authorization_header);

    std::optional<std::string> mc_uuid = JSON::get_value(response, "id");
    std::optional<std::string> mc_username = JSON::get_value(response, "name");

    return MCAccount{*mc_username, *mc_uuid, *mc_access_token};
}
