#ifndef OPENFIELDINFANTRY_H
#define OPENFIELDINFANTRY_H
#include "Infantry.h"
#include "LegionUnit.h"

class Infantry;

#include <iostream>
using namespace std;


class  OpenFieldInfantry : public Infantry{
    public:
        OpenFieldInfantry();
        ~OpenFieldInfantry();
        virtual void move();
        virtual  void attack();
};
#endif