// #ifndef AMBUSH_H
// #define AMBUSH_H

// #include "BattleStrategy.h" 
// #include "LegionUnit.h"

// //class LegionUnit;

// class Ambush : public BattleStrategy {
// public:
//     void engage() override;
//     bool requiresStealth() const;
//     void executeMovement(LegionUnit* unit);
//     void executeAttack(LegionUnit* unit);
// };

// #endif // AMBUSH_H

#ifndef AMBUSH_H
#define AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy {
public:
    void executeMovement(LegionUnit* unit) override {
        // Implement ambush movement logic
    }

    void executeAttack(LegionUnit* unit) override {
        // Implement ambush attack logic
    }
};

#endif // AMBUSH_H
