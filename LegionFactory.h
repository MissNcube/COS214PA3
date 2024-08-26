#ifndef LEGION_FACTORY_H
#define LEGION_FACTORY_H

#include "BattleStrategy.h"
#include <iostream>
using namespace std;

class Infantry;
class Cavalry;
class Artillery;

class LegionFactory {
public:
    LegionFactory();
    virtual ~LegionFactory();
    virtual Infantry* createInfantry(BattleStrategy* strategy) = 0;
    virtual Cavalry* createCavalry(BattleStrategy* strategy) = 0;
    virtual Artillery* createArtillery(BattleStrategy* strategy) = 0;
};

#endif // LEGION_FACTORY_H
