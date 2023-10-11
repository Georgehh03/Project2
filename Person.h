#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
    public:
        Person(const string& name) : name(name) {}

        string getName() const
        {
            return name;
        }

        virtual ~Person();

    protected:

    private: string name;

};

#endif // PERSON_H

