#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "WarArchives.h"
#include <vector>

class TacticalCommand {
private:
    BattleStrategy* strategy;
    WarArchives* archives;
    std::vector<BattleStrategy*> strategies; // hold multiple strategies
public:
    TacticalCommand(WarArchives* archives);
    void setStrategy(BattleStrategy* s);
    void executeStrategy();
    void chooseBestStrategy();
    void addStrategy(BattleStrategy* strategy);
    void restoreMemento(TacticalMemento* memento);
    void executeStrategies(const std::vector<TacticalCommand*>& strategies, Unit& unit);
};

#endif // TACTICAL_COMMAND_H
