#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include "TacticalMemento.h"
#include "BattleStrategy.h"
#include <vector>

class WarArchives {
private:
    std::vector<TacticalMemento*> savedMementos;

public:
    WarArchives();
    void addMemento(TacticalMemento* memento);
    TacticalMemento* getMemento(int index);
    TacticalMemento* getBestPerformingStrategy();
    void displayAllStrategies();
    void display();
    double getPerformanceMetric(TacticalMemento* memento);
    ~WarArchives();
    void displayArchives() const;
};

#endif // WARARCHIVES_H
