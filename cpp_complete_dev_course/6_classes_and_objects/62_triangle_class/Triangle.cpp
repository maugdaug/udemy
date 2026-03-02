#include <iostream>
#include <cmath>
#include "Triangle.h"

Triangle::Triangle() {
    sideA = 1;
    sideB = 1;
    sideC = 1;
}

Triangle::Triangle(double a, double b, double c) {
    this->sideA = a;
    this->sideB = b;
    this->sideC = c;
}

double Triangle::getSideA() const {
    return sideA;
}

double Triangle::getSideB() const {
    return sideB;
}

double Triangle::getSideC() const {
    return sideC;
}

void Triangle::setSideA(double a) {
    this->sideA = a;
}

void Triangle::setSideB(double b) {
    this->sideB = b;
}

void Triangle::setSideC(double c) {
    this->sideC = c;
}

bool Triangle::isValid() const{
    if (sideA + sideB > sideC 
        && sideA + sideC > sideB
        && sideB + sideC > sideA) {
        return true;
    }
    else {
        return false;
    }
}

double Triangle::perimeter() const{
    return sideA + sideB + sideC;
}

double Triangle::area() const{
    double s = (sideA + sideB + sideC) / 2;
    double A = std::sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
    return A;
}

void Triangle::printTriangle() const {
    std::cout << "\nSide A: " << getSideA() << "\nSide B: " << getSideB()
            << "\nSide C: " << getSideC() << "\nIs valid: " << isValid()
            << "\nPerimeter: " << perimeter() << "\nArea: " << area()
            << std::endl;
}