#pragma once

#include <string>
#include <optional>
#include <openssl/ec.h>

struct MCAccount
{
    std::string username;
    std::string uuid;
    std::string token;
};

class MicrosoftAuth
{
    public:
    MicrosoftAuth() = delete;

    static MCAccount login_full();

    static std::string https_get(const std::string& addr, const std::string& extra_headers = "");

    static std::string https_post(const std::string& addr, const std::string& body, const std::string& content_type = "application/x-www-form-urlencoded",
    const std::string& extra_headers = "");

    /** Finds a json key and returns the value. */
    static std::optional<std::string> read_json(const std::string& json, const std::string& key);

    /** Sends an https request. Synchronously waits for a response before returning.
     * @param full_url The full url, not including the prefixing https://
     * @param method The method to use, either POST or GET
     * @param body The body to be sent in the request.
     * @param content_type The content type. Default is <code>application/x-www-form-urlencoded</code>.
     * @param extra_headers Headers to add to the request. They must be delimited by a <code>\r\n</code>
     * @returns The resulting response from the request.
     */
    static std::string send_request(const std::string& full_url, const std::string& method, const std::string& body,
    const std::string& content_type = "application/x-www-form-urlencoded", const std::string& extra_headers = "");

    /** Generates a random UUID, including the version number (4) and variant. */
    static std::string get_random_uuid();

    private:
    /** The size in bytes of coordinates in a P-256 key. */
    static constexpr int COORD_SIZE = 32;
    /** The offset of time from 1600 to 1970 since windows time starts at 1600 */
    static constexpr long WINDOWS_TIME_OFFSET = 11644473600;
    /** Returns the proof key, used in JWT requests. */
    static std::string get_proof_key(const EC_GROUP* group, const EC_POINT* public_key);

    /** Encodes data into a base64 string in url format, with no padding. */
    static std::string base64_encode_url_no_padding(const void* data, size_t size);

    /** Encodes data into a normal base64 string. */
    static std::string base_64_encode(const void* data, size_t size);

    static std::string get_signature_header(EVP_PKEY* pkey, const std::string& method, const std::string& url_path, const std::string& url_params, const std::string& body);



    
};
