#include <iostream>
#include <stdexcept>
#include "Person.h"
#include "Dog.h"

int main() {

    try {
        Person person1("Boba");
        Person person2("Frodo");
        // Person person3("Mochi");
        Dog poodle("Poodle");

        std::cout << person1.getName() << std::endl;
        std::cout << person2.getName() << std::endl;
        // std::cout << person3.getName() << std::endl;
    }
    catch (const std::runtime_error& err) {
        std::cout << err.what() << std::endl;
    }

    return 0;
}