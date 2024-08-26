#ifndef ARTILLERY_H
#define ARTILLERY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"
#include "UnitComponent.h"

class LegionUnit;
class UnitComponent;

class Artillery : public LegionUnit, public UnitComponent{
    private:
        BattleStrategy* strategy;
    public:
        Artillery();
        ~Artillery();
        Artillery(BattleStrategy* strat);
        virtual void move() override;
        virtual void attack() override;
        virtual void displayUnitStats(string name);
};
#endif