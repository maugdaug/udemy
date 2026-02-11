#include <iostream>
#include <array>

int main() {
    const int ARRAY_SIZE = 10;
    std::array<int, ARRAY_SIZE> myArray;

    for (int i=0; i<myArray.size(); i++) {
        myArray[i] = 2*i;
    }

    for (int element : myArray) {
        std::cout << element << std::endl;
    }

    return 0;
}