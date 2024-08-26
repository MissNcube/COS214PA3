#include <iostream>
#include "LegionFactory.h"
#include "RiverbankFactory.h"
#include "WoodlandFactory.h"
#include "OpenFieldFactory.h"
#include "LegionUnit.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"
#include "BattleStrategy.h"
#include "Ambush.h"
#include "Flanking.h"
#include "Fortification.h"
#include "TacticalPlanner.h"
#include "WarArchives.h"

int main() {
    // Initialize the factories
    RiverbankFactory riverbankFactory;
    WoodlandFactory woodlandFactory;
    OpenFieldFactory openFieldFactory;

    // Create units using the factories
    LegionUnit* riverbankInfantry = riverbankFactory.createInfantry();
    LegionUnit* riverbankCavalry = riverbankFactory.createCavalry();
    LegionUnit* riverbankArtillery = riverbankFactory.createArtillery();

    LegionUnit* woodlandInfantry = woodlandFactory.createInfantry();
    LegionUnit* woodlandCavalry = woodlandFactory.createCavalry();
    LegionUnit* woodlandArtillery = woodlandFactory.createArtillery();

    LegionUnit* openFieldInfantry = openFieldFactory.createInfantry();
    LegionUnit* openFieldCavalry = openFieldFactory.createCavalry();
    LegionUnit* openFieldArtillery = openFieldFactory.createArtillery();

    // Display unit stats
    displayUnitStats("Riverbank Infantry", riverbankInfantry);
    displayUnitStats("Riverbank Cavalry", riverbankCavalry);
    displayUnitStats("Riverbank Artillery", riverbankArtillery);

    displayUnitStats("Woodland Infantry", woodlandInfantry);
    displayUnitStats("Woodland Cavalry", woodlandCavalry);
    displayUnitStats("Woodland Artillery", woodlandArtillery);

    displayUnitStats("Open Field Infantry", openFieldInfantry);
    displayUnitStats("Open Field Cavalry", openFieldCavalry);
    displayUnitStats("Open Field Artillery", openFieldArtillery);

    // Set up strategies
    BattleStrategy* ambushStrategy = new Ambush();
    BattleStrategy* flankingStrategy = new Flanking();
    BattleStrategy* fortificationStrategy = new Fortification();

    // Initialize TacticalPlanner
    TacticalPlanner tacticalPlanner;

    // Add strategies to planner
    tacticalPlanner.addStrategy(ambushStrategy);
    tacticalPlanner.addStrategy(flankingStrategy);
    tacticalPlanner.addStrategy(fortificationStrategy);

    // Execute strategies and store results
    tacticalPlanner.executeStrategies();

    // Retrieve and display best strategy based on performance
    BattleStrategy* bestStrategy = tacticalPlanner.getBestStrategy();
    std::cout << "Best Strategy based on past performance: " << bestStrategy->getName() << std::endl;

    // Display War Archives
    WarArchives warArchives;
    warArchives.displayArchives();

    // Clean up dynamically allocated memory
    delete riverbankInfantry;
    delete riverbankCavalry;
    delete riverbankArtillery;
    delete woodlandInfantry;
    delete woodlandCavalry;
    delete woodlandArtillery;
    delete openFieldInfantry;
    delete openFieldCavalry;
    delete openFieldArtillery;
    delete ambushStrategy;
    delete flankingStrategy;
    delete fortificationStrategy;

    return 0;
}
