#include "TacticalCommand.h"
#include "TacticalMemento.h"
#include "WarArchives.h"
#include "UnitComponent.h"  
#include <iostream>

TacticalCommand::TacticalCommand(WarArchives* archives) : strategy(nullptr), archives(archives) {}

void TacticalCommand::setStrategy(BattleStrategy* s) {
    strategy = s;
}

void TacticalCommand::executeStrategy(UnitComponent& unit) {
    if (strategy) {
        strategy->execute(unit);
    }
}

void TacticalCommand::chooseBestStrategy() {
    TacticalMemento* bestMemento = archives->getBestPerformingStrategy();
    if (bestMemento) {
        restoreMemento(bestMemento);
    }
}

void TacticalCommand::restoreMemento(TacticalMemento* memento) {
    if (memento) {
        strategy = memento->getSavedStrategy();
    }
}

// New methods

void TacticalCommand::addStrategy(BattleStrategy* s, UnitComponent& unit) {
    setStrategy(s);
    executeStrategy(unit);
    TacticalMemento* memento = new TacticalMemento(s, unit.getPerformance());
    archives->addMemento(memento);
}

void TacticalCommand::displayUnitStats(UnitComponent& unit) {
    std::cout << "Unit Stats: " << std::endl;
    unit.displayStats();
}

void TacticalCommand::executeStrategies(const std::vector<TacticalCommand*>& strategies, UnitComponent& unit) {
    for (TacticalCommand* command : strategies) {
        command->executeStrategy(unit);
    }
}

BattleStrategy* TacticalCommand::getBestStrategy() {
    TacticalMemento* bestMemento = archives->getBestPerformingStrategy();
    return bestMemento ? bestMemento->getSavedStrategy() : nullptr;
}

void TacticalCommand::displayArchives() {
    archives->display();
}
