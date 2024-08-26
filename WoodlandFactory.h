#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"
#include "LegionFactory.h"
#include "Woodland.h"
#include "WoodlandCavalry.h"
#include "WoodlandInfantry.h"
#include "WoodlandArtillery.h"

class WoodlandFactory : public LegionFactory {
public:
    WoodlandFactory();
    ~WoodlandFactory();
    virtual LegionUnit* createInfantry();
    virtual LegionUnit* createCavalry();
    virtual LegionUnit* createArtillery();
    void deployArtillery();
};

#endif
