// // #ifndef INFANTRY_H
// // #define INFANTRY_H
// // #include <iostream>
// // #include "LegionUnit.h"
// // #include "UnitComponent.h"
// // #include "BattleStrategy.h" // Include the full definition
// // using namespace std;

// // //class LegionUnit;

// // class Infantry : public UnitComponent, public LegionUnit{
// //     private:
// //         BattleStrategy* strategy;

// //     public:
// //         Infantry();
// //         ~Infantry();
// //         Infantry(BattleStrategy* strat);
// //         void move() override;
// //         void attack()override;
// //         void displayUnitStats(string unitName)override;
// // };
// // #endif

// #ifndef INFANTRY_H
// #define INFANTRY_H

// #include "UnitComponent.h"
// #include "LegionUnit.h"
// #include "BattleStrategy.h"

// class LegionUnit;
// class UnitComponent;

// class Infantry : public LegionUnit, public UnitComponent{
//     private:
//         BattleStrategy* strategy;

//     public:
//         Infantry();
//         ~Infantry();
//         Infantry(BattleStrategy* strat);
//         void move() override;
//         void attack() override;
//         virtual void displayUnitStats(string unitName);
// };
// #endif

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

#ifndef INFANTRY_H
#define INFANTRY_H

#include "UnitComponent.h"
#include "LegionUnit.h"
#include "BattleStrategy.h"

class Infantry : public UnitComponent, public LegionUnit {
private:
    BattleStrategy* strategy;

public:
    Infantry();
    Infantry(BattleStrategy* strat) : strategy(strat) {}

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

#endif // INFANTRY_H

