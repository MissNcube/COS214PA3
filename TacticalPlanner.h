#ifndef TACTICALPLANNER_H
#define TACTICALPLANNER_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"
#include <vector>

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy;
    std::vector<BattleStrategy*> strategies;

public:
    TacticalMemento* createMemento();
    void restoreMemento(TacticalMemento* memento);
    void setCurrentStrategy(BattleStrategy* strategy);
    BattleStrategy* getCurrentStrategy() const;
    void addStrategy(BattleStrategy* strategy);
    void executeStrategies();
    BattleStrategy* getBestStrategy() const;
};

#endif // TACTICALPLANNER_H
