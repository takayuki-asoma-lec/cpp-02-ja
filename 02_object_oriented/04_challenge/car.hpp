#pragma once
#include "tire.hpp"
#include <vector>

class Car{
public:
    Car(){
        tires.resize(4);
    }

private:
    std::vector<Tire> tires;
};
