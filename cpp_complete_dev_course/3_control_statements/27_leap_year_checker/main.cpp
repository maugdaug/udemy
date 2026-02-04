#include <iostream>

int main() {
    int startYear;
    int endYear;

    std::cout << "Enter starting year: ";
    std::cin >> startYear;
    std::cout << "Enter ending year: ";
    std::cin >> endYear;

    if (endYear <= startYear) {
        std::cout << "Invalid input. Start year must be less than end year." << std::endl;
        return 0;
    }

    for (int i = startYear; i <= endYear; i++) {
        if (i % 4 == 0 && i % 100 != 0) {
            if (i % 400 == 0) {
                std::cout << i << "   N" << std::endl;
            }
            else {
                std::cout << i << " Y" << std::endl;
            }
        }
        else {
            std::cout << i << "   N" << std::endl;
        }
    }

    return 0;
}