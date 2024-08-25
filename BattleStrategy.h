#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

class BattleStrategy {
public:
    virtual void engage() = 0;
    virtual bool requiresStealth() const = 0;
    virtual ~BattleStrategy() = default;
};

#endif // BATTLESTRATEGY_H
