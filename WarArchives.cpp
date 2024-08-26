#include "WarArchives.h"
#include "TacticalCommand.h"
#include "TacticalMemento.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    archives[label] = memento;
}

TacticalMemento* WarArchives::getBestMemento() {
    if (!archives.empty()) {
        return archives.begin()->second;
    }
    return nullptr;
}

TacticalCommand* WarArchives::getBestStrategy(const WarArchives& archives) {
    // get the strategy with the highest performance score
    return archives.getBestPerformingStrategy();
}

void WarArchives::displayArchives(const WarArchives& archives) {
    archives.displayAllStrategies();
}


