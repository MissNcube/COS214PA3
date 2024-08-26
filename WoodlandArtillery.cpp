#include "WoodlandArtillery.h"
#include "LegionUnit.h"

WoodlandArtillery::WoodlandArtillery()
{
    cout << "Woodland Artillery created "<< endl;
}
WoodlandArtillery::~WoodlandArtillery()
{
    cout << "Woodland Artillery destroyed "<< endl;
}
void WoodlandArtillery::move()
{
    cout << "Woodland Artillery is moving " << endl;
}
void WoodlandArtillery::attack()
{
    cout << "Woodland Artillery is attacking " << endl;
}

// needed to add some functionality
int WoodlandArtillery::getHealth() const
{
    // Return the health value specific to WoodlandArtillery
    return 80; 
}

int WoodlandArtillery::getDamage() const 
{
    // Return the damage value specific to WoodlandArtillery
    return 90; 
}

int WoodlandArtillery::getDefense() const 
{
    // Return the defense value specific to WoodlandArtillery
    return 20;
}