#ifndef LEGIONFACTORY_H
#define  LEGIONFACTORY_H
#include "Infantry.h"
#include "Calvary.h"
#include "Artillery.h"

#include <iostream>
#include <string>
using namespace std;

class  LegionFactory {
    public:
    LegionFactory();
    virtual ~LegionFactory();
    virtual Infantry* createInfantry() = 0;
    virtual Calvary* createCavalry() = 0;
    virtual Artillery*  createArtillery() = 0;
};
#endif