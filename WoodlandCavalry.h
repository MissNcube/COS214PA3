#ifndef WOODLANDCAVALRY_H
#define WOODLANDCAVALRY_H
#include "Cavalry.h"
#include "LegionUnit.h"

class Cavalry;

#include <iostream>
using namespace std;


class  WoodlandCavalry : public Cavalry{
    public:
        WoodlandCavalry();
        virtual ~WoodlandCavalry();
        virtual void move();
        virtual  void attack();
};
#endif