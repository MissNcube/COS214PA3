#include "WoodlandFactory.h"

WoodlandFactory::WoodlandFactory()
{
    cout << "Woodland Factory created" << endl;
}
WoodlandFactory::~WoodlandFactory()
{
    cout << "Woodland Factory destroyed" << endl;
}
Infantry* WoodlandFactory::createInfantry()
{
    return WoodlandInfantry();
}
Cavalry* WoodlandFactory::createCavalry()
{
    return new WoodlandCavalry();
}
Artillery* WoodlandFactory::createArtillery()
{

}
void WoodlandFactory::deployArtillery()
{

}