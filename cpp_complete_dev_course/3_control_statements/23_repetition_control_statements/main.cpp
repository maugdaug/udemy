#include <iostream>

int main() {

    // while
    int count = 0;
    while (count < 10) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }


    // do-while
    int counter2 = 100;
    do {
        std::cout << "Counter2: " << counter2 << std::endl;
        counter2++;
    } while (counter2 < 10);


    // for loop
    for (int i=0; i<10; i++) {
        std::cout << "i: " << i << std::endl;
    }

    // above is counter controlled repetition
    // below is sentinel controlled repetition

    int input;

    std::cout << "Enter positive integer (or negative to quit): " << std::endl;
    std::cin >> input;      // priming lead

    while (input >= 0) {
        std::cout << "You entered: " << input << std::endl;
        std::cout << "Enter another (negative to quit): " << std::endl;
        std::cin >> input;
    }

    return 0;
}