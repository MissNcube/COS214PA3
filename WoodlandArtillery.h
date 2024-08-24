#ifndef WOODLANDARTILLERY_H
#define WOODLANDARTILLERY_H
#include "Artillery.h"
#include "LegionUnit.h"

class Artillery;

#include <iostream>
using namespace std;


class  WoodlandArtillery : public Artillery{
    public:
        WoodlandArtillery();
        ~WoodlandArtillery();
        virtual void move();
        virtual  void attack();
};
#endif
