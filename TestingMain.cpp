#include "TacticalCommand.h"
#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"

int main() {
    TacticalCommand commander;

    Flanking flanking;
    Fortification fortification;
    Ambush ambush;

    commander.setStrategy(&flanking);
    commander.executeStrategy();
    commander.saveCurrentStrategy("Flanking Engagement", 75); // Flanking had 75% success

    commander.setStrategy(&fortification);
    commander.executeStrategy();
    commander.saveCurrentStrategy("Fortification Engagement", 50); // Fortification had 50% success

    commander.setStrategy(&ambush);
    commander.executeStrategy();
    commander.saveCurrentStrategy("Ambush Engagement", 85); // Ambush had 85% success

    // Choose the best strategy based on past performance
    commander.chooseBestStrategy();
    commander.executeStrategy(); // Should execute the Ambush strategy since it had the best performance

    return 0;
}
