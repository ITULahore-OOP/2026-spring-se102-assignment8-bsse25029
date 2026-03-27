#include <iostream>
using namespace std;

#include "AccessCard.h"
#include "Student.h"
#include "Staff.h"
#include "TeachingAssistant.h"
#include "Department.h"
#include "TutoringSession.h"

int main() 
{

    // ----------- INPUT SECTION -----------

    string name;
    int id;

    // Student input
    cout << "Enter Student Name: " << endl;
    cin >> name;
    cout << "Enter Student ID: " << endl;
    cin >> id;

    double cgpa;
    cout << "Enter CGPA: " << endl;
    cin >> cgpa;

    Student student(name, id, cgpa);

    // Staff input
    string staffName;
    int staffID;
    double salary;

    cout << "Enter Staff Name: " << endl;
    cin >> staffName;
    cout << "Enter Staff ID: " << endl;
    cin >> staffID;
    cout << "Enter Salary: " << endl;
    cin >> salary;

    string cardID;
    int accessLevel;

    cout << "Enter Access Card ID: " << endl;
    cin >> cardID;
    cout << "Enter Access Level: " << endl;
    cin >> accessLevel;

    AccessCard card(cardID, accessLevel);

    Staff staff(staffName, staffID, salary, card);

    // Teaching Assistant input
    string taName;
    int taID;
    double taCGPA, taSalary;
    int hours;

    cout << "Enter TA Name: " << endl;
    cin >> taName;
    cout << "Enter TA ID: " << endl;
    cin >> taID;
    cout << "Enter TA CGPA: " << endl;
    cin >> taCGPA;
    cout << "Enter TA Salary: " << endl;
    cin >> taSalary;
    cout << "Enter Working Hours: " << endl;
    cin >> hours;

    TeachingAssistant ta(taName, taID, taCGPA, taSalary, card, hours);

    // ----------- POLYMORPHISM -----------

    Department dept("Computer Science");

    dept.addMember(&student);
    dept.addMember(&staff);
    dept.addMember(&ta);

    cout << "--- Display Roles (Run-Time Polymorphism) ---" << endl;
    dept.displayAllRoles();

    // ----------- COMPILE-TIME POLYMORPHISM -----------

    cout << "--- Grade Assignment ---" << endl;
    ta.gradeAssignment(90);
    ta.gradeAssignment("A");

    // ----------- OPERATOR OVERLOADING -----------

    TutoringSession s1(1, 40.0, &ta, &student);
    TutoringSession s2(2, 35.0, &ta, &student);

    cout << "Session 1 Duration: " << s1.getDuration() << endl;
    cout << "Session 2 Duration: " << s2.getDuration() << endl;

    if (s1 > s2) 
    {
        cout << "Session 1 is longer" << endl;
    } 
    
    else 
    {
        cout << "Session 2 is longer" << endl;
    }

    TutoringSession merged = s1 + s2;
    cout << "Merged Session Duration: " << merged.getDuration() << endl;

    return 0;
}