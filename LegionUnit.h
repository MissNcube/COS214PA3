// #ifndef LEGIONUNIT_H
// #define  LEGIONUNIT_H
// #include <iostream>
// #include "LegionFactory.h"
// #include "UnitComponent.h"
// #include "BattleStrategy.h"
// #include "LegionUnit.h" // Include the full definition

// //class UnitComponent;

// using namespace std;

// class  LegionUnit{ 
//     protected:
//         BattleStrategy* strategy;

//     public:
//     LegionUnit();  
//     virtual ~LegionUnit();
//     virtual void move() =0;
//     virtual void attack() =0;
//     virtual int getHealth() const = 0;
//     virtual int getDamage() const = 0;
//     virtual int getDefense() const = 0;
//     virtual void displayUnitStats(string name) = 0;
//     virtual void executeMovement() = 0;
//     virtual void executeAttack() = 0;
//     virtual void setStrategy(BattleStrategy* strat) { strategy = strat; }
// };
// #endif  //LEGIONUNIT_H

#ifndef LEGION_UNIT_H
#define LEGION_UNIT_H

#include <string>

class LegionUnit {
public:
    virtual void move() = 0;
    virtual void attack() = 0;
    virtual void displayUnitStats(const std::string& unitName) = 0;
    virtual ~LegionUnit() = default;
};

#endif // LEGION_UNIT_H
