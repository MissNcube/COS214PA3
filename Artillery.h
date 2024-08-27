// #ifndef ARTILLERY_H
// #define ARTILLERY_H
// #include <iostream>
// #include "BattleStrategy.h"
// #include "LegionUnit.h"
// #include "UnitComponent.h"
// using namespace std;

// class BattleStrategy;

// class Artillery : public UnitComponent, public LegionUnit{
//     private:
//         BattleStrategy* strategy;
//     public:
//         Artillery();
//         ~Artillery();
//         Artillery(BattleStrategy* strat);
//         void move() override;
//         void displayUnitStats(string name)override;
// };
// #endif

#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include "BattleStrategy.h"

class Artillery : public UnitComponent, public LegionUnit {
private:
    BattleStrategy* strategy;

public:
    Artillery();
    Artillery(BattleStrategy* strat) : strategy(strat) {}

    void move() override {
        strategy->executeMovement(this);
    }

    void attack() override {
        strategy->executeAttack(this);
    }

    virtual void displayUnitStats(const std::string& unitName) override {
        // Implement the display logic here
        (void)unitName;
    }
};

#endif // ARTILLERY_H
