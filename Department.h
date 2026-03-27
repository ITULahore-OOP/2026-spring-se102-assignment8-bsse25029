#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include "UniversityMember.h"
using namespace std;

class Department {
private:
    string departmentName;
    UniversityMember* members[50];
    int memberCount;

public:
    Department(string departmentName)
    {
        this->departmentName=departmentName;
        memberCount=0;
    }

    void addMember(UniversityMember* member);
    void displayAllRoles();
};

#endif