#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
#include <iostream>
using namespace std;
#include "Student.h"
#include "Staff.h"

class TeachingAssistant : public Student, public Staff {
private:
    int workingHours;

public:
    TeachingAssistant(string name, int memberID, double cgpa,
                      double salary, AccessCard card, int workingHours)
    :UniversityMember(name, memberID), // Important for virtual base
    Student(name, memberID, cgpa),
    Staff(name, memberID, salary, card)
    {
        this->workingHours=workingHours;
    }

    void displayRole() override;

    // Method Overloading (Compile-time polymorphism)
    void gradeAssignment(int score);
    void gradeAssignment(string letterGrade);
};

#endif