#include <iostream>

void threeTimesN(double input, double& output);

int main() {
    double input = 420.69;
    double output;

    threeTimesN(input, output);

    std::cout << output << std::endl;

    return 0;
}

void threeTimesN(double input, double& output) {
    output = input * 3;
}