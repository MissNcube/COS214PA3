#include <iostream>
#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    mementos[label] = memento;
}

void WarArchives::removeTacticalMemento(const std::string& label) {
    mementos.erase(label);
}

TacticalMemento* WarArchives::getTacticalMemento(const std::string& label) {
    return mementos[label];
}

TacticalMemento* WarArchives::getBestPerformingMemento() {
    TacticalMemento* bestMemento = nullptr;
    int bestPerformance = -1;

    for (const auto& pair : mementos) {
        if (pair.second->getPerformance() > bestPerformance) {
            bestPerformance = pair.second->getPerformance();
            bestMemento = pair.second;
        }
    }

    return bestMemento;
}
