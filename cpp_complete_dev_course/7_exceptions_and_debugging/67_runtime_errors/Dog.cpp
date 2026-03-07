#include "Dog.h"
#include <iostream>
#include <stdexcept>

Dog::Dog (std::string breed) {
    this->breed = breed;

    if (breed == "Poodle") {
        throw std::runtime_error("No Poodles.");
    }
}

std::string Dog::getBreed() {
    return breed;
}

