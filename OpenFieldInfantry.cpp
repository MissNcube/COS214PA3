#include "OpenFieldInfantry.h"
#include "LegionUnit.h"

OpenFieldInfantry::OpenFieldInfantry(BattleStrategy* strat)
    : Infantry(strat)
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
void OpenFieldInfantry::displayUnitStats(string name) {
    std::cout << "Unit Stats for : " << name << std::endl;
    // Display various unit statistics
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
}

// new functions
void OpenFieldInfantry::fight() {
    // Provide the actual fight logic here
}

void OpenFieldInfantry::add(UnitComponent* component) {
    // Provide the logic to add a component here, if needed
}

void OpenFieldInfantry::remove(UnitComponent* component) {
    // Provide the logic to remove a component here, if needed
}
