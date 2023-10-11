using namespace std;
#include <iostream>
#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{


    Student student(name);

    student.addCourse("Science");
    student.addCourse("Math");
    student.addCourse("Social");

    student.listCourses();

    Professor professor("Dr.Teacher", "Room 101");
    professor.displayOfficeLocation();

    return 0;
}
