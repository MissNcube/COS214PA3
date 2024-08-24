#ifndef ARTILLERY_H
#define ARTILLERY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;

class Artillery : public LegionUnit{
    public:
        Artillery();
        ~Artillery();
        virtual void move();
        virtual void attack();
};
#endif