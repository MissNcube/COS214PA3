/*#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

// ANSI escape codes for colors and styles
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BOLD    "\033[1m"

void typewriterEffect(const string &text, int delay = 50) {
    for (const char &c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

int main() {
    // Start the Call of Destiny sequence
    //printCallOfDestiny();
    
    // Additional demo code can follow here...

     cout << RED << BOLD << "╔═══════════════════════════════════════════════════════════════════════╗\n";
    cout << "║                       Demo Main Starts                                ║\n";
    cout << "╚═══════════════════════════════════════════════════════════════════════╝\n" << RESET << "\n";

    typewriterEffect(GREEN "\nThe journey begins...\n" RESET, 100);
    this_thread::sleep_for(chrono::milliseconds(500));   // Pause for effect

    typewriterEffect(YELLOW "Answer the call.\n" RESET, 100);
    this_thread::sleep_for(chrono::milliseconds(500));   // Pause for effect

    typewriterEffect(RED "Destiny awaits...\n" RESET, 100);

    return 0;
}
*/

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
// #include "LegionFactory.h"
// #include "RiverbankFactory.h"
// #include "WoodlandFactory.h"
// #include "OpenFieldFactory.h"
// #include "LegionUnit.h"
// #include "Infantry.h"
// #include "Cavalry.h"
// #include "Artillery.h"
// #include "BattleStrategy.h"
// #include "Ambush.h"
// #include "Flanking.h"
// #include "Fortification.h"
// #include "TacticalPlanner.h"
// #include "WarArchives.h"

using namespace std;

// ANSI escape codes for colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"

// Function to simulate typing effect
void typewriterEffect(const string &text, int delay = 30) {
    for (const char &c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

// Function to display progress bar
// void displayProgressBar(const string &task, int length = 50) {
//     cout << BOLD << GREEN << task << RESET << "\n";
//     cout << "[";
//     for (int i = 0; i < length; ++i) {
//         cout << "-";
//         this_thread::sleep_for(chrono::milliseconds(20));
//     }
//     cout << "] 100%\n\n";
// }


void showProgressBar(int duration) {
    const int barWidth = 100;
    for (int i = 0; i <= barWidth; ++i) {
        std::cout << RED << BOLD << "\r[";
        int pos = barWidth * i / duration;
        for (int j = 0; j < barWidth; ++j) {
            if (j < pos)
                std::cout << "\u25CF";
            else
                std::cout << ".";
        }
        std::cout << "] " << (i * 100 / barWidth) << " %" << RESET;
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << std::endl;
}

int main() {
    // Introduction with typewriter effect
        // Top border
        cout << endl << endl << RESET << endl;
    typewriterEffect(RED BOLD "╔═══════════════════════════════════════════════════════════════════════╗\n");
    
    // Middle text
    typewriterEffect("║                      Welcome to CALL OF DESTINY...                    ║\n");
    
    // Bottom border
    typewriterEffect("╚═══════════════════════════════════════════════════════════════════════╝\n" RESET);
    
    cout << endl << endl << YELLOW <<  BOLD << "Let the game begin..." << RESET << endl;
    cout << endl << endl << YELLOW <<  BOLD << "Loading....." << RESET << endl;
    cout << endl << endl;

    showProgressBar(100);
    this_thread::sleep_for(chrono::milliseconds(500));
    typewriterEffect(GREEN "\nInitializing Legion Factories...\n" RESET, 100);
    this_thread::sleep_for(chrono::milliseconds(500));
    
    // Display progress bar
    cout << BOLD << GREEN << "Loading Legion Units..." << RESET << "\n";;

    // Initialize the factories
    /*RiverbankFactory riverbankFactory;
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

    // Display unit stats with a decorative border
    printWithBorder("Displaying Unit Stats");
    riverbankInfantry->displayUnitStats("Riverbank Infantry");
    riverbankCavalry->displayUnitStats("Riverbank Cavalry");
    riverbankArtillery->displayUnitStats("Riverbank Artillery");

    woodlandInfantry->displayUnitStats("Woodland Infantry");
    woodlandCavalry->displayUnitStats("Woodland Cavalry");
    woodlandArtillery->displayUnitStats("Woodland Artillery");

    openFieldInfantry->displayUnitStats("Open Field Infantry");
    openFieldCavalry->displayUnitStats("Open Field Cavalry");
    openFieldArtillery->displayUnitStats("Open Field Artillery");
*/
    // Set up strategies
    typewriterEffect(YELLOW "\nSetting up battle strategies...\n" RESET, 100);
    /*
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
    typewriterEffect(MAGENTA "\nExecuting strategies...\n" RESET, 100);
    tacticalPlanner.executeStrategies();

    // Retrieve and display best strategy based on performance
    BattleStrategy* bestStrategy = tacticalPlanner.getBestStrategy();
    printWithBorder("Best Strategy: " + bestStrategy->getName());

    // Display War Archives
    typewriterEffect(BLUE "\nRetrieving War Archives...\n" RESET, 100);
    WarArchives warArchives;
    warArchives.displayArchives();
    */

    // Clean up dynamically allocated memory
    /*
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
    */
    return 0;
}


