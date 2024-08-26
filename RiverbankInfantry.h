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
    int getHealth() const override;
    int getDamage() const override;
    int getDefense() const override;
    void displayUnitStats(string name);
};
#endif