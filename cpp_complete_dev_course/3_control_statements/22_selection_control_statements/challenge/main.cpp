#include <iostream>

int main() {
    char gender;
    int age;

    std::cout << "Please enter a gender: " << std::endl;
    std::cin >> gender;

    std::cout << "Please enter an age: " << std::endl;
    std::cin >> age;

    // if (gender == 'm' || gender == 'M') {
    //     std::cout << "Not eligible!" << std::endl;
    // }
    // else if (gender == 'f' || gender == 'F') {
    //     if (age >= 62) {
    //         std::cout << "Eligible!" << std::endl;
    //     }
    //     else {
    //         std::cout << "Not eligible!" << std::endl;
    //     }
    // }
    // else {
    //     std::cout << "Invalid response." << std::endl;
    // }

    if ((age >= 62) && (gender == 'f' || gender == 'F')) {
        std::cout << "Eligible!" << std::endl;
    }
    else {
        std::cout << "Not eligible!" << std::endl;
    }

    return 0;
}