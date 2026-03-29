#include <iostream>
#include "FuelLevelCritical.h"

void checkFuel (int fuel);

int main() {
    int fuelLevel;

    std::cout << "Enter current fuel level (0-100): ";
    std::cin >> fuelLevel;

    try {
        checkFuel(fuelLevel);
    }
    catch (const FuelLevelCritical& err) {
        std::cout << "Error! " << err.what() << std::endl;
    }

    return 0;
}

void checkFuel (int fuel) {
    if (fuel < 0) {
        std::cout << "Invalid number. Cannot have negative fuel." << std::endl;
    }
    else if (fuel < 10) {
        throw FuelLevelCritical();
    }
    else if (fuel <= 100) {
        std::cout << "Fuel level: " << fuel << std::endl;
    }
    else {
        std::cout << "Invalid number, fuell must be between 0-100" << std::endl;
    }
}