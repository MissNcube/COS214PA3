#ifndef CAVALRY_H
#define CAVALRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;

class Cavalry : public LegionUnit{
    public:
        Cavalry();
        ~Cavalry();
        virtual void move();
        virtual void attack();
};
#endif