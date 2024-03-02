#pragma once
#include <string>
#include <iostream>

class Person{
public:
    Person(const std::string &name) : name_(name){};
    Person(std::string &&name) : name_(std::move(name)){};
    void print_name()const {
        std::cout << name_ << std::endl;
    }

private:
    std::string name_{};
};