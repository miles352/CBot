#pragma once

#include <string>
#include <optional>

class MicrosoftAuth
{
    public:
    MicrosoftAuth();

    static std::string httpsGet(const std::string& addr);

    static std::string httpsPost(const std::string& addr, const std::string& body, std::optional<std::string> contentType);

    static std::optional<std::string> readJSON(const std::string& json, const std::string& key);

    static std::string sendRequest(const std::string& fullURL, const std::string& method, const std::string& body, std::optional<std::string> contentType);

    private:

    
    
};