#include "Fortification.h"
#include "LegionUnit.h"
#include <iostream>

void Fortification::engage()
{
    std::cout << "Engaging in fortification strategy. Strengthening defenses!" << std::endl;
}

bool Fortification::requiresStealth() const
{
    return false; // Fortification does not require stealth
}

void Fortification::executeMovement(LegionUnit *unit) 
{
    // Fortification movement logic
    (void)unit;
    std::cout << "Fortification movement executed." << std::endl;
}

void Fortification::executeAttack(LegionUnit *unit) 
{
    // Fortification attack logic
    (void)unit;
    std::cout << "Fortification attack executed." << std::endl;
}