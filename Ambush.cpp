#include "Ambush.h"
#include <iostream>

void Ambush::engage() {
    std::cout << "Engaging in ambush strategy. Executing surprise attack!" << std::endl;
}

bool Ambush::requiresStealth() const {
    return true; // Ambush strategy typically requires stealth
}
