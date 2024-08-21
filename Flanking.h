#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"
#include <iostream>

class Flanking : public BattleStrategy {
public:
    void engage() override;
};

#endif /* FLANKING_H */
