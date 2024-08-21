#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"
#include <iostream>

class Ambush : public BattleStrategy {
public:
    void engage() override;
};

#endif /* AMBUSH_H */
