#include <iostream>
#include "TacticalMemento.h"
using namespace std;

TacticalMemento::TacticalMemento(BattleStrategy* strategy) : storedStrategy(strategy) {}

BattleStrategy* TacticalMemento::getStoredStrategy() const {
    return storedStrategy;
}
