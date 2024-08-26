#include "OpenFieldFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"

OpenFieldFactory::OpenFieldFactory()
{
    cout << "OpenField Factory created " << endl;
}
OpenFieldFactory::~OpenFieldFactory()
{
    cout << "OpenField Factory destroyed " << endl;
}
LegionUnit* OpenFieldFactory::createInfantry() {
    return new OpenFieldInfantry();
}

LegionUnit* OpenFieldFactory::createCavalry() {
    return new OpenFieldCavalry();
}

LegionUnit* OpenFieldFactory::createArtillery() {
    return new OpenFieldArtillery();
}

void OpenFieldFactory::deployArtillery()
{
    cout<< " OpenField deploying Artillery  " << endl;
}