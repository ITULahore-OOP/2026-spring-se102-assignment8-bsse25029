#include "AccessCard.h"

string AccessCard::getCardID() 
{
    return cardID;
}

int AccessCard::getAccessLevel() 
{
    return accessLevel;
}

void AccessCard::displayCardInfo() 
{
    cout << "Card ID: " << cardID << ", Access Level: " << accessLevel << endl;
}