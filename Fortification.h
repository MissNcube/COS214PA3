#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"

class Fortification : public BattleStrategy {
public:
    void engage() override;
    bool requiresStealth() const override;
};

#endif // FORTIFICATION_H
