#include "RiverbankInfantry.h"

RiverbankInfantry::RiverbankInfantry()
{
    cout << "Riverbank Infantry created "<< endl;
}
RiverbankInfantry::~RiverbankInfantry()
{
    cout << "Riverbank Infantry destroyed "<< endl;
}
void RiverbankInfantry::move()
{
    cout << "Riverbank Infantry is moving through the river " << endl;
}
void RiverbankInfantry::attack()
{
    cout << "Riverbank Infantry is attacking from the river " << endl;
}