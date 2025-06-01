#include "EventBus.hpp"

bool EventBus::remove_listener(const std::string& event, const std::string& listener_name)
{
    return event_listeners[event].named.erase(listener_name);
}
