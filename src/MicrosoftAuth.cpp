#include "MicrosoftAuth.hpp"
#include <iostream>
#include <format>
#include <sys/socket.h>
#include <arpa/inet.h>
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

MCAccount MicrosoftAuth::login_full()
{
    std::string oAuthCreateAddr = "login.live.com/oauth20_connect.srf";
    std::string oAuthCreateBody = "client_id=" + CLIENT_ID + 
                                  "&scope=service::user.auth.xboxlive.com::MBI_SSL" +
                                  "&response_type=device_code";
    std::string response = https_post(oAuthCreateAddr, oAuthCreateBody);


    std::optional<std::string> verification_uri = MicrosoftAuth::read_json(response, "verification_uri");
    if (!verification_uri.has_value())
    {
        throw std::runtime_error("Failed to find verification_uri in oauth response.");
    }

    std::optional<std::string> user_code = MicrosoftAuth::read_json(response, "user_code");
    if (!user_code.has_value())
    {
        throw std::runtime_error("Failed to find user_code in oauth response.");
    }

    std::optional<std::string> deviceCode = MicrosoftAuth::read_json(response, "device_code");

    if (!deviceCode.has_value())
    {
        throw std::runtime_error("Failed to find device_code in oauth response.");
    }


    printf("Please sign in at %s?otc=%s\n", verification_uri->c_str(), user_code->c_str());


    std::optional<std::string> interval_str = MicrosoftAuth::read_json(response, "interval");
    if (!interval_str.has_value())
    {
        throw std::runtime_error("Failed to read interval in oauth response.");
    }
    int interval = std::stoi(interval_str.value());

    std::optional<std::string> expires_in_str = MicrosoftAuth::read_json(response, "expires_in");
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
        response = MicrosoftAuth::https_post(oAuthPollAddr, oAuthPollBody);

        oAuthToken = MicrosoftAuth::read_json(response, "access_token");

        std::this_thread::sleep_for(std::chrono::seconds(interval));
        if (std::chrono::duration_cast<std::chrono::seconds>((std::chrono::system_clock::now() - initial_time)).count() >= expires_in) throw std::runtime_error("OAuth Authorization has expired.");
    }


    std::optional<std::string> access_token = MicrosoftAuth::read_json(response, "access_token");
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

    std::string uuid = MicrosoftAuth::get_random_uuid();
    std::string proof_key = MicrosoftAuth::get_proof_key(group, public_key);


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

    std::string signature_header = MicrosoftAuth::get_signature_header(pkey, "POST", "/device/authenticate", "", xboxAuthBody);

    response = MicrosoftAuth::https_post(xboxAuthAddr, xboxAuthBody, "application/json", "x-xbl-contract-version: 1\r\n" + signature_header);


    std::optional<std::string> expiration = MicrosoftAuth::read_json(response, "NotAfter");
    std::optional<std::string> token = MicrosoftAuth::read_json(response, "Token");
    std::optional<std::string> device_id = MicrosoftAuth::read_json(response, "did");

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

    signature_header = MicrosoftAuth::get_signature_header(pkey, "POST", "/authorize", "", sisuBody);

    EVP_PKEY_free(pkey);
    EVP_PKEY_CTX_free(pctx);

    /* Removes all digests and ciphers */
    EVP_cleanup();

    /* if you omit the next, a small leak may be left when you make use of the BIO (low level API) for e.g. base64 transformations */
    CRYPTO_cleanup_all_ex_data();

    /* Remove error strings */
    ERR_free_strings();

    response = MicrosoftAuth::https_post(sisuAddr, sisuBody, "application/json", signature_header);

    std::optional<std::string> authorization_token_full = MicrosoftAuth::read_json(response, "AuthorizationToken");
    if (!authorization_token_full.has_value()) throw std::runtime_error("Failed to find authorization token!");

    std::optional<std::string> authorization_token = MicrosoftAuth::read_json(*authorization_token_full, "Token");
    std::optional<std::string> user_hash = MicrosoftAuth::read_json(*authorization_token_full, "uhs");


    std::string mcAuthAddr = "api.minecraftservices.com/launcher/login";
    std::string mcAuthBody = "{"
                                 "\"platform\": \"PC_LAUNCHER\","
                                 "\"xtoken\": \"XBL3.0 x=" + user_hash.value() + ";" + authorization_token.value() + "\""
                             "}";

    response = MicrosoftAuth::https_post(mcAuthAddr, mcAuthBody, "application/json");

    std::optional<std::string> token_type = MicrosoftAuth::read_json(response, "token_type");
    std::optional<std::string> mc_access_token = MicrosoftAuth::read_json(response, "access_token");

    std::string mcProfileAddr = "api.minecraftservices.com/minecraft/profile";
    std::string authorization_header = "authorization: " + token_type.value() + " " + mc_access_token.value() + "\r\n";

    response = MicrosoftAuth::https_get(mcProfileAddr, authorization_header);

    std::optional<std::string> mc_uuid = MicrosoftAuth::read_json(response, "id");
    std::optional<std::string> mc_username = MicrosoftAuth::read_json(response, "name");

    return MCAccount{*mc_username, *mc_uuid, *mc_access_token};
}

std::string MicrosoftAuth::send_request(const std::string& full_url, const std::string& method, const std::string& body,
    const std::string& content_type, const std::string& extra_headers)
{
    SSL_library_init();
    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();


    int firstSlash = full_url.find('/'); // TODO: Error handling

    std::string name = full_url.substr(0, firstSlash);
    std::string path = full_url.substr(firstSlash);

    addrinfo hints;
    addrinfo* servInfo;
    int status;
    memset(&hints, 0, sizeof(hints)); // make sure hints is zeroed
    hints.ai_family = AF_UNSPEC; // ipv4 or v6
    hints.ai_socktype = SOCK_STREAM; // tcp
    hints.ai_flags = AI_PASSIVE;
    if ((status = getaddrinfo(name.c_str(), "443", &hints, &servInfo)) != 0)
    {
        printf("Error getting info: %s\n", gai_strerror(status));
    }

    int s = socket(servInfo->ai_family, servInfo->ai_socktype, 0);

    if (s == -1)
    {
        perror("Error creating socket: ");
    }

    status = connect(s, servInfo->ai_addr, servInfo->ai_addrlen);
    if (status == -1)
    {
        perror("Error connecting: ");
    }

    SSL_CTX* ctx = SSL_CTX_new(TLS_client_method());

    SSL* ssl = SSL_new(ctx);
    status = SSL_set_fd(ssl, s);
    if (status == 0)
    {
        ERR_print_errors_fp(stderr);
    }

    status = SSL_connect(ssl);
    if (status != 1) 
    {
        ERR_print_errors_fp(stderr);
    }

    std::string request = method + " " + path + " HTTP/1.1\r\n"
                          "Host: " + name + "\r\n"
                          + (content_type.empty() ? "" : "Content-Type: " + content_type + "\r\n") +
                          "Content-Length: " + std::to_string(body.length()) + "\r\n"
                          "Connection: close\r\n"
                          "Accept: application/json\r\n"
                          + extra_headers +
                          "\r\n"
                          + body;

    SSL_write(ssl, request.c_str(), request.length());

    std::string out;
    char buffer[4096];
    int bytes;

    while (true)
    {
        bytes = SSL_read(ssl, buffer, sizeof(buffer));
        if (bytes <= 0) break;
        out.append(buffer, bytes);
    }

    SSL_shutdown(ssl);
    SSL_free(ssl);
    close(s);
    SSL_CTX_free(ctx);
    return out;
}

std::string MicrosoftAuth::https_get(const std::string& addr, const std::string& extra_headers)
{

    return send_request(addr, "GET", "", "", extra_headers);
}

std::string MicrosoftAuth::https_post(const std::string& addr, const std::string& body, const std::string& content_type,
    const std::string& extra_headers)
{
    return send_request(addr, "POST", body, content_type, extra_headers);
}



std::optional<std::string> MicrosoftAuth::read_json(const std::string& json, const std::string& key)
{
    int brackets = 0;
    size_t start = json.find("\"" + key + "\"");
    if (start == std::string::npos) return std::nullopt;

    const char* ptr = strchr(json.data() + start + key.length(), ':') + 1;

    bool in_string = false;

    std::string out;

    while (*ptr)
    {
        out.push_back(*ptr);

        switch (*ptr)
        {
            case '"':
            {
                if (!in_string) // Opening string quote
                {
                    in_string = true;
                    if (brackets == 0) // Strip quotes if its at top level, meaning its the value were getting
                    {
                        out.pop_back();
                    }
                }
                else // Possible closing string quote
                {
                    char next = *(ptr + 1); // Shouldnt go out of bounds because json shouldnt end in a quote, and would just read null anyways
                    if (next == ',' || next == '}' || next == ':') // Closing quote
                    {
                        if (brackets == 0)
                        {
                            out.pop_back();
                            return out;
                        }
                        in_string = false;
                    }
                }
                break;
            }
            case '{':
            {
                if (!in_string) brackets++; // Opening brace
                break;
            }
            case '}':
            {
                if (!in_string) // Closing brace
                {
                    if (brackets == 0)
                    {
                        out.pop_back();
                        return out;
                    }
                    brackets--;
                }
                break;
            }
            case ',':
            {
                if (!in_string && brackets == 0)
                {
                    out.pop_back();
                    return out;
                }
                break;
            }
            case ' ':
            {
                if (!in_string) out.pop_back();
                break;
            }
            default:
            {
                break;
            }
        }
        ptr++;
    }
    return out;
}

std::string MicrosoftAuth::get_proof_key(const EC_GROUP* group, const EC_POINT* public_key)
{
    BIGNUM* x = BN_new();
    BIGNUM* y = BN_new();

    if (!EC_POINT_get_affine_coordinates_GFp(group, public_key, x, y, NULL)) throw std::runtime_error("Failed to get affine coordinates.");

    uint8_t x_buffer[COORD_SIZE];
    uint8_t y_buffer[COORD_SIZE];

    BN_bn2binpad(x, x_buffer, COORD_SIZE);
    BN_bn2binpad(y, y_buffer, COORD_SIZE);

    std::string x_encoded = MicrosoftAuth::base64_encode_url_no_padding(x_buffer, COORD_SIZE);
    std::string y_encoded = MicrosoftAuth::base64_encode_url_no_padding(y_buffer, COORD_SIZE);

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

std::string MicrosoftAuth::base64_encode_url_no_padding(const void* data, size_t size)
{
    // Create a basic input output using memory
    BIO* mem = BIO_new(BIO_s_mem());
    // Create base64 filter
    BIO* b64 = BIO_new(BIO_f_base64());
    // Add the filter to the main BIO
    mem = BIO_push(b64, mem);
    BIO_set_flags(mem, BIO_FLAGS_BASE64_NO_NL);
    BIO_write(mem, data, size);
    BIO_flush(mem);

    BUF_MEM* mem_ptr;
    BIO_get_mem_ptr(mem, &mem_ptr);

    // Change to url format, + goes to - and / goes to _ and remove padding
    int len = mem_ptr->length;
    for (int i = 0; i < len; i++)
    {
        if (mem_ptr->data[i] == '+') mem_ptr->data[i] = '-';
        else if (mem_ptr->data[i] == '/') mem_ptr->data[i] = '_';
        else if (mem_ptr->data[i] == '=') mem_ptr->length--;
    }

    std::string output(mem_ptr->data, mem_ptr->length);

    BIO_free_all(mem);

    return output;
}

std::string MicrosoftAuth::base_64_encode(const void* data, size_t size)
{
    // Create a basic input output using memory
    BIO* mem = BIO_new(BIO_s_mem());
    // Create base64 filter
    BIO* b64 = BIO_new(BIO_f_base64());
    // Add the filter to the main BIO
    mem = BIO_push(b64, mem);
    BIO_set_flags(mem, BIO_FLAGS_BASE64_NO_NL);
    BIO_write(mem, data, size);
    BIO_flush(mem);

    BUF_MEM* mem_ptr;
    BIO_get_mem_ptr(mem, &mem_ptr);

    std::string output(mem_ptr->data, mem_ptr->length);

    BIO_free_all(mem);

    return output;
}


std::string MicrosoftAuth::get_signature_header(EVP_PKEY* pkey, const std::string& method, const std::string& url_path, const std::string& url_params, const std::string& body)
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

    std::string header = "signature: " + MicrosoftAuth::base_64_encode(header_data->data, header_data->length) + "\r\n";

    BIO_free_all(bio);

    return header;
}

std::string MicrosoftAuth::get_random_uuid()
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
