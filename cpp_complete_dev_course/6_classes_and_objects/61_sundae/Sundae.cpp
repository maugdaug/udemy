#include <iostream>
#include "Sundae.h"

Sundae::Sundae(std::string flavor) {
    this->flavor = flavor;
}

void Sundae::addTopping(std::string topping) {
    toppings.push_back(topping);
}

std::string Sundae::getFlavor() const {
    return flavor;
}

std::vector<std::string> Sundae::getToppings() const {
    return toppings;
}

void Sundae::printSundae() {
    std::cout << "This " << getFlavor() << " sundae has the following toppings: " << std::endl;
    // toppings = getToppings();
    for (std::string topping : toppings) {
        std::cout << "- " << topping << std::endl;
    }

    // std::cout << toppings << std::endl;
}