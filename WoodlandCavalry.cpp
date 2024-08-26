#include "WoodlandCavalry.h"
#include "LegionUnit.h"

WoodlandCavalry::WoodlandCavalry()
{
    cout << "Woodland Cavalry created "<< endl;
}
WoodlandCavalry::~WoodlandCavalry()
{
    cout << "Woodland Cavalry destroyed "<< endl;
}
void WoodlandCavalry::move()
{
    cout << "Woodland Cavalry is moving " << endl;
}
void WoodlandCavalry::attack()
{
    cout << "Woodland Cavalry is attacking " << endl;
}

// needed to add some functionality
int WoodlandCavalry::getHealth() const
{
    // Return the health value specific to WoodlandCavalry
    return 120; 
}

int WoodlandCavalry::getDamage() const 
{
    // Return the damage value specific to WoodlandCavalry
    return 70; 
}

int WoodlandCavalry::getDefense() const 
{
    // Return the defense value specific to WoodlandCavalry
    return 40;
}

void WoodlandCavalry::displayUnitStats(string name) {
    std::cout << "Unit Stats for : " << name << std::endl;
    // Display various unit statistics
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
}