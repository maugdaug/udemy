#include <iostream>

void countDownFrom(int num);
int sumValues(int num);

int main() {

    countDownFrom(10);
    int totalSum = sumValues(10);

    std::cout << "\n" << totalSum << std::endl;

    return 0;
}

void countDownFrom(int num) {
    if (num>=0) {
        std::cout << num << std::endl;
        countDownFrom(num-1);
    }
}

int sumValues(int num) {
    if (num>1) {
        return num + sumValues(num - 1);
    }
    return num; // base case
}