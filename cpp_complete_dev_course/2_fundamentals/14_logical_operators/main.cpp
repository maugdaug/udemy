#include <iostream>

int main() {
    bool isRaining = true;
    bool isWarm = true;

    std::cout << std::boolalpha;

    std::cout << "isRaining AND isWarm: " << (isRaining && isWarm) << std::endl;
    std::cout << "isRaining OR isWarm: " << (isRaining || isWarm) << std::endl;
    std::cout << "NOT isRaining: " << (!isRaining) << std::endl;

    return 0;
}