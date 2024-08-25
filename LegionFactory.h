#ifndef LEGION_FACTORY_H
#define LEGION_FACTORY_H

#include "BattleStrategy.h"

class Infantry;
class Cavalry;
class Artillery;

class LegionFactory {
public:
    virtual Infantry* createInfantry(BattleStrategy* strategy) = 0;
    virtual Cavalry* createCavalry(BattleStrategy* strategy) = 0;
    virtual Artillery* createArtillery(BattleStrategy* strategy) = 0;
    virtual ~LegionFactory() = default;
};

#endif // LEGION_FACTORY_H
