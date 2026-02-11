#include <iostream>
#include <string>

int main() {
    std::string names[4] = {"Bob", "Ed", "Vlad", "Mochi"};

    // for (int i = 0; i < 4; i++) {
    //     std::cout << names[i] << std::endl;
    // }

    // range-based for loop, enhanced for loop, for-each loop
    // cannot go out of range
    // for (std::string name : names) {
    //     std::cout << name << std::endl;
    // }

    // "modern" C++
    for (auto name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}