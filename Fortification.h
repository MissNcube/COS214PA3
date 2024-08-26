#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"
#include "LegionUnit.h"

class Fortification : public BattleStrategy {
public:
    void engage() override;
    bool requiresStealth() const override;
    void executeMovement(LegionUnit* unit) override;
    void executeAttack(LegionUnit* unit) override;
};

#endif // FORTIFICATION_H
