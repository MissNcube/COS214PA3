#ifndef FORTIFICATION_H
#define FORTIFICATION_H

#include "BattleStrategy.h"
#include <iostream>

class Fortification : public BattleStrategy {
public:
    void engage() override;
};

#endif /* FORTIFICATION_H */
