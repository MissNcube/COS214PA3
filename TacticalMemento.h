#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {
private:
    BattleStrategy* storedStrategy;
    int performance; // Performance metric for the strategy

public:
    TacticalMemento(BattleStrategy* strategy, int performance);
    BattleStrategy* getStoredStrategy() const;
    int getPerformance() const;
};

#endif /* TACTICALMEMENTO_H */
