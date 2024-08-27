#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H
#include "Artillery.h"
#include "LegionUnit.h"

class Artillery;

#include <iostream>
using namespace std;

class RiverbankArtillery : public Artillery
{
public:
    //RiverbankArtillery();
    ~RiverbankArtillery();
    RiverbankArtillery(BattleStrategy* strat);
    virtual void move();
    virtual void attack();
    int getHealth() const;
    int getDamage() const;
    int getDefense() const;
    void displayUnitStats(string name);
    void fight() override; // Implement pure virtual function
    void add(UnitComponent* component) override; // Implement pure virtual function
    void remove(UnitComponent* component) override; // Implement pure virtual function
    
};
#endif
