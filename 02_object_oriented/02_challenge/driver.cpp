// コードを入力してください
#include "driver.hpp"
#include <iostream>
Driver::Driver(const std::string &name, const int age) : name{name}, age(age){};
void Driver::printName()const {
    std::cout << name << std::endl;
}
