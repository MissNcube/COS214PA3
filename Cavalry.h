// #ifndef CAVALRY_H
// #define CAVALRY_H
// #include <iostream>
// using namespace std;

// #include <vector>
// #include "UnitComponent.h"
// #include "LegionUnit.h"
// #include "BattleStrategy.h"

// class Cavalry : public UnitComponent, public LegionUnit{
//     private:
//         BattleStrategy* strategy;
//     public:
//         Cavalry();
//         ~Cavalry();
//         Cavalry(BattleStrategy* strat);
//         void move()override;
//         void attack()override;
//         void displayUnitStats(string name)override;
// };
// #endif

#ifndef CAVALRY_H
#define CAVALRY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include "BattleStrategy.h"

class Cavalry : public UnitComponent, public LegionUnit {
private:
    BattleStrategy* strategy;

public:
    Cavalry();
    Cavalry(BattleStrategy* strat) : strategy(strat) {}

    void move() override {
        strategy->executeMovement(this);
    }

    void attack() override {
        strategy->executeAttack(this);
    }

    void displayUnitStats(const std::string& unitName) override {
        // Implement the display logic here
        (void)unitName;
    }
};

#endif // CAVALRY_H

