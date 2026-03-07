#include "Person.h"
#include <iostream>
#include <stdexcept>

Person::Person (std::string name) {
    // this->name = name;
    setName(name);
}

std::string Person::getName() const noexcept{
    return name;
}

void Person::setName(std::string name) {
    if (name == "Mochi") {
        throw std::runtime_error("You leave her out of this!");
    }
    else {
        std::cout << name << std::endl;
        this->name = name;
    }
}