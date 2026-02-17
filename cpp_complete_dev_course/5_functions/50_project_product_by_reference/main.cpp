#include <iostream>
#include <array>

double arrayProduct(std::array<double, 6> arr);
void arrayProduct(std::array<double, 6> arr, double& product);

int main() {
    std::array<double, 6> myArray{1.23,2.34,3.45,4.56,5.67,6.78};
    double result = 1;

    arrayProduct(myArray, result);

    std::cout << "result = " << result << std::endl;

    return 0;
}

double arrayProduct(std::array<double, 6> arr) {
    double product = 1;

    for (double i : arr) {
        product *= i;
    }

    return product;
}

void arrayProduct(std::array<double, 6> arr, double& product) {
    for (double i : arr) {
        product *= i;
    }
}