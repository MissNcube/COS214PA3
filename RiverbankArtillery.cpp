#include "RiverbankArtillery.h"
#include "LegionUnit.h"

RiverbankArtillery::RiverbankArtillery()
{
    cout << "Riverbank Artillery created "<< endl;
}
RiverbankArtillery::~RiverbankArtillery()
{
    cout << "Riverbank Artillery destroyed "<< endl;
}
void RiverbankArtillery::move()
{
    cout << "Riverbank Artillery is moving " << endl;
}
void RiverbankArtillery::attack()
{
    cout << "Riverbank Artillery is attacking " << endl;
} 

// needed to add some functionality
int RiverbankArtillery::getHealth() const
{
    // Return the health value specific to RiverbankArtillery
    return 80; 
}

int RiverbankArtillery::getDamage() const 
{
    // Return the damage value specific to RiverbankArtillery
    return 90; 
}

int RiverbankArtillery::getDefense() const 
{
    // Return the defense value specific to RiverbankArtillery
    return 20;
}