#include "TutoringSession.h"

double TutoringSession::getDuration() 
{
    return durationMinutes;
}

void TutoringSession::displaySession() 
{
    cout << "Session ID: " << sessionID
         << ", Duration: " << durationMinutes << " mins" << endl;
}

// Merge sessions
TutoringSession TutoringSession::operator+(const TutoringSession& other) 
{
    return TutoringSession(0, this->durationMinutes + other.durationMinutes, ta, student);
}

// Compare sessions
bool operator>(TutoringSession s1, TutoringSession s2) 
{
    return s1.durationMinutes > s2.durationMinutes;
}