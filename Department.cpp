#include "Department.h"

void Department::addMember(UniversityMember* member) 
{
    if (memberCount < 50) 
    {
        members[memberCount++] = member;
    }
}

// Demonstrates runtime polymorphism
void Department::displayAllRoles() 
{
    for (int i = 0; i < memberCount; i++) 
    {
        members[i]->displayRole(); // Calls correct overridden function
    }
}