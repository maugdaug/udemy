#include <iostream>

int main() {
    int myNums[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    std::cout << myNums[0][2] << std::endl;

    std::cout << std::endl;

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << myNums[row][col] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int row = 1; row >=0; row--) {
        for (int col = 2; col >= 0; col--) {
            std::cout << myNums[row][col] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}