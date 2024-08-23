#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionFactory.h"

class LegionFactory;

#include <iostream>
using namespace std;


class  WoodlandFactory : public LegionFactory{
    public:
        WoodlandFactory();
        ~WoodlandFactory();
        virtual Infantry*  createInfantry();
        virtual  Cavalry*   createCalvary();
        virtual  Artillery* createArtillery();
        void deployArtillery();
};
#endif