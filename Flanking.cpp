#include "Flanking.h"
#include "LegionUnit.h"
#include <iostream>
using namespace std;

void Flanking::engage()
{
    std::cout << "Engaging in Flanking strategy. Attack fromm the sides & rear!" << std::endl;
}

bool Flanking::requiresStealth() const
{
    return true; // Flanking might require stealth
}

void Flanking::executeMovement(LegionUnit *unit) 
{
    // Flanking movement logic
    (void)unit;
    std::cout << "Flanking movement executed." << std::endl;
}

void Flanking::executeAttack(LegionUnit *unit) 
{
    // Flanking attack logic
    (void)unit;
    std::cout << "Flanking attack executed." << std::endl;
}
