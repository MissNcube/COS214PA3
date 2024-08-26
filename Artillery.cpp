#include "Artillery.h"
#include "LegionUnit.h"

Artillery::Artillery()
{
    cout << "Artillery created " << endl;
}
Artillery::Artillery(BattleStrategy *strat) : strategy(strat) {}

void Artillery::move()
{
    // Example behavior: Artillery might move into a strategic position before battle.
    strategy->executeMovement(this);
    std::cout << "Artillery moving into position according to strategy." << std::endl;
}

void Artillery::attack()
{
    // Example behavior: Artillery might bombard the enemy from a distance.
    strategy->executeAttack(this);
    std::cout << "Artillery bombarding the enemy according to strategy." << std::endl;
}