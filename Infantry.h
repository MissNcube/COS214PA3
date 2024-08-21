#ifndef INFANTRY_H
#define INFANTRY_H
#include <iostream>
using namespace std;
#include "LegionUnit.h"

class LegionUnit;

class Infantry : public LegionUnit{
    public:
        Infantry();
        ~Infantry();
};
#endif