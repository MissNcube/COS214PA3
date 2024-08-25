#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    archives[label] = memento;
}

TacticalMemento* WarArchives::getBestMemento() {
    if (!archives.empty()) {
        return archives.begin()->second;
    }
    return nullptr;
}
