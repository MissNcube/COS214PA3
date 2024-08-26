#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionFactory.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "Riverbank.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"
#include "LegionUnit.h"

class LegionFactory;

#include <iostream>
using namespace std;


class  RiverbankFactory : public LegionFactory{
    public:
        RiverbankFactory();
        ~RiverbankFactory();
        virtual LegionUnit*  createInfantry();
        virtual  LegionUnit*   createCavalry();
        virtual  LegionUnit* createArtillery();
        void deployArtillery();
        
};
#endif