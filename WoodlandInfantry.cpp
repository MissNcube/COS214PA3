#include "WoodlandInfantry.h"
#include "LegionUnit.h"

WoodlandInfantry::WoodlandInfantry()
{
    cout << "Woodland Infantry created "<< endl;
}
WoodlandInfantry::~WoodlandInfantry()
{
    cout << "Woodland Infantry destroyed "<< endl;
}
void WoodlandInfantry::move()
{
    cout << "Woodland Infantry is moving through the forest " << endl;
}
void WoodlandInfantry::attack()
{
    cout << "Woodland Infantry is attacking from the trees " << endl;
}

// needed to add some functionality
int WoodlandInfantry::getHealth() const
{
    // Return the health value specific to WoodlandInfantry
    return 100; 
}

int WoodlandInfantry::getDamage() const 
{
    // Return the damage value specific to WoodlandInfantry
    return 50; 
}

int WoodlandInfantry::getDefense() const 
{
    // Return the defense value specific to WoodlandInfantry
    return 25;
}
void WoodlandInfantry::displayUnitStats(string name) {
    std::cout << "Unit Stats for : " << name << std::endl;
    // Display various unit statistics
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
}