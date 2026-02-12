#include <iostream>

void printHello();
void printNum(int a);
int giveMe10();
int addThese(int x, int y);

int main() {
    int x = 120;
    int y = 580;

    printHello();
    printNum(420);

    int someData = giveMe10();
    std::cout << someData << std::endl;

    int total = addThese(x, y);
    std::cout << total << std::endl;

    printNum(addThese(x, 50));

    return 0;
}

void printHello() {
    std::cout << "fuck you" << std::endl;
}

void printNum(int a) {
    std::cout << a << std::endl;
}

int giveMe10() {
    return 10;
}

int addThese(int x, int y) {
    return x + y;
}
