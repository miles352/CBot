#pragma once
#include <string>

namespace WebRequests
{
    /** Sends an https request. Synchronously waits for a response before returning.
     * @param full_url The full url, not including the prefixing https://
     * @param method The method to use, either POST or GET
     * @param body The body to be sent in the request.
     * @param content_type The content type. Default is <code>application/x-www-form-urlencoded</code>.
     * @param extra_headers Headers to add to the request. They must be delimited by a <code>\r\n</code>
     * @returns The resulting response from the request.
     */
    std::string send_request(const std::string& full_url, const std::string& method, const std::string& body,
    const std::string& content_type = "application/x-www-form-urlencoded", const std::string& extra_headers = "");

    std::string https_get(const std::string& addr, const std::string& extra_headers = "");

    std::string https_post(const std::string& addr, const std::string& body, const std::string& content_type = "application/x-www-form-urlencoded",
    const std::string& extra_headers = "");
}
