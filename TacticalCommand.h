#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "WarArchives.h"

class TacticalCommand {
private:
    BattleStrategy* strategy;
    WarArchives* archives;
public:
    TacticalCommand(WarArchives* archives);
    void setStrategy(BattleStrategy* s);
    void executeStrategy();
    void chooseBestStrategy();
    void restoreMemento(TacticalMemento* memento);
};

#endif // TACTICAL_COMMAND_H
