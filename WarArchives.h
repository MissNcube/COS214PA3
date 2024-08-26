#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include <string>
#include <unordered_map>
#include "TacticalMemento.h"
#include "TacticalCommand.h"

class WarArchives {
private:
    std::unordered_map<std::string, TacticalMemento*> archives;
public:
    void addTacticalMemento(TacticalMemento* memento, const std::string& label);
    TacticalMemento* getBestMemento();
    void displayArchives(const WarArchives& archives);
    TacticalCommand* getBestStrategy(const WarArchives& archives);
};

#endif // WARARCHIVES_H
