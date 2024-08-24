#include <iostream>
#include "TacticalPlanner.h"

void TacticalPlanner::setStrategy(BattleStrategy* strategy) {
    currentStrategy = strategy;
}

TacticalMemento* TacticalPlanner::createMemento(int performance) {
    return new TacticalMemento(currentStrategy, performance);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
    currentStrategy = memento->getStoredStrategy();
}

BattleStrategy* TacticalPlanner::getCurrentStrategy() const {
    return currentStrategy;
}

