#include <iostream>

int main() {
    /*
        This is a multi-line comment
        Conventionally, variables are named with camelCase.
        For constants, we use UPPER_SNAKE_CASE.
    */
    const double MY_PI = 3.14159265359;

    // MY_PI = 3.1;      // throws error and won't compile

    std::cout << MY_PI << std::endl;

    return 0;
}