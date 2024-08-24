#include "TacticalCommand.h"
#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"
#include <iostream>

int main() {
    // Create the TacticalCommand object
    TacticalCommand commander;

    // Create strategies
    Flanking flanking;
    Fortification fortification;
    Ambush ambush;

    // Test Flanking strategy
    std::cout << "Testing Flanking Strategy..." << std::endl;
    commander.setStrategy(&flanking);
    commander.executeStrategy();
    commander.saveCurrentStrategy("Flanking Engagement", 75); // Flanking had 75% success

    // Test Fortification strategy
    std::cout << "Testing Fortification Strategy..." << std::endl;
    commander.setStrategy(&fortification);
    commander.executeStrategy();
    commander.saveCurrentStrategy("Fortification Engagement", 50); // Fortification had 50% success

    // Test Ambush strategy
    std::cout << "Testing Ambush Strategy..." << std::endl;
    commander.setStrategy(&ambush);
    commander.executeStrategy();
    commander.saveCurrentStrategy("Ambush Engagement", 85); // Ambush had 85% success

    // Restore and execute the best strategy based on past performance
    std::cout << "\nChoosing and executing the best strategy based on past performance..." << std::endl;
    commander.chooseBestStrategy();
    commander.executeStrategy(); // Should execute the Ambush strategy since it had the best performance

    // Additional tests for edge cases and memory management
    std::cout << "\nTesting edge cases..." << std::endl;

    // Attempt to restore a strategy that doesn't exist
    std::cout << "Attempting to restore a non-existent strategy..." << std::endl;
    commander.restoreStrategy("NonExistentStrategy"); // Should handle this gracefully

    // Check behavior with no saved strategies
    std::cout << "Clearing all strategies and attempting to choose the best strategy..." << std::endl;
    //commander.clearStrategies(); // Clear all saved strategies
    commander.chooseBestStrategy(); // Should handle gracefully when no strategies are saved

    // Re-test after clearing strategies
    std::cout << "Re-testing after clearing strategies..." << std::endl;
    commander.setStrategy(&flanking);
    commander.executeStrategy();
    commander.saveCurrentStrategy("Flanking Engagement", 60); // Re-saving a strategy

    commander.chooseBestStrategy(); // Should pick the Flanking strategy as it's the only one
    commander.executeStrategy(); // Execute the selected strategy

    return 0;
}
