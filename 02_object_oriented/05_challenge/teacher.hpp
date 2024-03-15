#pragma once
#include <vector>
#include <memory>
#include <iostream>
#include "student.hpp"

class Teacher{
public:
    void assignStudent(std::shared_ptr<Student> student);
    void printNumStudent() const {
        std::cout << students.size() << std::endl;
    };

private:
    std::vector<std::shared_ptr<Student>> students;
};