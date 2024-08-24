#ifndef LEGIONUNIT_H
#define  LEGIONUNIT_H
#include <iostream>
#include "LegionFactory.h"


using namespace std;

class  LegionUnit {
    public:
    LegionUnit();  
    ~LegionUnit();
    virtual void move() =0;
    virtual void attack() =0;
};
#endif  //LEGIONUNIT_H