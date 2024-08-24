#include <iostream>
#include "TacticalMemento.h"

TacticalMemento::TacticalMemento(BattleStrategy* strategy, int performance) 
    : storedStrategy(strategy), performance(performance) {}

BattleStrategy* TacticalMemento::getStoredStrategy() const {
    return storedStrategy;
}

int TacticalMemento::getPerformance() const {
    return performance;
}

