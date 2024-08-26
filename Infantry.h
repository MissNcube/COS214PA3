#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;

class Infantry : public LegionUnit{
    private:
        BattleStrategy* strategy;

    public:
        Infantry();
        ~Infantry();
        Infantry(BattleStrategy* strat);
        void move() override;
        void attack() override;
};
#endif