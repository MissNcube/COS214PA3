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

    commander.saveCurrentStrategy("First Engagement");

    commander.setStrategy(&fortification);
    commander.executeStrategy();

    commander.restoreStrategy("First Engagement");
    commander.executeStrategy();

    return 0;
}
