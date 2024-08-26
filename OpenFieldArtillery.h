#ifndef OPENFIELDARTILLERY_H
#define OPENFIELDARTILLERY_H
#include "Artillery.h"
#include "LegionUnit.h"

class Artillery;

#include <iostream>
using namespace std;


class  OpenFieldArtillery : public Artillery{
    public:
        OpenFieldArtillery();
        virtual ~OpenFieldArtillery();
        virtual void move();
        virtual  void attack();
};
#endif
