#include "teacher.h"

Teacher::Teacher(std::string name, std::string email)
    : Person(name, email), { }

Teacher::Teacher(std::istream& ist) : Person(ist) {
    ist >> _name;
    ist >> _email;
}

void save(std::ostream& ost){
    Person::save(ost);
}

std::string Teacher::full_info() const {
    std::string info = Person::full_info() + " - Students: ";
    std::string separator;
    for(auto s : _students) {
        info += separator + s->to_string();
        separator = ", ";
    }
    return info;
}