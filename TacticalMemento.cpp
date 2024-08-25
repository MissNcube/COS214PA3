#include "TacticalMemento.h"

TacticalMemento::TacticalMemento(BattleStrategy* strategy) : storedStrategy(strategy) {}

BattleStrategy* TacticalMemento::getStoredStrategy() {
    return storedStrategy;
}
