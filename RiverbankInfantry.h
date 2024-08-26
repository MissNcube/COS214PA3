#ifndef RIVERBANKINFANTRY_H
#define RIVERBANKINFANTRY_H
#include "Infantry.h"
#include "LegionUnit.h"

class Infantry;

#include <iostream>
using namespace std;


class  RiverbankInfantry : public Infantry{
    public:
        RiverbankInfantry();
        virtual ~RiverbankInfantry();
        virtual void move();
        virtual  void attack();
};
#endif