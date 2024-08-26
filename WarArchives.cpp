#include "WarArchives.h"
#include <iostream>

WarArchives::WarArchives() {
    // Constructor
}

void WarArchives::addMemento(TacticalMemento* memento) {
    savedMementos.push_back(memento);
}

TacticalMemento* WarArchives::getMemento(int index) {
    if (index >= 0 && index < savedMementos.size()) {
        return savedMementos[index];
    }
    return nullptr;
}

TacticalMemento* WarArchives::getBestPerformingStrategy() {
    if (savedMementos.empty()) return nullptr;
    
    TacticalMemento* bestMemento = savedMementos[0];
    double bestPerformance = getPerformanceMetric(bestMemento);

    for (auto& memento : savedMementos) {
        double performance = getPerformanceMetric(memento);
        if (performance > bestPerformance) {
            bestMemento = memento;
            bestPerformance = performance;
        }
    }

    return bestMemento;
}

void WarArchives::displayAllStrategies() {
    for (size_t i = 0; i < savedMementos.size(); ++i) {
        std::cout << "Strategy " << i + 1 << " performance: "
                  << getPerformanceMetric(savedMementos[i]) << std::endl;
    }
}

void WarArchives::display() {
    displayAllStrategies();
}

double WarArchives::getPerformanceMetric(TacticalMemento* memento) {
    if (memento) {
        return memento->getSavedPerformance();
    }
    return 0.0;
}

WarArchives::~WarArchives() {
    for (auto& memento : savedMementos) {
        delete memento;
    }
    savedMementos.clear();
}

void WarArchives::displayArchives() const {
    // Display stored strategies and their results
}
