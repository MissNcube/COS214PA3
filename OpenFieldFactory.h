#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionFactory.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "Riverbank.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"


class LegionFactory;

#include <iostream>
using namespace std;


class  OpenFieldFactory : public LegionFactory{
    public:
        OpenFieldFactory();
        ~OpenFieldFactory();
        virtual Infantry*  createInfantry();
        virtual  Cavalry*   createCavalry();
        virtual  Artillery* createArtillery();
        void deployArtillery();
};
#endif