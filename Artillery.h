#ifndef ARTILLERY_H
#define ARTILLERY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;
class UnitComponent;

class Artillery : public LegionUnit{
    private:
        BattleStrategy* strategy;
    public:
        Artillery();
        ~Artillery();
        Artillery(BattleStrategy* strat);
        virtual void move() override;
        virtual void attack() override;
};
#endif