#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include <string>
#include <unordered_map>
#include "TacticalMemento.h"

class WarArchives {
private:
    std::unordered_map<std::string, TacticalMemento*> archives;
public:
    void addTacticalMemento(TacticalMemento* memento, const std::string& label);
    TacticalMemento* getBestMemento();
};

#endif // WARARCHIVES_H
