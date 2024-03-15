// コードを入力してください
#include <iostream>
#include "car.hpp"

int main(){
    Driver d("A", 20);
    Car c("Toyota", "Prius", 2020, 1000000.0);
    c.setDriver(&d);
    c.getDriver()->printName();
}
