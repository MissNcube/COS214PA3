#ifndef OPENFIELDCAVALRY_H
#define OPENFIELDCAVALRY_H
#include "Cavalry.h"
#include "LegionUnit.h"

class Cavalry;

#include <iostream>

using namespace std;


class  OpenFieldCavalry : public Cavalry{
    public:
        OpenFieldCavalry();
        virtual ~OpenFieldCavalry();
        virtual void move();
        virtual  void attack();
        int getHealth() const override;
        int getDamage() const override;
        int getDefense() const override;
        void displayUnitStats(string name);
};
#endif