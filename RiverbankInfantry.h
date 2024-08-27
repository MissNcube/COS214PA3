#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H
#include "Infantry.h"
#include "LegionUnit.h"

class Infantry;

#include <iostream>
using namespace std;

class RiverbankInfantry : public Infantry
{
public:
    RiverbankInfantry();
    ~RiverbankInfantry();
    virtual void move();
    virtual void attack();
    int getHealth() const;
    int getDamage() const;
    int getDefense() const;
    void displayUnitStats(string name);
    RiverbankInfantry(BattleStrategy* strat); // Constructor declaration
    void fight() override; // Implement pure virtual function
    void add(UnitComponent* component) override; // Implement pure virtual function
    void remove(UnitComponent* component) override; // Implement pure virtual function
    
};
#endif