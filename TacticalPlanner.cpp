#include "TacticalPlanner.h"

TacticalMemento* TacticalPlanner::createMemento() {
    return new TacticalMemento(currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
    currentStrategy = memento->getStoredStrategy();
}

void TacticalPlanner::setCurrentStrategy(BattleStrategy* strategy) {
    currentStrategy = strategy;
}

BattleStrategy* TacticalPlanner::getCurrentStrategy() const {
    return currentStrategy;
}
