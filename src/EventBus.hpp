#pragma once

#include "packets/ClientboundPacket.hpp"
#include "packets/ServerboundPacket.hpp"

#include <vector>
#include <unordered_map>
#include <functional>
#include <typeindex>
#include <any>
#include <utility>


class EventBus
{
    struct EventListenerTypes {
        /** A map of listener names to callback functions */
        std::unordered_map<std::string, std::function<void(std::any)>> named;
        /** A list of callback functions. These cannot be removed by name. */
        std::vector<std::function<void(std::any)>> unnamed;
    };

    /** A map of event names to the event listeners.*/
    std::unordered_map<std::string, EventListenerTypes> event_listeners;

    public:
    EventBus() = default;
    
    /** A method to add a callback when this event is fired. */
    template <typename T>
    void on(const std::string& event, std::function<void(T)> listener)
    {
        std::function<void(std::any)> wrapper = [listener](std::any data) {
            listener(std::any_cast<T>(data));
        };
        this->event_listeners[event].unnamed.push_back(wrapper);
    }

    /** A method to add a callback when this event is fired.
     * @param listener_name The name of the listener, to be used when calling `remove_listener`
     */
    template <typename T>
    void on(const std::string& event, const std::string& listener_name, std::function<void(T)> listener)
    {
        std::function<void(std::any)> wrapper = [listener](std::any data) {
            listener(std::any_cast<T>(data));
        };
        this->event_listeners[event].named[listener_name] = listener;
    }

    /** Emits an event to all listeners of that event, with the specified data. */
    template <typename T>
    void emit(const std::string& event, T data)
    {
        auto event_listeners = this->event_listeners[event];
        std::any const_data = std::as_const(data);
        for (auto it = event_listeners.named.begin(); it != event_listeners.named.end(); )
        {
            it->second(const_data);
        }

        for (std::function<void(std::any)> fn : event_listeners.unnamed)
        {
            fn(const_data);
        }
    }

    /** Removes a listener with the specified name.
     * @returns True if the listener was removed, and false if the name was not found.
     */
    bool remove_listener(const std::string& event, const std::string& listener_name);
};
