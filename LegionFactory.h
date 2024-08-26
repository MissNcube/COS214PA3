#ifndef LEGION_FACTORY_H
#define LEGION_FACTORY_H

#include "BattleStrategy.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"

class Infantry;
class Cavalry;
class Artillery;

class LegionFactory {
public:
    virtual LegionUnit* createInfantry() = 0;
    virtual LegionUnit* createCavalry() = 0;
    virtual LegionUnit* createArtillery() = 0;
    virtual ~LegionFactory() = default;
};

#endif // LEGION_FACTORY_H
