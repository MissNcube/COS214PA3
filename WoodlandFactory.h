#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionFactory.h"
#include "Woodland.h"
#include "WoodlandCavalry.h"
#include "WoodlandInfantry.h"
#include "WoodlandArtillery.h"

class WoodlandFactory : public LegionFactory {
public:
    WoodlandFactory();
    virtual ~WoodlandFactory();
    virtual Infantry* createInfantry();
    virtual Cavalry* createCavalry();
    virtual Artillery* createArtillery();
    void deployArtillery();
};

#endif
