// #ifndef BATTLESTRATEGY_H
// #define BATTLESTRATEGY_H

// #include "LegionUnit.h"

// class LegionUnit;

// class BattleStrategy {
// public:
//     virtual void engage() = 0;
//     virtual bool requiresStealth() const = 0;
//     virtual ~BattleStrategy() = default;
//     virtual void executeMovement(LegionUnit*) = 0;
//     virtual void executeAttack(LegionUnit*) = 0;
// };

// #endif // BATTLESTRATEGY_H


#ifndef BATTLE_STRATEGY_H
#define BATTLE_STRATEGY_H

class LegionUnit;  // Forward declaration to avoid circular dependency

class BattleStrategy {
public:
    virtual void executeMovement(LegionUnit* unit) = 0;
    virtual void executeAttack(LegionUnit* unit) = 0;
    virtual ~BattleStrategy() = default;
};

#endif // BATTLE_STRATEGY_H
