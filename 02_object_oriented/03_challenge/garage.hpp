#pragma once
#include <vector>
#include "car.hpp"

class Garage{
public:
    void addCar(Car * car);
    void  removeCar(Car* car);
    size_t getNumCars() const;
private:
    std::vector<Car *> cars;
};