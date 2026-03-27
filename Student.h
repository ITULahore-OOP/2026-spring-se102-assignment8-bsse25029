#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "UniversityMember.h"
using namespace std;

class Student : virtual public UniversityMember {
private:
    double cgpa;

public:
    // Constructor
    Student(string name, int memberID, double cgpa):UniversityMember(name, memberID)
    {
        this->cgpa=cgpa;
    }

    // Getter
    double getCGPA();

    // For updating
    void updateCGPA(double newCGPA);

    // For displaying
    void displayRole() override;
};

#endif