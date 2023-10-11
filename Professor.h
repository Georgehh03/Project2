#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Person.h"

class Professor : public Person
{
    public:
        Professor(const string& name, const string& officeLocation)
        : Person(name), officeLocation(officeLocation) {}

    void displayOfficeLocation()
        {
            cout << getName() << "'s Office Location: " << officeLocation << endl;
        }


        virtual ~Professor();

    protected:

    private:
        string officeLocation;
}

#endif // PROFESSOR_H
