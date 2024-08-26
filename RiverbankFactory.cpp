#include "RiverbankFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"

RiverbankFactory::RiverbankFactory()
{
    cout << "Riverbank Factory created " << endl;
}
RiverbankFactory::~RiverbankFactory()
{
    cout << "Riverbank Factory destroyed " << endl;
}
LegionUnit* RiverbankFactory::createInfantry()
{
    return new  RiverbankInfantry();
}
LegionUnit* RiverbankFactory::createCavalry()
{
    return new RiverbankCavalry();
}
LegionUnit* RiverbankFactory::createArtillery()
{
    return new RiverbankArtillery();
}
void RiverbankFactory::deployArtillery()
{
    cout << "Riverbank Factory deploying artillery " << endl;
}