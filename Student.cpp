#include "Student.h"

double Student::getCGPA() 
{
    return cgpa;
}

void Student::updateCGPA(double newCGPA) 
{
    cgpa = newCGPA;
}

void Student::displayRole() 
{
    cout << "Role: Student" << endl;
}