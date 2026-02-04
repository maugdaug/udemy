#include <iostream>

int main() {
    int count = 0;

    while (count <= 10) {
        if (count == 5) {   
            count++;
            // continue;   // skip 5
            break;      // stop at 5
        }

        std::cout << count << std::endl;
        count++;
    }

    return 0;
}