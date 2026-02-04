#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(nullptr));

    int roll;

    for (int i=0; i<10; i++) {
        roll = rand() % 6 + 1;
        std::cout << roll << std::endl;
    }



    return 0;
}