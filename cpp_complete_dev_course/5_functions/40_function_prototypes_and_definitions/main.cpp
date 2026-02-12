#include <iostream>

void printSomething();      // function prototype

int main() {
    printSomething();       // call or invocation

    return 0;
}

void printSomething() {     // function definition
    std::cout << "Something." << std::endl;

    return 0;
}