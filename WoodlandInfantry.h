#ifndef WOODLANDINFANTRY_H
#define WOODLANDINFANTRY_H
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"
#include "LegionFactory.h"

class Infantry;

#include <iostream>
using namespace std;


class  WoodlandInfantry : public Infantry{
    public:
        WoodlandInfantry();
        virtual ~WoodlandInfantry();
        virtual void move();
        virtual  void attack();
};
#endif