#include <iostream>
#include <iomanip>

int main() {
    double subTotal;
    double tipPercentage;

    std::cout << std::fixed << std::setprecision(2);        // formats to x.xx

    std::cout << "Enter bill subtotal: $" << std::endl;
    std::cin >> subTotal;
    
    std::cout << "Enter tip percentage: " << std::endl;
    std::cin >> tipPercentage;

    std::cout << "Your tip is: $" << (subTotal * tipPercentage) << std::endl;
    std::cout << "Your total is: $" << (subTotal * (1 + tipPercentage)) << std::endl;

    return 0;
}