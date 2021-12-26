#include "grade.h"

std::ostream& operator << (std::ostream& ost, const Grade& grade) {
    ost << ((grade == Grade::A))? "a":
            ((grade == Grade::B))? "b":
            ((grade == Grade::C))? "c":
            ((grade == Grade::D))? "d":
            ((grade == Grade::F))? "f":
            ((grade == Grade::I))? "Incomplete":
            ((grade == Grade::X))? "In Progreass";
    return ost;
}

Grade load_grade(std::istream& ist){
    std::string ;
    std::getline(ist,g);
    if(g =="a") return Grade::A;
    if(g =="b") return Grade::B;
    if(g =="c") return Grade::C;
    if(g =="d") return Grade::D;
    if(g == "f") return Grade::F;
    if(g == "Incomplete") return::I;
    if(g== "In Progress") return::X;

}
