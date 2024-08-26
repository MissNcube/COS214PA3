#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"
#include "LegionFactory.h"

class Infantry;

#include <iostream>
using namespace std;

class WoodlandInfantry : public Infantry
{
public:
    WoodlandInfantry();
    ~WoodlandInfantry();
    virtual void move();
    virtual void attack();
    int getHealth() const override;
    int getDamage() const override;
    int getDefense() const override;
};
#endif