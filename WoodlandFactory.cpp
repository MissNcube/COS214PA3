#include "WoodlandFactory.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"
#include <iostream>

using namespace std;

WoodlandFactory::WoodlandFactory() {
    cout << "Woodland Factory created" << endl;
}

WoodlandFactory::~WoodlandFactory() {
    cout << "Woodland Factory destroyed" << endl;
}

LegionUnit* WoodlandFactory::createInfantry() {
    return new WoodlandInfantry();
}

LegionUnit* WoodlandFactory::createCavalry() {
    return new WoodlandCavalry();
}

LegionUnit* WoodlandFactory::createArtillery() {
    return new WoodlandArtillery();
}

void WoodlandFactory::deployArtillery() {
    cout << "Deploying Woodland Artillery" << endl;
}
