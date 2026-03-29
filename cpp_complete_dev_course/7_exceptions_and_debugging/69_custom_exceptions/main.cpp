#include "AngryCatException.h"
#include <iostream>

void feedKitty(int numTreats);

int main() {
    int numTreats = 0;

    std::cout << "How many treats does kitty get? ";
    std::cin >> numTreats;

    try {
        feedKitty(numTreats);
    }
    catch(const AngryCatException& err) {
        std::cout << err.what() << std::endl;
    }

    return 0;
}

void feedKitty(int numTreats) {
    if (numTreats < 3) {
        throw AngryCatException();
    }
    else if(numTreats < 6) {
        throw AngryCatException("Fine, but more treats next time.");
    }

    std::cout << "Kitty is happy with " << numTreats << " treats." << std::endl;
}