#include "XblDeviceToken.hpp"

#include <stdexcept>
#include <openssl/err.h>
#include <openssl/evp.h>

#include "packets/login/clientbound/SetCompressionS2CPacket.hpp"
#include "utils/Crypto.hpp"
#include "utils/JSON.hpp"
#include "utils/Time.hpp"
#include "utils/WebRequests.hpp"

XblDeviceToken::XblDeviceToken()
{
    // https://wiki.openssl.org/index.php/Libcrypto_API

    /* Load the human readable error strings for libcrypto */
    ERR_load_crypto_strings();

    /* Load all digest and cipher algorithms */
    OpenSSL_add_all_algorithms();

    EVP_PKEY_CTX* pctx = EVP_PKEY_CTX_new_id(EVP_PKEY_EC, NULL);
    if (!pctx) throw std::runtime_error("Failed to create encryption instance.");

    if (!EVP_PKEY_keygen_init(pctx)) throw std::runtime_error("Failed to initialize keygen.");
    if (!EVP_PKEY_CTX_set_ec_paramgen_curve_nid(pctx, NID_X9_62_prime256v1)) throw std::runtime_error("Failed to generate encryption params.");
    this->pkey = NULL;
    EVP_PKEY_keygen(pctx, &this->pkey);
    EVP_PKEY_CTX_free(pctx);

    const EC_KEY* private_key = EVP_PKEY_get0_EC_KEY(this->pkey);
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

    std::string response = WebRequests::https_post(xboxAuthAddr, xboxAuthBody, "application/json", "x-xbl-contract-version: 1\r\n" + signature_header);

    std::optional<std::string> token = JSON::get_value(response, "Token");

    if (!token.has_value()) throw std::runtime_error("Failed to find token in XBL device token response!");

    this->not_after = Time::get_epoch_millis(JSON::get_value(response, "NotAfter").value());
    this->token = std::move(token.value());
    this->device_id = JSON::get_value(response, "did").value();
}

XblDeviceToken::~XblDeviceToken()
{
    EVP_PKEY_free(pkey);

    /* Removes all digests and ciphers */
    EVP_cleanup();

    /* if you omit the next, a small leak may be left when you make use of the BIO (low level API) for e.g. base64 transformations */
    CRYPTO_cleanup_all_ex_data();

    /* Remove error strings */
    ERR_free_strings();
}
