#include <iostream>

int main() {
    char subType;
    int numDevices;
    int monthlyFee;

    std::cout << "Which subscription type did you want? ";
    std::cin >> subType;

    if (subType == 'A' || subType == 'a') {
        std::cout << "Subscription A (Basic)" << std::endl;
        subType = 'a';
    }
    else if (subType == 'B' || subType == 'b') {
        std::cout << "Subscription B (Standard)" << std::endl;
        subType = 'b';
    }
    else if (subType == 'C' || subType == 'c') {
        std::cout << "Subscription C (Premium)" << std::endl;
        subType = 'c';
    }
    else {
        std::cout << "Invalid subscription type" << std::endl;
        return 0;
    }

    std::cout << "Enter number of devices: ";
    std::cin >> numDevices;
    
    if (subType == 'a') {
        monthlyFee = 9 + (numDevices - 1) * 6;
    }
    else if (subType == 'b') {
        monthlyFee = 14 + (numDevices - 3) * 4;
    }
    else if (subType == 'c') {
        monthlyFee = 20 + (numDevices - 5) * 2;
    }

    std::cout << "Monthly fee: " << monthlyFee << std::endl;

    return 0;
}