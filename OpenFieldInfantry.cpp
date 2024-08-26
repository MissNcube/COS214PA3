#include "OpenFieldInfantry.h"
#include "LegionUnit.h"

OpenFieldInfantry::OpenFieldInfantry()
{
    cout << "OpenField Infantry created "<< endl;
}
OpenFieldInfantry::~OpenFieldInfantry()
{
    cout << "OpenField Infantry destroyed "<< endl;
}
void OpenFieldInfantry::move()
{
    cout << "OpenField Infantry is moving through the field " << endl;
}
void OpenFieldInfantry::attack()
{
    cout << "OpenField Infantry is attacking from the field " << endl;
}

// needed to add some of the functions to add some needed functionality
int OpenFieldInfantry::getHealth() const {
    return 100;  // Example value, replace with your logic
}

int OpenFieldInfantry::getDamage() const {
    return 50;  // Example value, replace with your logic
}

int OpenFieldInfantry::getDefense() const {
    return 25;  // Example value, replace with your logic
}
