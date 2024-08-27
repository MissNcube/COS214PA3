#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H
#include "Artillery.h"
#include "LegionUnit.h"

class Artillery;

#include <iostream>
using namespace std;

class OpenFieldArtillery : public Artillery
{
public:
    OpenFieldArtillery();
    OpenFieldArtillery(BattleStrategy *strat);
    virtual ~OpenFieldArtillery();
    virtual void move();
    virtual void attack();
    int getHealth() const;
    int getDamage() const;
    int getDefense() const;
    void fight() override;
    void add(UnitComponent *component) override;
    void remove(UnitComponent *component) override;
    void displayUnitStats(const std::string &unitName) override;
};
#endif
