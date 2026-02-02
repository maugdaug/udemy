#include <iostream>

int main() {
    bool isRaining = true;
    bool isSunny = false;
    bool isWarm = false;

    std::cout << std::boolalpha;     // prints booleans as "true" or "false"
    // std::cout << std::noboolalpha;        // prints booleans as "1" or "0" (already the default)

    std::cout << isRaining << std::endl;
    std::cout << isSunny << std::endl;
    std::cout << isWarm << std::endl;

    return 0;
}