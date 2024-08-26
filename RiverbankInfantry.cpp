#include "RiverbankInfantry.h"
#include "LegionUnit.h"

RiverbankInfantry::RiverbankInfantry()
{
    cout << "Riverbank Infantry created "<< endl;
}
RiverbankInfantry::~RiverbankInfantry()
{
    cout << "Riverbank Infantry destroyed "<< endl;
}
void RiverbankInfantry::move()
{
    cout << "Riverbank Infantry is moving through the river " << endl;
}
void RiverbankInfantry::attack()
{
    cout << "Riverbank Infantry is attacking from the river " << endl;
}

// needed to add some functionality
int RiverbankInfantry::getHealth() const
{
    // Return the health value specific to RiverbankInfantry
    return 100; 
}

int RiverbankInfantry::getDamage() const 
{
    // Return the damage value specific to RiverbankInfantry
    return 50; 
}

int RiverbankInfantry::getDefense() const 
{
    // Return the defense value specific to RiverbankInfantry
    return 25;
}
void RiverbankInfantry::displayUnitStats(string name) {
    std::cout << "Unit Stats for : " << name << std::endl;
    // Display various unit statistics
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
}