#include "OpenFieldArtillery.h"
#include "LegionUnit.h"

OpenFieldArtillery::OpenFieldArtillery(BattleStrategy* strat)
    : Artillery(strat) {
    cout << "OpenField Artillery created " << endl;
}
OpenFieldArtillery::~OpenFieldArtillery()
{
    cout << "OpenField Artillery destroyed " << endl;
}
void OpenFieldArtillery::move()
{
    cout << "OpenField Artillery is moving " << endl;
}
void OpenFieldArtillery::attack()
{
    cout << "OpenField Artillery is attacking " << endl;
}

// needed to add some functionality
int OpenFieldArtillery::getHealth() const
{
    // Return the health value specific to OpenFieldArtillery
    return 80; // example value
}
 
int OpenFieldArtillery::getDamage() const 
{
    // Return the damage value specific to OpenFieldArtillery
    return 90; // example value
}

int OpenFieldArtillery::getDefense() const 
{
    // Return the defense value specific to OpenFieldArtillery
    return 20; // example value
}
void OpenFieldArtillery::displayUnitStats(const std::string& unitName) {
    std::cout << "Unit Stats for : " << unitName << std::endl;
    // Display various unit statistics
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
}

void OpenFieldArtillery::fight() {
    // Implementation
}

void OpenFieldArtillery::add(UnitComponent* component) {
    // Implementation
    (void)component;
}

void OpenFieldArtillery::remove(UnitComponent* component) {
    // Implementation
    (void)component;
}
