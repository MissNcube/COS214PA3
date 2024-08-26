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

void TacticalPlanner::addStrategy(BattleStrategy* strategy) {
    strategies.push_back(strategy);
}

void TacticalPlanner::executeStrategies() {
    for (auto& strategy : strategies) {
        // Execute strategy
    }
}

BattleStrategy* TacticalPlanner::getBestStrategy() const {
    // Return the best strategy based on performance
    return nullptr;
}
