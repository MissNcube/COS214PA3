#include "WoodlandFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"
#include <iostream>

using namespace std;

WoodlandFactory::WoodlandFactory() {
    cout << "Woodland Factory created" << endl;
}

WoodlandFactory::~WoodlandFactory() {
    cout << "Woodland Factory destroyed" << endl;
}

Infantry* WoodlandFactory::createInfantry() {
    return new WoodlandInfantry();
}

Cavalry* WoodlandFactory::createCavalry() {
    return new WoodlandCavalry();
}

Artillery* WoodlandFactory::createArtillery() {
    return new WoodlandArtillery();
}

void WoodlandFactory::deployArtillery() {
    cout << "Deploying Woodland Artillery" << endl;
}
