#include <iostream>
#include <stdexcept>

int imBroken(int b, int c);

int main() {
    int a;

    // int x = imBroken(10, 5);
    // std::cout << x << std::endl;

    // int y = imBroken(10, 0);
    // std::cout << y << std::endl;

    try {
        int x = imBroken(10, 5);
        std::cout << x << std::endl;

        int y = imBroken(10, 0);
        std::cout << y << std::endl;
    }
    catch (std::invalid_argument& err) {
        std::cout << "Exception caught: " << err.what() << std::endl;
    }

    return 0;
}

int imBroken(int b, int c) {
    int result = 0;

    if (c != 0) {
        result = b/c;
    }
    else {
        throw std::invalid_argument("Cannot divide by 0!");
    }

    return result;

}