#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student: public Person
    {
        public:
        Student(const string& name) : Person(name) {}

        void addCourse(const string& course)
        {
            if (courses.size() < 10)
            {
                courses.push_back(course);
            }

            else
            {
                cout << "Maximum amount of courses exceeded for " << getName() << endl;
            }
        }

    void listCourses()
        {
            cout << getName() << "'s Courses:" << endl;

            for (const course : courses)
                {
                    cout << "- " << course << endl;
                }
        }
    {






    public:
        Student();
        virtual ~Student();

    protected:

    private:
};

#endif // STUDENT_H
