#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H
#include "Artillery.h"
#include "LegionUnit.h"

class Artillery;

#include <iostream>
using namespace std;


class  RiverbankArtillery : public Artillery{
    public:
        RiverbankArtillery();
        virtual ~RiverbankArtillery();
        virtual void move();
        virtual  void attack();
};
#endif
