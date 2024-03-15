#include "school.hpp"
#include "teacher.hpp"
#include "student.hpp"

int main(){
    School s{};
    auto st = std::make_shared<Student>();
    auto te = std::make_shared<Teacher>();
    s.enrollStudent(st);
    s.hireTeacher(te);
    s.assignStudent(st, te);
    te->printNumStudent();
}