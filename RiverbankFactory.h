#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "Infantry.h"
#include "Calvary.h"
#include "Artillery.h"
#include "LegionFactory.h"

class LegionFactory;

#include <iostream>
using namespace std;


class  RiverbankFactory : public LegionFactory{
    public:
        RiverbankFactory();
        ~RiverbankFactory();
        virtual Infantry*  createInfantry();
        virtual  Calvary*   createCalvary();
        virtual  Artillery* createArtillery();
        void deployArtillery();
};
#endif