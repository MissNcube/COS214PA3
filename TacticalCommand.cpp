#include "TacticalCommand.h"
#include <iostream>
using namespace std;

void TacticalCommand::setStrategy(BattleStrategy* s) {
    strategy = s;
    planner.setStrategy(s);
}

void TacticalCommand::executeStrategy() {
    if (strategy) {
        strategy->engage();
    } else {
        cout << "No strategy set!" << endl;
    }
}

void TacticalCommand::saveCurrentStrategy(const std::string& label, int performance) {
    TacticalMemento* memento = planner.createMemento(performance);
    archives.addTacticalMemento(memento, label);
}

void TacticalCommand::restoreStrategy(const std::string& label) {
    TacticalMemento* memento = archives.getTacticalMemento(label);
    if (memento) {
        planner.restoreMemento(memento);
        strategy = planner.getCurrentStrategy();
    }
}

void TacticalCommand::chooseBestStrategy() {
    TacticalMemento* bestMemento = archives.getBestPerformingMemento();
    if (bestMemento) {
        planner.restoreMemento(bestMemento);
        strategy = planner.getCurrentStrategy();
    }
}
