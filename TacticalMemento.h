#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"
#include "LegionUnit.h"

class LegionUnit;
class BattleStrategy;

class TacticalMemento{
private:
    BattleStrategy* storedStrategy;
public:
    TacticalMemento(BattleStrategy* strategy);
    BattleStrategy* getStoredStrategy();
};

#endif // TACTICALMEMENTO_H
