#include "OpenFieldFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"
#include "Flanking.h" 

OpenFieldFactory::OpenFieldFactory()
{
    cout << "OpenField Factory created " << endl;
}
OpenFieldFactory::~OpenFieldFactory()
{
    cout << "OpenField Factory destroyed " << endl;
}
LegionUnit* OpenFieldFactory::createInfantry() {
    BattleStrategy* someStrategy = new Flanking(); // Now should be recognized
    return new OpenFieldInfantry(someStrategy);
}

BattleStrategy* someStrategy = new Flanking();

LegionUnit* OpenFieldFactory::createCavalry() {
    BattleStrategy* someStrategy = new Flanking(); // Now should be recognized
    return new OpenFieldCavalry(someStrategy);
}

LegionUnit* OpenFieldFactory::createArtillery() {
    BattleStrategy* someStrategy = new Flanking(); // Now should be recognized
    return new OpenFieldArtillery(someStrategy);
}

void OpenFieldFactory::deployArtillery()
{
    cout<< " OpenField deploying Artillery  " << endl;
}