#pragma once

#include "packets/ClientboundPacket.hpp"
#include "packets/ServerboundPacket.hpp"

#include <vector>
#include <unordered_map>
#include <map>
#include <functional>
#include <typeindex>
#include <any>
#include <utility>
#include <concepts>

template <typename T>
concept EventType = requires { typename T::data; };

class EventBus
{

    struct EventListener
    {
        EventListener() = default;
        EventListener(std::function<void(std::any&)> callback, int priority, bool once) : callback(callback), priority(priority), once(once) {};
        std::function<void(std::any&)> callback;
        /** Higher numbers run before lower numbers. */
        int priority;
        /** If the event should only run once and then be removed. */
        bool once;
    };

    struct EventListenerTypes 
    {
        /** A map of listener names to callback functions */
        std::unordered_map<std::string, EventListener> named;
        /** A list of callback functions. These cannot be removed by name. */
        std::vector<EventListener> unnamed;
    };

    /** A map of event names to the event listeners.*/
    std::unordered_map<std::type_index, EventListenerTypes> event_listeners;

    public:
    EventBus() = default;

    /** A method to add a callback when this event is fired.
     * @param listener_name The name of the event listener, to be used when removing it. Passing an empty string is the same as calling this function without the `listener_name` param.
     * @param callback The callback function to run when the event is emitted.
     */
    template <typename EventType>
    void on(std::function<void(typename EventType::data)> callback, const std::string& listener_name, int priority)
    {
        std::function<void(std::any&)> callback_any = [callback](std::any& data) {
            // All callbacks are stored as having a reference in the parameter, so it is stripped when the method without a reference is called.
            callback(std::any_cast<typename EventType::data>(data));
        };
        if (listener_name.empty())
        {
            this->event_listeners[std::type_index(typeid(EventType))].unnamed.push_back(EventListener{callback_any, priority, false});
        }
        else
        {
            this->event_listeners[std::type_index(typeid(EventType))].named[listener_name] = EventListener{callback_any, priority, false};
        }
    }

    /** A method to add a callback when this event is fired.
     * @param callback The callback function to run when the event is emitted.
     */
    template <typename EventType>
    void on(std::function<void(typename EventType::data)> callback)
    {
        this->on<EventType>(callback, "");
    }

    /** Runs a callback when an event is fired, using a reference as the type parameter. 
     * Callbacks that run after this (lower priority) will have the modified value.
     * @param listener_name The name of the event listener, to be used when removing it. Passing an empty string is the same as calling this function without the `listener_name` param.
     * @param callback The callback function to run when the event is emitted.
     */
    template <typename EventType>
    void on_ref(const std::string& listener_name, std::function<void(typename EventType::data&)> callback)
    {
        std::function<void(std::any&)> callback_any = [callback](std::any& data) {
            callback(std::any_cast<typename EventType::data&>(data));
        };
        if (listener_name.empty())
        {
            this->event_listeners[std::type_index(typeid(EventType))].unnamed.push_back(EventListener{callback_any, 0, false});
        }
        else
        {
            this->event_listeners[std::type_index(typeid(EventType))].named[listener_name] = EventListener{callback_any, 0, false};
        }
    }

    /** Runs a callback when an event is fired, using a reference as the type parameter. 
     * Callbacks that run after this (lower priority) will have the modified value.
     * @param callback The callback function to run when the event is emitted.
     */
    template <typename EventType>
    void on_ref(std::function<void(typename EventType::data&)> callback)
    {
        this->on_ref<EventType>("", callback);
    }

    /** Emits an event to all listeners of that event, with the specified data. */
    template <typename EventType>
    void emit(typename EventType::data data)
    {
        auto listeners = this->event_listeners[std::type_index(typeid(EventType))];
        std::map<int, std::vector<std::function<void(std::any&)>>, std::greater<int>> callbacks;

        for (auto& [name, listener] : listeners.named)
        {
            callbacks[listener.priority].push_back(listener.callback);
        }

        for (EventBus::EventListener listener : listeners.unnamed)
        {
            callbacks[listener.priority].push_back(listener.callback);
        }

        // Creates a copy so that you can pass an rvalue and this still works to emit a reference
        std::any data_copy = data;

        for (auto& vec : callbacks)
        {
            for (std::function<void(std::any&)> callback : vec.second)
            {
                callback(data_copy);
            }
        }
    }

    /** Removes a listener with the specified name.
     * @returns True if the listener was removed, and false if the name was not found.
     */
    template <typename EventType>
    bool remove_listener(const std::string& listener_name)
    {
        return this->event_listeners[std::type_index(typeid(EventType))].named.erase(listener_name);
    }
};
