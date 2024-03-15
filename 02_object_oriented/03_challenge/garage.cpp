#include "garage.hpp"
#include "car.hpp"
#include <algorithm>

void Garage::addCar(Car * car){
    cars.push_back(car);
}
void  Garage::removeCar(Car* car_in){
    const auto new_end_itr = std::remove_if(std::begin(cars), std::end(cars), [car_in](Car *car)
                                            { return car == car_in; });
    cars.erase(new_end_itr, std::end(cars));
}
size_t Garage::getNumCars()const{
    return cars.size();
}