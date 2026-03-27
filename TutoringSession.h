#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include <iostream>
using namespace std;
#include "TeachingAssistant.h"
#include "Student.h"

class TutoringSession {
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;

public:
    TutoringSession(int sessionID, double durationMinutes,
                    TeachingAssistant* ta, Student* student)
    {
        this->sessionID=sessionID;
        this->durationMinutes=durationMinutes;
        this->ta=ta;
        this->student=student;
    }

    double getDuration();

    void displaySession();

    // Member operator overloading
    TutoringSession operator+(const TutoringSession& other);

    // Friend for non-member operator
    friend bool operator>(TutoringSession s1, TutoringSession s2);
};

#endif