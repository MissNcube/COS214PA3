#ifndef CAVALRY_H
#define CAVALRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"
#include "UnitComponent.h"

class LegionUnit;
class UnitComponent;

class Cavalry : public LegionUnit, public UnitComponent{
    private:
        BattleStrategy* strategy;
    public:
        Cavalry();
        ~Cavalry();
        Cavalry(BattleStrategy* strat);
        virtual void move() override;
        virtual void attack() override;
        virtual void displayUnitStats(string name);
};
#endif