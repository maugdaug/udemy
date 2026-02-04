#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    srand(time(nullptr));   // seeds random number generator (RNG) with current time

    int val1 = rand() % 10;     // random number from 0-9
    int val2 = rand() % 10 + 1;     // 1 - 10

    std::cout << val1 << std::endl;
    std::cout << val2 << std::endl;

    return 0;
}