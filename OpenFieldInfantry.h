#ifndef OPENFIELDINFANTRY_H
#define OPENFIELDINFANTRY_H
#include "Infantry.h"
#include "LegionUnit.h"

class Infantry;

#include <iostream>
using namespace std;

class OpenFieldInfantry : public Infantry
{
public:
    OpenFieldInfantry();
    OpenFieldInfantry(BattleStrategy* strat);
    virtual ~OpenFieldInfantry();
    virtual void move();
    virtual void attack();
    int getHealth() const;
    int getDamage() const;
    int getDefense() const;
    void fight() override;
    void add(UnitComponent* component) override;
    void remove(UnitComponent* component) override;
    void displayUnitStats(string name);
};
#endif