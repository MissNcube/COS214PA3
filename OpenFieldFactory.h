#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "Infantry.h"
#include "Calvary.h"
#include "Artillery.h"
#include "LegionFactory.h"

class LegionFactory;

#include <iostream>
using namespace std;


class  OpenFieldFactory : public LegionFactory{
    public:
        OpenFieldFactory();
        ~OpenFieldFactory();
        virtual Infantry*  createInfantry();
        virtual  Calvary*   createCalvary();
        virtual  Artillery* createArtillery();
        void deployArtillery();
};
#endif