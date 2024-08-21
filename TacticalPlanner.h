#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "TacticalMemento.h"
#include "BattleStrategy.h"

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy;

public:
    void setStrategy(BattleStrategy* strategy);
    TacticalMemento* createMemento();
    void restoreMemento(TacticalMemento* memento);
    BattleStrategy* getCurrentStrategy() const;
};

#endif /* TACTICALPLANNER_H */
