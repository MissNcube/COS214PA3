#ifndef LEGION_H
#define LEGION_H
#include <iostream>
#include <vector>
using namespace std;

#include "UnitComponent.h"

class UnitComponent;

class Legion : public UnitComponent{

    private:
        vector<UnitComponent*> units;

    public:
        Legion();
        virtual ~Legion();
        virtual void add(UnitComponent* component);
        virtual void remove(UnitComponent* component);
        virtual void move();
        virtual void fight();
};

#endif