#include <iostream>

void changeNum1(int input);     // pass by value, creates a copy
void changeNum2(int& input);    // & means pass by reference
                                // & = reference declarator

int main() {
    int num = 20;

    std::cout << "Before1: " << num << std::endl;
    changeNum1(num);
    std::cout << "After1: " << num << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    std::cout << "Before2: " << num << std::endl;
    changeNum2(num);
    std::cout << "After2: " << num << std::endl;

    return 0;
}


void changeNum1(int input) {
    input = 100;

    std::cout << "During1: " << input << std::endl;
}

void changeNum2(int& input) {
    input = 100;

    std::cout << "During2: " << input << std::endl;
}