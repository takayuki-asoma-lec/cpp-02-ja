#include "teacher.hpp"

void Teacher::assignStudent(std::shared_ptr<Student> student){
    students.push_back(std::move(student));
}