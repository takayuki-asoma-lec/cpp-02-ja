#pragma once
#include <string>
#include <vector>
#include "person.h"

class Team
{
public:
    Team(){};
    void add_member(const Person &person)
    {
        member_.push_back(person);
    }
    void print_member()const {
        for(const auto person : member_){
            person.print_name();
        }
    }

private:
    std::vector<Person> member_;
};