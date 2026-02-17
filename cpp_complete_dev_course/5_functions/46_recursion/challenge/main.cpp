#include <iostream>

int factorial(int num);

int main() {

    int result = factorial(6);
    std::cout << result << std::endl;

    return 0;
}

int factorial(int num) {
    if (num>1) {
        return num * factorial(num - 1);
    }

    return num;
}