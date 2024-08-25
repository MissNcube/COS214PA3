#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy;
public:
    TacticalMemento* createMemento();
    void restoreMemento(TacticalMemento* memento);
    void setCurrentStrategy(BattleStrategy* strategy);
    BattleStrategy* getCurrentStrategy() const;
};

#endif // TACTICALPLANNER_H
