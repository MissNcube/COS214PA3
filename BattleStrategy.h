#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

class BattleStrategy {
public:
    virtual void engage() = 0;
    virtual bool requiresStealth() const = 0;
    virtual ~BattleStrategy() = default;
    virtual void executeMovement(LegionUnit* unit) = 0;
    virtual void executeAttack(LegionUnit* unit) = 0;
};

#endif // BATTLESTRATEGY_H
