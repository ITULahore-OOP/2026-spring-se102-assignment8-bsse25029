#include "TeachingAssistant.h"

void TeachingAssistant::displayRole() 
{
    cout << "Role: Teaching Assistant" << endl;
}

void TeachingAssistant::gradeAssignment(int score) 
{
    cout << "Grading using numeric score: " << score << "/100" << endl;
}

void TeachingAssistant::gradeAssignment(string letterGrade) 
{
    cout << "Grading using letter grade: " << letterGrade << endl;
}