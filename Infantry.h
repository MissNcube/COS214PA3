#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;
class UnitComponent;

class Infantry : public LegionUnit, public UnitComponent{
    public:
        Infantry();
        virtual ~Infantry();
        virtual void move();
        virtual void attack();
};
#endif