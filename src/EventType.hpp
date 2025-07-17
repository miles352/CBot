#pragma once
#include <any>

template <typename T>
class EventType
{
private:
    bool cancelled = false;
public:
    void cancel() { cancelled = true; }
    T data;
};


// all inherit from eventtype or some shit
// need way to make data type safe