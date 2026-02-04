#include <iostream>

int main() {
    char grade;

    std::cout << "Enter your letter grade: " << std::endl;
    std::cin >> grade;

    switch (grade) {
        case 'A':
        case 'a':
            std::cout << "Great job!" << std::endl;
            break;
        case 'B':
        case 'b':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
        case 'c':
            std::cout << "You can do better!" << std::endl;
            break;
        case 'D':
        case 'd':
            std::cout << "Better luck next time..." << std::endl;
            break;
        case 'F':
        case 'f':
            std::cout << "Womp womp :(" << std::endl;
            break;
        default:
            std::cout << "Invalid entry." << std::endl;
    }

    return 0;
}


/*
    Statement       Ends in a ; and performs an action
    Declaration     Introduces a name or variable
    Expression      Computes a value
*/