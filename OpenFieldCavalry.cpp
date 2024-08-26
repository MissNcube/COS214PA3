#include "OpenFieldCavalry.h"
#include "LegionUnit.h"

OpenFieldCavalry::OpenFieldCavalry()
{
    cout << "OpenField Cavalry created " << endl;
}
OpenFieldCavalry::~OpenFieldCavalry()
{
    cout << "OpenField Cavalry destroyed " << endl;
}
void OpenFieldCavalry::move()
{
    cout << "OpenField Cavalry is moving " << endl;
}
void OpenFieldCavalry::attack()
{
    cout << "OpenField Cavalry is attacking " << endl;
}

// needed to add more functionality
int OpenFieldCavalry::getHealth() const 
{
    // Return the health value specific to OpenFieldCavalry
    return 120;
}

int OpenFieldCavalry::getDamage() const 
{
    // Return the damage value specific to OpenFieldCavalry
    return 70; 
}

int OpenFieldCavalry::getDefense() const 
{
    // Return the defense value specific to OpenFieldCavalry
    return 40; 
}