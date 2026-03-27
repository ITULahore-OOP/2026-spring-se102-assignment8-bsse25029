#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <string>
using namespace std;

class UniversityMember {
protected:
    string name;
    int memberID;

public:
    // Constructor
    UniversityMember(string name, int memberID)
    {
        this->name=name;
        this->memberID=memberID;
    }

    virtual ~UniversityMember() {}

    // Getters
    string getName();
    int getMemberID();

    virtual void displayRole() = 0; // Pure virtual
};

#endif