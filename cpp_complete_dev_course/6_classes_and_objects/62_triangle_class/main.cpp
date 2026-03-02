#include <iostream>
#include "Triangle.h"

int main() {
    Triangle tri1;
    Triangle tri2(3.0, 4.0, 5.0);
    Triangle triBad(100.0, 4.0, 5.0);

    tri1.printTriangle();
    tri2.printTriangle();
    triBad.printTriangle();

    return 0;
}