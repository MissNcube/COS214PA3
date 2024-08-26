#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"
#include "LegionUnit.h"

class Ambush : public BattleStrategy {
public:
    void engage() override;
    bool requiresStealth() const override;
    void executeMovement(LegionUnit* unit) override;
    void executeAttack(LegionUnit* unit) override;
};

#endif // AMBUSH_H
