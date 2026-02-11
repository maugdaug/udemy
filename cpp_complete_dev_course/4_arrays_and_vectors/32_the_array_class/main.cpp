#include <iostream>
#include <array>

int main() {
    // create the array class/object
    // std::array<int, 5> myIntArray{0, 0, 0, 0, 0};
    // std::array<int, 5> myIntArray{};    // assigns all 0's
    std::array<int, 5> myIntArray{1, 2};    //remaining values are all 0

    for (int a : myIntArray) {
        std::cout << a << std::endl;
    }

    std::cout << "Array size = " << myIntArray.size() << std::endl;

    return 0;
}


/*
If we print the array before assigning values, we have allocated the array
but have not yet populated it, and we get garbage data.
-11840
32767
-137661553
32767
-135812528

*/