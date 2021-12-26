 #include "transcript.h"


/* Transcript is an association class (see Lecture 7) - that is, it associates two classes, in this case, a Student
with a specific Section of a course. It also carries the Grade the student earned for the course (an 'X' means
that section is still in progress).
You'll add a Mainwin::transcripts vector in which to store all Transcript instances. Enable the user to create
Transcript objects, store them in a vector of pointers in Mainwin, and provide a way to view all Transcript
objects in the main window. Ensure they are saved and opened with the rest of the data.*/

Transcript::Transcript(Student& student,Section& section): _student{student}, _section{section}, _grade{grade} {}

Transcript(std::istream& ist){

}

    void save(std::ostream& ost)
    {
        std::getline(ist, _grade);
        std::getline(ist, _section);
    }

    void assign_grade(Grade grade);
    {
        //set the grade
    }

    friend std::ostream& operator << (std::ostream& ost, const Transcript& transcrpit){
    }