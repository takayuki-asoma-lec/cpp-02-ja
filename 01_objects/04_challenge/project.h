#pragma once
#include <string>
#include <vector>
#include "person.h"
#include "team.h"

class Project
{
public:
    Project() : member(){};
    void add_team_member(const Person &person)
    {
        member_.add_member(person);
    };
    void print_team_member() const
    {
        member_.print_member();
    }

private:
    Team member_;
};