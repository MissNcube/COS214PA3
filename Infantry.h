// #ifndef INFANTRY_H
// #define INFANTRY_H
// #include <iostream>
// #include "LegionUnit.h"
// #include "UnitComponent.h"
// #include "BattleStrategy.h" // Include the full definition
// using namespace std;

// //class LegionUnit;

// class Infantry : public UnitComponent, public LegionUnit{
//     private:
//         BattleStrategy* strategy;

//     public:
//         Infantry();
//         ~Infantry();
//         Infantry(BattleStrategy* strat);
//         void move() override;
//         void attack()override;
//         void displayUnitStats(string unitName)override;
// };
// #endif

#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include "BattleStrategy.h"

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