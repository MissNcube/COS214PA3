#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H
#include "Artillery.h"
#include "LegionUnit.h"

class Artillery;

#include <iostream>
using namespace std;

class RiverbankArtillery : public Artillery
{
public:
    RiverbankArtillery();
    ~RiverbankArtillery();
    virtual void move();
    virtual void attack();
    int getHealth() const override;
    int getDamage() const override;
    int getDefense() const override;
    void displayUnitStats(string name);
};
#endif
