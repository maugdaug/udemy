#include <iostream>

double square(double input);

int main() {
    std::cout << square(12) << std::endl;

    return 0;
}

double square(double input) {
    return input * input;
}