#pragma once

#include <chrono>
#include <sstream>
#include <string>

namespace Time
{
    /** Converts a timestamp represented as a string in the form 2025-11-05T03:02:19.4429437Z to milliseconds since the
     * unix epoch.
     * Note: This assumes the timestamp is in the UTC timezone.
     */
    inline long get_epoch_millis(std::string timestamp)
    {
        std::istringstream date{std::move(timestamp)};
        std::chrono::sys_time<std::chrono::milliseconds> tp;
        date >> std::chrono::parse("%Y-%m-%dT%T", tp);
        return tp.time_since_epoch().count();
    }
}
