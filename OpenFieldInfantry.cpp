#include "OpenFieldInfantry.h"

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