#pragma once
#include <string>
#include <openssl/ec.h>

namespace Crypto
{
    /** The offset of time from 1600 to 1970 since windows time starts at 1600 */
    static constexpr long WINDOWS_TIME_OFFSET = 11644473600;
    /** The size in bytes of coordinates in a P-256 key. */
    static constexpr int P256_COORD_SIZE = 32;
    /** Returns the proof key, used in JWT requests. */
    std::string get_proof_key(const EC_GROUP* group, const EC_POINT* public_key);

    std::string get_signature_header(EVP_PKEY* pkey, const std::string& method, const std::string& url_path, const std::string& url_params, const std::string& body);

    /** Generates a random UUID, including the version number (4) and variant. */
    std::string get_random_uuid();
}
