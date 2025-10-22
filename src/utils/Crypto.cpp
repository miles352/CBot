#include "Crypto.hpp"

#include <format>

#include "Base64.hpp"

#include <stdexcept>
#include <vector>
#include <netinet/in.h>
#include <openssl/rand.h>

#include "conversions/StandardTypes.hpp"

std::string Crypto::get_proof_key(const EC_GROUP* group, const EC_POINT* public_key)
{
    BIGNUM* x = BN_new();
    BIGNUM* y = BN_new();

    if (!EC_POINT_get_affine_coordinates_GFp(group, public_key, x, y, NULL)) throw std::runtime_error("Failed to get affine coordinates.");

    uint8_t x_buffer[P256_COORD_SIZE];
    uint8_t y_buffer[P256_COORD_SIZE];

    BN_bn2binpad(x, x_buffer, P256_COORD_SIZE);
    BN_bn2binpad(y, y_buffer, P256_COORD_SIZE);

    std::string x_encoded = Base64::encode_url_no_padding(x_buffer, P256_COORD_SIZE);
    std::string y_encoded = Base64::encode_url_no_padding(y_buffer, P256_COORD_SIZE);

    std::string proof_key = "{"
                                "\"alg\":\"ES256\","
                                "\"crv\":\"P-256\","
                                "\"kty\":\"EC\","
                                "\"use\":\"sig\","
                                "\"x\":\"" + x_encoded + "\","
                                "\"y\":\"" + y_encoded + "\""
                            "}";

    BN_free(x);
    BN_free(y);

    return proof_key;
}

std::string Crypto::get_signature_header(EVP_PKEY* pkey, const std::string& method, const std::string& url_path, const std::string& url_params, const std::string& body)
{
    // This assumes local time is correct
    time_t local_time = time(nullptr); // Should be epoch seconds
    int64_t windows_timestamp = (local_time + WINDOWS_TIME_OFFSET) * 10000000L; // convert to 100 nanoseconds (10^-7)

    const uint32_t POLICY_VERSION = htonl(1); // convert to big endian
    const uint8_t ZERO = 0;
    const std::vector<uint8_t> windows_timestamp_big_endian = StandardTypes::to_bytes(windows_timestamp);

    BIO* bio = BIO_new(BIO_s_mem());

    BIO_write(bio, &POLICY_VERSION, sizeof(POLICY_VERSION));
    BIO_write(bio, &ZERO, sizeof(ZERO));

    BIO_write(bio, windows_timestamp_big_endian.data(), windows_timestamp_big_endian.size());
    BIO_write(bio, &ZERO, sizeof(ZERO));

    BIO_write(bio, method.c_str(), method.length()); // Do not write null character
    BIO_write(bio, &ZERO, sizeof(ZERO));

    std::string path_and_params = url_path + url_params;
    BIO_write(bio, path_and_params.c_str(), path_and_params.length());
    BIO_write(bio, &ZERO, sizeof(ZERO));

    // Skipping authorization header
    BIO_write(bio, &ZERO, sizeof(ZERO));

    BIO_write(bio, body.c_str(), body.length());
    BIO_write(bio, &ZERO, sizeof(ZERO));

    BUF_MEM* final_data;
    BIO_get_mem_ptr(bio, &final_data);

    // sign es256
    EVP_MD_CTX* md_ctx = EVP_MD_CTX_new();

    EVP_DigestSignInit(md_ctx, NULL, EVP_sha256(), NULL, pkey);
    EVP_DigestSignUpdate(md_ctx, final_data->data, final_data->length);
    size_t siglen;
    EVP_DigestSignFinal(md_ctx, NULL, &siglen);
    std::vector<unsigned char> signature(siglen);
    EVP_DigestSignFinal(md_ctx, signature.data(), &siglen);
    signature.resize(siglen);

    EVP_MD_CTX_free(md_ctx);
    BIO_free_all(bio);

    // Convert from DER format to P1363
    const unsigned char* data_ptr = signature.data();
    ECDSA_SIG* sig = d2i_ECDSA_SIG(NULL, &data_ptr, signature.size()); // der to internal (ASN.1)
    const BIGNUM* r = NULL;
    const BIGNUM* s = NULL;
    ECDSA_SIG_get0(sig, &r, &s);

    uint8_t converted[64]; // 32 bytes for r and 32 bytes for s
    BN_bn2binpad(r, converted, 32); // converts to big endian and pads to 32 bytes
    BN_bn2binpad(s, converted + 32, 32);

    ECDSA_SIG_free(sig);

    bio = BIO_new(BIO_s_mem());
    BIO_write(bio, &POLICY_VERSION, sizeof(POLICY_VERSION));
    BIO_write(bio, windows_timestamp_big_endian.data(), windows_timestamp_big_endian.size());
    BIO_write(bio, converted, sizeof(converted));

    BUF_MEM* header_data;
    BIO_get_mem_ptr(bio, &header_data);

    std::string header = "signature: " + Base64::encode(header_data->data, header_data->length) + "\r\n";

    BIO_free_all(bio);

    return header;
}

std::string Crypto::get_random_uuid()
{
    uint8_t bytes[16];
    if (RAND_bytes(bytes, sizeof(bytes)) != 1) throw std::runtime_error("Failed to generate random bytes!");

    bytes[6] = (bytes[6] & 0x0F) | 0x40;  // set version to 4
    bytes[8] = (bytes[8] & 0x3F) | 0x80;  // set variant

    std::string uuid = std::format("{:02x}{:02x}{:02x}{:02x}-{:02x}{:02x}-{:02x}{:02x}-{:02x}{:02x}-{:02x}{:02x}{:02x}{:02x}{:02x}{:02x}", bytes[0], bytes[1],
        bytes[2], bytes[3], bytes[4], bytes[5],bytes[6], bytes[7], bytes[8], bytes[9],
        bytes[10], bytes[11], bytes[12], bytes[13], bytes[14], bytes[15]);

    return uuid;
}
