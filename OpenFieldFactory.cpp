#include "OpenFieldFactory.h"

OpenFieldFactory::OpenFieldFactory()
{
    cout << "OpenField Factory created " << endl;
}
OpenFieldFactory::~OpenFieldFactory()
{
    cout << "OpenField Factory destroyed " << endl;
}
Infantry* OpenFieldFactory::createInfantry()
{
    return new OpenFieldInfantry();
}
Cavalry* OpenFieldFactory::createCavalry()
{
    return new OpenFieldCavalry();
}
Artillery* OpenFieldFactory::createArtillery()
{
    return new OpenFieldArtillery();
}
void OpenFieldFactory::deployArtillery()
{
    cout<< " OpenField deploying Artillery  " << endl;
}