#include <iostream>

int main() {
    int count = 0;

    while (count < 10) {
        if (count % 2 != 0) {
            count++;
            continue;
        }

        std::cout << count << std::endl;
        count++;
    }

    return 0;
}