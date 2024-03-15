#pragma once
#include <stddef.h>

class Tire{
public:
    enum class TireType
    {
        kWinter,
        kNormal,
    };
    Tire();
    Tire(size_t size, TireType type);
private:
    size_t size;
    TireType type;
};