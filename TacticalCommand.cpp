#include <iostream>
#include "TacticalCommand.h"
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

void TacticalCommand::saveCurrentStrategy(const std::string& label) {
    TacticalMemento* memento = planner.createMemento();
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
    // Need to choose the best strategy based on stored mementos ->  still not sure how though 
}
