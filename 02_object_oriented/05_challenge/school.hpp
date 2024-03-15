#pragma once
#include "teacher.hpp"
#include "student.hpp"

class Teacher;
class Student;

class School{
public:
    void enrollStudent(std::shared_ptr<Student> student);
    void hireTeacher(std::shared_ptr<Teacher> teacher);
    void assignStudent(std::shared_ptr<Student> student, std::shared_ptr<Teacher> teacher);

private:
    std::vector<std::shared_ptr<Student>> students;
    std::vector<std::shared_ptr<Teacher>> teachers;
};