#ifndef TACTICALCOMMAND_H
#define TACTICALCOMMAND_H

#include "BattleStrategy.h"
#include "TacticalPlanner.h"
#include "WarArchives.h"
#include <string>

class TacticalCommand {
private:
    BattleStrategy* strategy;
    TacticalPlanner planner;
    WarArchives archives;

public:
    void setStrategy(BattleStrategy* s);
    void executeStrategy();
    void saveCurrentStrategy(const std::string& label, int performance);
    void restoreStrategy(const std::string& label);
    void chooseBestStrategy();
};

#endif /* TACTICALCOMMAND_H */
