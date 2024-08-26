#include "Infantry.h"

Infantry::Infantry(BattleStrategy *strat) : strategy(strat) {}

void Infantry::move() 
{
    // Example behavior: Infantry might move slowly but in a tightly coordinated formation.
    strategy->executeMovement(this); // Use the strategy to determine movement behavior
    std::cout << "Infantry moving according to strategy." << std::endl;
}

void Infantry::attack()
{
    // Example behavior: Infantry might perform a frontal assault or defensive stand.
    strategy->executeAttack(this); // Use the strategy to determine attack behavior
    std::cout << "Infantry attacking according to strategy." << std::endl;
}