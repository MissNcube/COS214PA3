#include "TacticalCommand.h"
#include <iostream>

TacticalCommand::TacticalCommand(WarArchives* archives) : strategy(nullptr), archives(archives) {}

void TacticalCommand::setStrategy(BattleStrategy* s) {
    strategy = s;
}

void TacticalCommand::executeStrategy() {
    if (strategy) {
        strategy->engage();
    } else {
        std::cout << "No strategy set." << std::endl;
    }
}

void TacticalCommand::chooseBestStrategy() {
    TacticalMemento* bestMemento = archives->getBestMemento();
    if (bestMemento) {
        restoreMemento(bestMemento);
    } else {
        // Logic to select a new strategy if no memento is available
        // For example, you could default to a standard strategy
    }
}

void TacticalCommand::restoreMemento(TacticalMemento* memento) {
    if (memento) {
        strategy = memento->getStoredStrategy();
    }
}
