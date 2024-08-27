#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"
#include "LegionUnit.h"

class LegionUnit;

class Flanking : public BattleStrategy {
public:
    void engage();
    bool requiresStealth() const;
    void executeMovement(LegionUnit* unit);
    void executeAttack(LegionUnit* unit);
};

#endif // FLANKING_H
