#include "Ambush.h"
#include "LegionUnit.h"
#include <iostream>

void Ambush::engage()
{
    std::cout << "Engaging in ambush strategy. Executing surprise attack!" << std::endl;
}

bool Ambush::requiresStealth() const
{
    return true; // Ambush strategy typically requires stealth
}

void Ambush::executeMovement(LegionUnit *unit) 
{
    // Ambush movement logic
    std::cout << "Ambush movement executed." << std::endl;
}

void Ambush::executeAttack(LegionUnit *unit) 
{
    // Ambush attack logic
    std::cout << "Ambush attack executed." << std::endl;
}