#ifndef WOODLANDCAVALRY_H
#define WOODLANDCAVALRY_H
#include "Cavalry.h"
#include "LegionUnit.h"
#include <iostream>
using namespace std;

class WoodlandCavalry : public Cavalry{
    public:
        WoodlandCavalry();
        ~WoodlandCavalry();
        virtual void move();
        virtual void attack();
        int getHealth() const;
        int getDamage() const;
        int getDefense() const;
        void displayUnitStats(string name);
};
#endif