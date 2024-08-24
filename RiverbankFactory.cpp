#include "RiverbankFactory.h"

RiverbankFactory::RiverbankFactory()
{
    cout << "Riverbank Factory created " << endl;
}
RiverbankFactory::~RiverbankFactory()
{
    cout << "Riverbank Factory destroyed " << endl;
}
Infantry* RiverbankFactory::createInfantry()
{
    return new  RiverbankInfantry();
}
Cavalry* RiverbankFactory::createCavalry()
{
    return new RiverbankCavalry();
}
Artillery* RiverbankFactory::createArtillery()
{
    return new RiverbankArtillery();
}
void RiverbankFactory::deployArtillery()
{
    cout << "Riverbank Factory deploying artillery " << endl;
}