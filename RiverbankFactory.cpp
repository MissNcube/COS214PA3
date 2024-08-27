#include "RiverbankFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "LegionUnit.h"
#include "Flanking.h"

RiverbankFactory::RiverbankFactory()
{
    cout << "Riverbank Factory created " << endl;
}
RiverbankFactory::~RiverbankFactory()
{
    cout << "Riverbank Factory destroyed " << endl;
}
LegionUnit* RiverbankFactory::createInfantry() {
    BattleStrategy* strategy = new Flanking(); // Example strategy
    return new RiverbankInfantry(strategy);
}

LegionUnit* RiverbankFactory::createCavalry() {
    BattleStrategy* strategy = new Flanking(); // Example strategy
    return new RiverbankCavalry(strategy);
}

LegionUnit* RiverbankFactory::createArtillery() {
    BattleStrategy* strategy = new Flanking(); // Example strategy
    return new RiverbankArtillery(strategy);
}
void RiverbankFactory::deployArtillery()
{
    cout << "Riverbank Factory deploying artillery " << endl;
}