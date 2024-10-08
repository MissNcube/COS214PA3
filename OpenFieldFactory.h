#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionFactory.h"
#include "LegionUnit.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "Riverbank.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"
#include "BattleStrategy.h"
#include "LegionUnit.h"
#include <iostream>
using namespace std;


class  OpenFieldFactory : public LegionFactory{
    public:
        OpenFieldFactory();
        ~OpenFieldFactory();
        virtual LegionUnit*  createInfantry();
        virtual  LegionUnit*   createCavalry();
        virtual  LegionUnit* createArtillery();
        void deployArtillery();
};
#endif