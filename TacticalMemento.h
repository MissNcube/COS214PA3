#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {
private:
    BattleStrategy* storedStrategy;

public:
    TacticalMemento(BattleStrategy* strategy);
    BattleStrategy* getStoredStrategy() const;
};

#endif /* TACTICALMEMENTO_H */
