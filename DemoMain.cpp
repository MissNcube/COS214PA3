#include <iostream>
#include <string>
#include <chrono>
#include <thread>

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
void typewriterEffect(const string &text, int delay = 50) {
    for (const char &c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
}

// Function to print "Call of Destiny" with effects
void printCallOfDestiny() {
    string title = "Call of Destiny";
    
    cout << BOLD << CYAN << "\n\n";
    typewriterEffect("███████████████████████████████████████████████████████████\n", 5);
    typewriterEffect("█─██▀███▀████▀███─▄██▀▄█▄─▀█▀─█▄─▄███▄─▀█▀─▄█─▄▄─█─▄▄─█▄─▄█\n", 5);
    typewriterEffect("█─██─██─████─████─███─███─█▄█─██─██▀██─█▄█─██─██─██─██─██─██\n", 5);
    typewriterEffect("█▄▄██▄▄█████▄▄███▄▄██▄▄██▄▄▄█▄▄▄█▄▄▄▄▄█▄▄▄█▄▄█▄▄▄▄█▄▄▄▄█▄▄▄█\n", 5);
    typewriterEffect("███████████████████████████████████████████████████████████\n", 5);
    cout << RESET << endl;
    
    this_thread::sleep_for(chrono::milliseconds(1000));  // Pause for effect

    typewriterEffect(GREEN "\nThe journey begins...\n" RESET, 100);
    this_thread::sleep_for(chrono::milliseconds(500));   // Pause for effect

    typewriterEffect(YELLOW "Answer the call.\n" RESET, 100);
    this_thread::sleep_for(chrono::milliseconds(500));   // Pause for effect

    typewriterEffect(RED "Destiny awaits...\n" RESET, 100);
}

int main() {
    // Start the Call of Destiny sequence
    printCallOfDestiny();
    
    // Additional demo code can follow here...

    return 0;
}


// #include <iostream>
// #include <chrono>
// #include <thread>

// #define GREEN   "\033[32m"
// #define YELLOW  "\033[33m"
// #define RED     "\033[31m"
// #define RESET   "\033[0m"

// int main() {
//     std::cout << "███████████████████████████████████████████████████████████" << std::endl;
//     std::cout << "█─██▀███▀████▀███─▄██▀▄█▄─▀█▀─█▄─▄███▄─▀█▀─▄█─▄▄─█─▄▄─█▄─▄█" << std::endl;
//     std::cout << "█─██─██─████─████─███─███─█▄█─██─██▀██─█▄█─██─██─██─██─██─██" << std::endl;
//     std::cout << "█▄▄██▄▄█████▄▄███▄▄██▄▄██▄▄▄█▄▄▄█▄▄▄▄▄█▄▄▄█▄▄█▄▄▄▄█▄▄▄▄█▄▄▄█" << std::endl;
//     std::cout << "███████████████████████████████████████████████████████████" << std::endl;

//     std::cout << GREEN << "\nThe journey begins..." << RESET << std::endl;
//     std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Pause for effect
//     std::cout << YELLOW << "Answer the call." << RESET << std::endl;
//     std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Pause for effect
//     std::cout << RED << "Destiny awaits..." << RESET << std::endl;

//     return 0;
// }
