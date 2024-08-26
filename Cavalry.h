#ifndef CAVALRY_H
#define CAVALRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;
class UnitComponent;

class Cavalry : public LegionUnit{
    private:
        BattleStrategy* strategy;
    public:
        Cavalry();
        ~Cavalry();
        Cavalry(BattleStrategy* strat);
        virtual void move() override;
        virtual void attack() override;
};
#endif