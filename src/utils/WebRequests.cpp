#include "WebRequests.hpp"

#include <netdb.h>
#include <unistd.h>
#include <openssl/err.h>
#include <openssl/ssl.h>

std::string WebRequests::send_request(const std::string& full_url, const std::string& method, const std::string& body,
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

std::string WebRequests::https_get(const std::string& addr, const std::string& extra_headers)
{

    return send_request(addr, "GET", "", "", extra_headers);
}

std::string WebRequests::https_post(const std::string& addr, const std::string& body, const std::string& content_type,
    const std::string& extra_headers)
{
    return WebRequests::send_request(addr, "POST", body, content_type, extra_headers);
}
