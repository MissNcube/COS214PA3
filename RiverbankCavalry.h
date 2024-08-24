#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H
#include "Cavalry.h"
#include "LegionUnit.h"

class Cavalry;

#include <iostream>
using namespace std;


class  RiverbankCavalry : public Cavalry{
    public:
        RiverbankCavalry();
        ~RiverbankCavalry();
        virtual void move();
        virtual  void attack();
};
#endif