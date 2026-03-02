#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle r1;
    Rectangle r2(5.0, 2.0);

    std::cout << "R1 area: " << r1.area() << std::endl;
    std::cout << "R2 area: " << r2.area() << std::endl;

    r1.setLength(22);
    r1.setWidth(12);

    std::cout << "R1 length: " << r1.getLength() << std::endl;
    std::cout << "R1 width: " << r1.getWidth() << std::endl;
    std::cout << "R1 area: " << r1.area() << std::endl;
    std::cout << "R1 perimeter: " << r1.perimeter() << std::endl;

    return 0;
}


/*
    UML class diagram
    [class name]
    [data members / fields]
    [member functions / methods]
*/