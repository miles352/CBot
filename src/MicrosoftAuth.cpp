#include "MicrosoftAuth.hpp"
#include <iostream>
#include <format>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>
#include <memory.h>
#include <unistd.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <format>
#include <chrono>
#include <thread>
#include "config.hpp"

MicrosoftAuth::MicrosoftAuth()
{
    SSL_library_init();
    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();

    std::string oAuthCreateAddr = "login.microsoftonline.com/consumers/oauth2/v2.0/devicecode";
    // std::string oAuthCreateAddr = "login.live.com/oauth20_token.srf";
    std::string oAuthCreateBody = "client_id=" + CLIENT_ID + 
                                //   "&scope=service::user.auth.xboxlive.com::MBI_SSL"
                                //   "&grant_type=refresh_token";
                                  "&scope=XboxLive.signin";
    std::string response = this->httpsPost(oAuthCreateAddr, oAuthCreateBody, std::nullopt);
    
    // std::cout << "device code: " << deviceCode << std::endl;
    std::cout << std::format("Result: {}", response)  << std::endl;

    std::optional<std::string> deviceCode = this->readJSON(response, "device_code");
    if (!deviceCode.has_value())
    {
        throw std::runtime_error("Failed to find device_code in oauth response.");
    }

    std::optional<std::string> message = this->readJSON(response, "message");
    if (message.has_value())
    {
        std::cout << message.value() << std::endl;
    }

    std::string oAuthPollAddr = "login.microsoftonline.com/consumers/oauth2/v2.0/token";
    std::string oAuthPollBody = "grant_type=urn:ietf:params:oauth:grant-type:device_code"
                                "&client_id=" + CLIENT_ID + 
                                "&device_code=" + deviceCode.value();
    
    std::optional<std::string> oAuthToken = std::nullopt;
    while (!oAuthToken.has_value()) // TODO: Handle all these errors: https://learn.microsoft.com/en-us/entra/identity-platform/v2-oauth2-device-code
    {
        response = this->httpsPost(oAuthPollAddr, oAuthPollBody, std::nullopt);
        
        oAuthToken = this->readJSON(response, "access_token");

        std::this_thread::sleep_for(std::chrono::seconds(5)); // Poll for response every 5 seconds
    }

    std::cout << "Got oauth token!" << std::endl;

    std::string xboxAuthAddr = "user.auth.xboxlive.com/user/authenticate";
    std::string xboxAuthBody = "{"
                                    "\"Properties\": {"
                                        "\"AuthMethod\": \"RPS\","
                                        "\"SiteName\": \"user.auth.xboxlive.com\","
                                        "\"RpsTicket\": \"d=" + oAuthToken.value() + "\""
                                    "},"
                                    "\"RelyingParty\": \"http://auth.xboxlive.com\","
                                    "\"TokenType\": \"JWT\""
                                "}";

    response = this->httpsPost(xboxAuthAddr, xboxAuthBody, "application/json");
    std::optional<std::string> xblToken = this->readJSON(response, "Token");
    std::optional<std::string> xblUserHash = this->readJSON(response, "uhs");
    if (!xblToken.has_value() || !xblUserHash.has_value())
    {
        throw std::runtime_error("Failed to get xbl token or user hash!");
    }

    std::string xstsAddr = "xsts.auth.xboxlive.com/xsts/authorize";
    std::string xstsBody = "{"
                                "\"Properties\": {"
                                    "\"SandboxId\": \"RETAIL\","
                                    "\"UserTokens\": ["
                                        "\"" + xblToken.value() + "\""
                                    "]"
                                "},"
                                "\"RelyingParty\": \"rp://api.minecraftservices.com/\","
                                "\"TokenType\": \"JWT\""
                            "}";
    response = this->httpsPost(xstsAddr, xstsBody, "application/json");
    std::optional<std::string> xstsToken = this->readJSON(response, "Token");
    if (!xstsToken.has_value())
    {
        throw std::runtime_error("Failed to get xsts token!");
    }

    std::cout << "Got xsts token!" << std::endl;


    std::string minecraftAuthAddr = "api.minecraftservices.com/authentication/login_with_xbox";
    std::string minecraftAuthBody = "{"
                                    "   \"identityToken\": \"XBL3.0 x=" + xblUserHash.value() + ";" + xstsToken.value() + "\""
                                    "}";
    response = this->httpsPost(minecraftAuthAddr, minecraftAuthBody, "application/json");
    std::cout << response << std::endl; // Needs approval for this API :(

}

std::string MicrosoftAuth::sendRequest(const std::string& fullURL, const std::string& method, const std::string& body, std::optional<std::string> contentType)
{


    int firstSlash = fullURL.find('/'); // TODO: Error handling

    std::string name = fullURL.substr(0, firstSlash);
    std::string path = fullURL.substr(firstSlash);

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

    std::string request = std::format("{} {} HTTP/1.1\r\n"
                                      "Host: {}\r\n"
                                      "Content-Type: {}\r\n"
                                      "Content-Length: {}\r\n"
                                      "Connection: close\r\n"
                                      "Accept: application/json\r\n"
                                      "\r\n"
                                      "{}",
                                       method, path, name, contentType.has_value() ? contentType.value() : "application/x-www-form-urlencoded", body.length(), body);
    // std::cout << request << std::endl;
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

std::string MicrosoftAuth::httpsGet(const std::string& addr)
{

    return "";
}

std::string MicrosoftAuth::httpsPost(const std::string& addr, const std::string& body, std::optional<std::string> contentType)
{
    return this->sendRequest(addr, "POST", body, contentType);
}

std::optional<std::string> MicrosoftAuth::readJSON(const std::string& json, const std::string& key)
{
    int length = key.length() + 3; // + 3 for ":"
    int start = json.find(key);
    if (start == std::string::npos) return std::nullopt;
    int end = json.find("\"", start + length);
    if (end == std::string::npos) return std::nullopt;
    return json.substr(start + length, end - start - length); 
}