#include <iostream>
#include <array>

double arrayProduct(std::array<double, 6> arr);

int main() {
    std::array<double, 6> myArray{1.23,2.34,3.45,4.56,5.67,6.78};

    std::cout << arrayProduct(myArray) << std::endl;

    return 0;
}

double arrayProduct(std::array<double, 6> arr) {
    double product = 1;

    for (double i : arr) {
        product *= i;
    }

    return product;
}