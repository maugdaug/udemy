#include <iostream>

int counter = 0;

void modifyGlobal();

int main() {

    std::cout << counter << std::endl;
    for (int i=0; i<100; i++) {
        modifyGlobal();
    }
    std::cout << counter << std::endl;

    return 0;
}

void modifyGlobal() {
    counter++;
}