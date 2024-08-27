#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"
#include "LegionUnit.h"

class LegionUnit;

class Fortification : public BattleStrategy {
public:
    void engage();
    bool requiresStealth() const;
    void executeMovement(LegionUnit* unit);
    void executeAttack(LegionUnit* unit);
};

#endif // FORTIFICATION_H
