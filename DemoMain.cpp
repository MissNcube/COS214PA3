#include <iostream>
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
   

