#include "RiverbankCavalry.h"
#include "LegionUnit.h"
#include "BattleStrategy.h"
#include "Cavalry.h"

RiverbankCavalry::RiverbankCavalry(BattleStrategy* strat)
    : Cavalry(strat)
{
    cout << "Riverbank Cavalry created "<< endl;
}
RiverbankCavalry::~RiverbankCavalry()
{
    cout << "Riverbank Cavalry destroyed "<< endl;
}
void RiverbankCavalry::move()
{
    cout << "Riverbank Cavalry is moving " << endl;
}
void RiverbankCavalry::attack()
{
    cout << "Riverbank Cavalry is attacking " << endl;
}

// needed to add some functionality
int RiverbankCavalry::getHealth() const
{
    // Return the health value specific to RiverbankCavalry
    return 120; 
}

int RiverbankCavalry::getDamage() const 
{
    // Return the damage value specific to RiverbankCavalry
    return 70; 
}

int RiverbankCavalry::getDefense() const 
{
    // Return the defense value specific to RiverbankCavalry
    return 40;
}
void RiverbankCavalry::displayUnitStats(string name) {
    std::cout << "Unit Stats for : " << name << std::endl;
    // Display various unit statistics
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
}

void RiverbankCavalry::fight() {
    // Implementation of fight
}

void RiverbankCavalry::add(UnitComponent* component) {
    // Implementation of add
}

void RiverbankCavalry::remove(UnitComponent* component) {
    // Implementation of remove
}