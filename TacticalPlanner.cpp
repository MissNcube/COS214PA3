#include <iostream>
#include "TacticalPlanner.h"
using namespace std;

void TacticalPlanner::setStrategy(BattleStrategy* strategy) {
    currentStrategy = strategy;
}

TacticalMemento* TacticalPlanner::createMemento() {
    return new TacticalMemento(currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
    currentStrategy = memento->getStoredStrategy();
}

BattleStrategy* TacticalPlanner::getCurrentStrategy() const {
    return currentStrategy;
}
