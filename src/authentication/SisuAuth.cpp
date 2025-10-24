#include "SisuAuth.hpp"

#include <optional>
#include <stdexcept>
#include <openssl/err.h>
#include <openssl/evp.h>

#include "Constants.hpp"
#include "utils/Crypto.hpp"
#include "utils/JSON.hpp"
#include "utils/WebRequests.hpp"

SisuAuth::SisuAuth(const XblDeviceToken& xbl_device_token, const MsaTokenResponse& msa_token_response)
{
    const EC_KEY* private_key = EVP_PKEY_get0_EC_KEY(xbl_device_token.pkey);
    const EC_GROUP* group = EC_KEY_get0_group(private_key);
    const EC_POINT* public_key = EC_KEY_get0_public_key(private_key);

    std::string proof_key = Crypto::get_proof_key(group, public_key);

    std::string sisuAddr = "sisu.xboxlive.com/authorize";
    std::string sisuBody = "{"
                                "\"AccessToken\": \"t=" + msa_token_response.access_token + "\","
                                "\"DeviceToken\": \"" + xbl_device_token.token + "\","
                                "\"AppId\": \"" + CLIENT_ID + "\","
                                "\"ProofKey\": " + proof_key + ","
                                "\"SiteName\": \"user.auth.xboxlive.com\","
                                "\"RelyingParty\": \"rp://api.minecraftservices.com/\","
                                "\"Sandbox\": \"RETAIL\","
                                "\"UseModernGamertag\": true"
                           "}";

    std::string signature_header = Crypto::get_signature_header(xbl_device_token.pkey, "POST", "/authorize", "", sisuBody);


    std::string response = WebRequests::https_post(sisuAddr, sisuBody, "application/json", signature_header);

    std::optional<std::string> authorization_token_full = JSON::get_value(response, "AuthorizationToken");
    if (!authorization_token_full.has_value()) throw std::runtime_error("Failed to find authorization token!");

    this->authorization_token = JSON::get_value(*authorization_token_full, "Token").value();
    this->user_hash = JSON::get_value(*authorization_token_full, "uhs").value();
}
