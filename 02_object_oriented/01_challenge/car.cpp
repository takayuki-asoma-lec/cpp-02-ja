#include "car.hpp"

#include <iostream>
#include <sstream>
#include "logger.hpp"

Car::Car(std::string make, std::string model, int year, double price)
    : make(make), model(model), year(year), price(price) {
    if (price < 0) {
        std::cerr << "Negative Car Price!" << "\n";
    }
}

void Car::setPrice(double price) {
    std::ostringstream oss;
    oss << "Changing price from " << this->price << " to " << price << "\n";
    Logger::logMessage(oss.str());
    this->price = price;
    return;
}

std::string Car::getMake() const { return make; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }

void Car::displayInfo() const {
    std::cout << year << " " << make << " " << model << " - $" << price << "\n";
}

