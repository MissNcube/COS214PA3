#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H
#include "Cavalry.h"
#include "LegionUnit.h"
#include <iostream>

using namespace std;
class Cavalry;
class OpenFieldCavalry : public Cavalry
{
public:
    OpenFieldCavalry();
    OpenFieldCavalry(BattleStrategy *strat);
    virtual ~OpenFieldCavalry();
    virtual void move();
    virtual void attack();
    int getHealth() const;
    int getDamage() const;
    int getDefense() const;
    void displayUnitStats(string name);
    void fight() override;
    void add(UnitComponent *component) override;
    void remove(UnitComponent *component) override;
};
#endif