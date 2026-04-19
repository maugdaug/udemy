#include <iostream>

int main() {
    // 'new' results in variable being stored in the heap instread of the stack
    int* somePtr = new int(123);

    std::cout << *somePtr << std::endl;

    delete somePtr;
    somePtr = nullptr;

    return 0;
}