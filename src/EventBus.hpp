#pragma once

#include <utility>
#include <vector>
#include <unordered_map>
#include <map>
#include <functional>
#include <typeindex>
#include <any>
#include <optional>
#include <string>
#include <variant>

template <typename T>
concept HasData = requires { typename T::data; };

class EventBus
{

    struct EventListener
    {
        EventListener() = default;
        EventListener(std::function<void(std::any&)> callback, const int priority, const bool once) : callback(std::move(callback)), priority(priority), once(once) {};
        std::function<void(std::any&)> callback;
        /** Higher numbers run before lower numbers. */
        int priority{};
        /** If the event should only run once and then be removed. */
        bool once{};
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
     * @param callback The callback function to run when the event is emitted.
     * @param listener_name The name of the event listener, to be used when removing it. Passing an empty string leaves the callback unnamed.
     * @param priority A number that represents the order callbacks for the same event will be called. Higher numbers are called first, and 0 is the default.
     */
    template <typename EventType, typename Callable>
    requires std::invocable<Callable> || std::invocable<Callable, typename EventType::data>
    void on(Callable&& callback, const std::string& listener_name = "", int priority = 0)
    {
        std::function<void(std::any&)> callback_any;

        // not sure if necessary, I think it prevents a crash when passing a reference to a function
        Callable cb = std::forward<Callable>(callback);

        // If the callback doesn't have any params, then just call it
        if constexpr (std::is_invocable_v<Callable>)
        {
            callback_any = [cb](std::any&) {
                cb();
            };
        }
        // If the callback has params, make sure it matches the EventType::data type
        else if constexpr (std::is_invocable_v<Callable, typename EventType::data>)
        {
            callback_any = [cb](std::any& data) {
                cb(std::any_cast<typename EventType::data>(data));
            };
        }

        if (listener_name.empty())
        {
            this->event_listeners[std::type_index(typeid(EventType))].unnamed.emplace_back(callback_any, priority, false);
        }
        else
        {
            this->event_listeners[std::type_index(typeid(EventType))].named[listener_name] = EventListener{callback_any, priority, false};
        }
    }

    /** Runs a callback when an event is fired, using a reference as the type parameter. 
     * Callbacks that run after this (lower priority) will have the modified value.
     * @param callback The callback function to run when the event is emitted.
     * @param listener_name The name of the event listener, to be used when removing it. Passing an empty string leaves the callback unnamed.
     * @param priority A number that represents the order callbacks for the same event will be called. Higher numbers are called first, and 0 is the default.
     */
    template <typename EventType, typename Callable>
    requires std::invocable<Callable> || std::invocable<Callable, typename EventType::data>
    void on_ref(Callable&& callback, const std::string& listener_name = "", int priority = 0)
    {
        std::function<void(std::any&)> callback_any;

        Callable cb = std::forward<Callable>(callback);

        if constexpr (std::is_invocable_v<Callable>)
        {
            callback_any = [cb](std::any&) {
                cb();
            };
        }
        else if constexpr (std::is_invocable_v<Callable, typename EventType::data>)
        {
            callback_any = [cb](std::any& data) {
                cb(std::any_cast<typename EventType::data&>(data));
            };
        }

        if (listener_name.empty())
        {
            this->event_listeners[std::type_index(typeid(EventType))].unnamed.emplace_back(callback_any, priority, false);
        }
        else
        {
            this->event_listeners[std::type_index(typeid(EventType))].named[listener_name] = EventListener{callback_any, priority, false};
        }
    }

    /** A method to add a callback that will only run once after the event is emitted.
     * @param callback The callback function to run when the event is emitted.
     * @param priority A number that represents the order callbacks for the same event will be called. Higher numbers are called first, and 0 is the default.
     */
    template <typename EventType, typename Callable>
    requires std::invocable<Callable> || std::invocable<Callable, typename EventType::data>
    void once(Callable&& callback, int priority = 0)
    {

        std::function<void(std::any&)> callback_any;

        Callable cb = std::forward<Callable>(callback);

        if constexpr (std::is_invocable_v<Callable>)
        {
            callback_any = [cb](std::any&) {
                cb();
            };
        }
        else if constexpr (std::is_invocable_v<Callable, typename EventType::data>)
        {
            callback_any = [cb](std::any& data) {
                cb(std::any_cast<typename EventType::data>(data));
            };
        }

        this->event_listeners[std::type_index(typeid(EventType))].unnamed.emplace_back(callback_any, priority, true);
    }

    /** A method to add a callback that will only run once after the event is emitted.
     * Callbacks that run after this (lower priority) will have the modified value.
     * @param callback The callback function to run when the event is emitted.
     * @param priority A number that represents the order callbacks for the same event will be called. Higher numbers are called first, and 0 is the default.
     */
    template <typename EventType, typename Callable>
    requires std::invocable<Callable> || std::invocable<Callable, typename EventType::data>
    void once_ref(std::function<void(typename EventType::data&)> callback, int priority = 0)
    {
        std::function<void(std::any&)> callback_any;

        Callable cb = std::forward<Callable>(callback);

        if constexpr (std::is_invocable_v<Callable>)
        {
            callback_any = [cb](std::any&) {
                cb();
            };
        }
        else if constexpr (std::is_invocable_v<Callable, typename EventType::data>)
        {
            callback_any = [cb](std::any& data) {
                cb(std::any_cast<typename EventType::data&>(data));
            };
        }

        this->event_listeners[std::type_index(typeid(EventType))].unnamed.emplace_back(callback_any, priority, true);
    }

    /** Emits an event to all listeners of that event, with the specified data.
     * @param data If the EventType has a data field, then you must specify the data to emit. If you leave it out the default constructor for the type will be called. If there is not a data field then you can call this without parameters.
     */
    template <typename EventType>
    void emit(std::conditional_t<HasData<EventType>, typename EventType::data, std::monostate> data = {})
    {
        EventListenerTypes& listeners = this->event_listeners[std::type_index(typeid(EventType))];
        std::map<int, std::vector<std::function<void(std::any&)>>, std::greater<>> callbacks;

        // Collect all the callbacks into one map and sort them by priority

        for (auto it = listeners.named.begin(); it != listeners.named.end(); )
        {
            callbacks[it->second.priority].push_back(it->second.callback);
            if (it->second.once)
            {
                // once listeners cant current be named, but im leaving this here in case that changes
                it = listeners.named.erase(it);
            }
            else
            {
                ++it;
            }
        }

        for (auto it = listeners.unnamed.begin(); it != listeners.unnamed.end(); )
        {
            callbacks[it->priority].push_back(it->callback);
            if (it->once)
            {
                it = listeners.unnamed.erase(it);
            }
            else
            {
                ++it;
            }
        }

        std::any data_copy = data;

        for (auto& vec : callbacks)
        {
            for (const std::function<void(std::any&)>& callback : vec.second)
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
        if (this->event_listeners.contains(std::type_index(typeid(EventType))))
        {
            return this->event_listeners[std::type_index(typeid(EventType))].named.erase(listener_name);
        }
        return false;
    }
};
