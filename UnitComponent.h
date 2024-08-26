#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H
#include <iostream>
using namespace std;

class UnitComponent{

    public:
    UnitComponent();
    virtual ~UnitComponent();
    virtual void move() = 0;
    virtual void fight() = 0; 
    virtual void add(UnitComponent* component) =0;
    virtual void remove(UnitComponent* component)=0;
};
#endif