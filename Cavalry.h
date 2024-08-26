#ifndef CAVALRY_H
#define CAVALRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;
class UnitComponent;

class Cavalry : public LegionUnit, public UnitComponent{
    public:
        Cavalry();
        virtual ~Cavalry();
        virtual void move();
        virtual void attack();
};
#endif