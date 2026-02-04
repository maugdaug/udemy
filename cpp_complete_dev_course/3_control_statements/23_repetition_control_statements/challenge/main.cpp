#include <iostream>


int main() {
    int input;
    int total = 0;

    do {
        std::cout << "Enter int (negative to quit): " << std::endl;
        std::cin >> input;
        total += input;
        std::cout << "Current total = " << total << std::endl;
    } while (input > 0);

    std::cout << "Negative input detected. Total = " << total << std::endl;

    return 0;
}