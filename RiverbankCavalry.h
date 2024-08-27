#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H
#include "Cavalry.h"
#include "LegionUnit.h"
#include <iostream>
using namespace std;

class RiverbankCavalry : public Cavalry
{
public:
    RiverbankCavalry();
    ~RiverbankCavalry();
    RiverbankCavalry(BattleStrategy *strat);
    virtual void move();
    virtual void attack();
    int getHealth() const;
    int getDamage() const;
    int getDefense() const;
    void displayUnitStats(string name);
    void fight() override;                          // Implement pure virtual function
    void add(UnitComponent *component) override;    // Implement pure virtual function
    void remove(UnitComponent *component) override; // Implement pure virtual function
};
#endif