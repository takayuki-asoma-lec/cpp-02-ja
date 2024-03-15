// コードを入力してください
#pragma once
#include <string>


class Driver{
public:
    Driver(const std::string &name, const int age);
    void printName()const;
    std::string name;
    int age;
};