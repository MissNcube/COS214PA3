#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "WarArchives.h"
#include "UnitComponent.h"
#include <vector>

class TacticalCommand {
private:
    BattleStrategy* strategy;
    WarArchives* archives;

public:
    TacticalCommand(WarArchives* archives);
    void setStrategy(BattleStrategy* s);
    void executeStrategy(UnitComponent& unit);
    void chooseBestStrategy();
    void restoreMemento(TacticalMemento* memento);

    // New methods
    void addStrategy(BattleStrategy* s, UnitComponent& unit);
    void displayUnitStats(UnitComponent& unit);
    void executeStrategies(const std::vector<TacticalCommand*>& strategies, UnitComponent& unit);
    BattleStrategy* getBestStrategy();
    void displayArchives();
};

#endif // TACTICAL_COMMAND_H
