#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    std::vector<int> myNums;

    // length error

    // myNums.resize(myNums.max_size() + 1);
    // std::cout << "big vector" << std::endl;

    try {
        myNums.resize(myNums.max_size() + 1);
        std::cout << "big vector" << std::endl;
    }
    catch (const std::length_error& ex) {
        std::cerr << "Caught a length_error exception: "
                << ex.what() << std::endl;
    }

    return 0;
}