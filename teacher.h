#ifndef __TEACHER_H_
#define __TEACHER_H_
#include "person.h"
#include <vector>
#include <map>

class Student;

class Teacher: public Person {
    public:

    using Person::Person;
    Teacher(std::istream& ist);
    void save(std::ostream& ost) override;
    std::string full_info() const override;


    protected:
    std::vector<Teacher*> _teacher;
};



#endif