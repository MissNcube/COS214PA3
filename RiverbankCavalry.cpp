#include "RiverbankCavalry.h"
#include "LegionUnit.h"

RiverbankCavalry::RiverbankCavalry()
{
    cout << "Riverbank Cavalry created "<< endl;
}
RiverbankCavalry::~RiverbankCavalry()
{
    cout << "Riverbank Cavalry destroyed "<< endl;
}
void RiverbankCavalry::move()
{
    cout << "Riverbank Cavalry is moving " << endl;
}
void RiverbankCavalry::attack()
{
    cout << "Riverbank Cavalry is attacking " << endl;
}

// needed to add some functionality
int RiverbankCavalry::getHealth() const
{
    // Return the health value specific to RiverbankCavalry
    return 120; 
}

int RiverbankCavalry::getDamage() const 
{
    // Return the damage value specific to RiverbankCavalry
    return 70; 
}

int RiverbankCavalry::getDefense() const 
{
    // Return the defense value specific to RiverbankCavalry
    return 40;
}