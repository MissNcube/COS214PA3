#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"
#include "LegionUnit.h"

class Flanking : public BattleStrategy {
public:
    void engage() override;
    bool requiresStealth() const override;
    void executeMovement(LegionUnit* unit) override;
    void executeAttack(LegionUnit* unit) override;
};

#endif // FLANKING_H
