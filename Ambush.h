#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy {
public:
    void engage() override;
    bool requiresStealth() const override;
};

#endif // AMBUSH_H
