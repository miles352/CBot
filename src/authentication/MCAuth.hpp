#pragma once
#include "MicrosoftAuth.hpp"
#include "SisuAuth.hpp"

class MCAuth
{
public:
    explicit MCAuth(const SisuAuth& sisu_auth);

    MCAccount get_account_info() const;

    std::string access_token;
    long not_after;
    std::string token_type;
};
