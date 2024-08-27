#include "RiverbankArtillery.h"
#include "BattleStrategy.h"
#include "Artillery.h"
#include "LegionUnit.h"

RiverbankArtillery::RiverbankArtillery(BattleStrategy* strat)
    : Artillery(strat)
{
    cout << "Riverbank Artillery created "<< endl;
}
RiverbankArtillery::~RiverbankArtillery()
{
    cout << "Riverbank Artillery destroyed "<< endl;
}
void RiverbankArtillery::move()
{
    cout << "Riverbank Artillery is moving " << endl;
}
void RiverbankArtillery::attack()
{
    cout << "Riverbank Artillery is attacking " << endl;
} 

// needed to add some functionality
int RiverbankArtillery::getHealth() const
{
    // Return the health value specific to RiverbankArtillery
    return 80; 
}

int RiverbankArtillery::getDamage() const 
{
    // Return the damage value specific to RiverbankArtillery
    return 90; 
}

int RiverbankArtillery::getDefense() const 
{
    // Return the defense value specific to RiverbankArtillery
    return 20;
}

void RiverbankArtillery::displayUnitStats(string name) {
    std::cout << "Unit Stats for : " << name << std::endl;
    // Display various unit statistics
    std::cout << "Health: " << getHealth() << std::endl;
    std::cout << "Damage: " << getDamage() << std::endl;
    std::cout << "Defense: " << getDefense() << std::endl;
}

void RiverbankArtillery::fight() {
    // Implementation of fight
}

void RiverbankArtillery::add(UnitComponent* component) {
    // Implementation of add
}

void RiverbankArtillery::remove(UnitComponent* component) {
    // Implementation of remove
}