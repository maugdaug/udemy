#include <iostream>

int main() {
    int someInt = 150;
    int* somePtr = &someInt;

    std::cout << "someInt: " << someInt << std::endl;
    std::cout << "somePtr: " << somePtr << std::endl;
    std::cout << "dereferenced: " << *somePtr << std::endl;

    return 0;
}