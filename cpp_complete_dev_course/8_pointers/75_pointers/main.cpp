/*
new = allocates memory to the heap
delete = deletes previously allocated dynamic memory
nullptr = safe default value to indicate a pointer points to nothing
memory leak = happens when you forget to clear dynamically allocated memory
dangling pointer = happens when you use a pointer that's data has been deleted
*/

#include <iostream>

int main() {
    int someInt = 150;
    int* somePtr = &someInt;
    // "integer pointer named somePtr is set to the address of someInt"
    int y = *somePtr;
    // "integer named y is set to the value stored at address somePtr"

    double myDouble = 3.14;
    double* pDouble = &myDouble;

    std::cout << "someInt: " << someInt << std::endl;
    std::cout << "somePtr: " << somePtr << std::endl;
    std::cout << "dereferenced: " << *somePtr << std::endl;

    *somePtr = 200;

    std::cout << "someInt is now: " << someInt << std::endl;

    std::cout << "myDouble: " << myDouble << std::endl;
    std::cout << "pDouble: " << pDouble << std::endl;
    std::cout << "dereferenced: " << *pDouble << std::endl;

    return 0;
}