#include "tire.hpp"

    Tire::Tire() : Tire(0, TireType::kNormal){};
    Tire::Tire(size_t size, TireType type) : size(size), type(type){};