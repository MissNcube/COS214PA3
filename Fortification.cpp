#include "Fortification.h"
#include <iostream>

void Fortification::engage() {
    std::cout << "Engaging in fortification strategy. Strengthening defenses!" << std::endl;
}

bool Fortification::requiresStealth() const {
    return false; // Fortification does not require stealth
}
