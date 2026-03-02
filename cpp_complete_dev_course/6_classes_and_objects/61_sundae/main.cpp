#include "Sundae.h"
// #include <iostream>

int main() {
    Sundae chocSun("Chocolate");

    chocSun.addTopping("Oreo");
    chocSun.addTopping("Peanuts");
    chocSun.addTopping("Marshmellow");

    chocSun.printSundae();

    // std::cout << "test: " << chocSun.getToppings();

    return 0;
}