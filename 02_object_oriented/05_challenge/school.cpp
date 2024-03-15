#include "school.hpp"

void School::enrollStudent(std::shared_ptr<Student> student){
    if(!student)
        return;
    students.push_back(std::move(student));
}
void School::hireTeacher(std::shared_ptr<Teacher> teacher){
    if(!teacher)
        return;
    teachers.push_back(std::move(teacher));
}
void School::assignStudent(std::shared_ptr<Student> student, 
                            std::shared_ptr<Teacher> teacher)
{
    if(!student || !teacher)
        return;
    if (std::find(std::begin(students), std::end(students), student) == std::end(students))
        return;
    if(std::find(std::begin(teachers), std::end(teachers), teacher)== std::end(teachers))
        return;
    teacher->assignStudent(student);
}
