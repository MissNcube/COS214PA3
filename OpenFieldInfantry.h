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
    virtual ~OpenFieldInfantry();
    virtual void move();
    virtual void attack();
    int getHealth() const override;
    int getDamage() const override;
    int getDefense() const override;
};
#endif