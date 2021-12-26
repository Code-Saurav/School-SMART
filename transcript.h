#ifndef __TRANSCRIPT_H_
#define __TRANSCRIPT_H_

#include "student.h"
#include "section.h"


class Transcript{
    private:
    &Section _section;
    &Student _student;
    Grade _grade;

    public:
    Transcript(Student& student, Section& section);
    Transcript(std::istream& ist);
    void save(std::ostream& ost);
    void assign_grade(Grade grade);

    friend std::ostream& operator << (std::ostream& ost, const Transcript& transcrpit);
    
};



#endif


