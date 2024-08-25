#ifndef FLANKING_H
#define FLANKING_H

#include "BattleStrategy.h"

class Flanking : public BattleStrategy {
public:
    void engage() override;
    bool requiresStealth() const override;
};

#endif // FLANKING_H
