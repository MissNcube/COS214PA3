#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"
#include "UnitComponent.h"

class LegionUnit;
class UnitComponent;

class Infantry : public LegionUnit, public UnitComponent{
    private:
        BattleStrategy* strategy;

    public:
        Infantry();
        ~Infantry();
        Infantry(BattleStrategy* strat);
        void move() override;
        void attack() override;
        virtual void displayUnitStats(string unitName);
};
#endif