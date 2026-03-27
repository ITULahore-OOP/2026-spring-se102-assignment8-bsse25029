#include "Staff.h"

Staff::Staff(string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID),
    salary(salary),
    card(card) {}

double Staff::getSalary() 
{
    return salary;
}

void Staff::displayRole() 
{
    cout << "Role: Staff" << endl;
}

void Staff::displayCard() 
{
    card.displayCardInfo();
}