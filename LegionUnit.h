#ifndef LEGIONUNIT_H
#define  LEGIONUNIT_H
#include <iostream>
#include "LegionFactory.h"
#include "UnitComponent.h"

class UnitComponent;

using namespace std;

class  LegionUnit : public UnitComponent{
    public:
    LegionUnit();  
    virtual ~LegionUnit() = default;
    virtual void move() =0;
    virtual void attack() =0;
    virtual int getHealth() const = 0;
    virtual int getDamage() const = 0;
    virtual int getDefense() const = 0;
};
#endif  //LEGIONUNIT_H