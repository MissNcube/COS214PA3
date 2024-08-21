#include <iostream>
#include "WarArchives.h"
using namespace std;

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    mementos[label] = memento;
}

void WarArchives::removeTacticalMemento(const std::string& label) {
    mementos.erase(label);
}

TacticalMemento* WarArchives::getTacticalMemento(const std::string& label) {
    return mementos[label];
}
