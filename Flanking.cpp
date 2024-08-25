#include "Flanking.h"
#include <iostream>
using namespace std;

void Flanking::engage() {
    std::cout << "Engaging in Flanking strategy. Attack fromm the sides & rear!" << std::endl;
}

bool Flanking::requiresStealth() const {
    return true; // Flanking might require stealth
}
