#include <iostream>

int main() {

    int myInt;      // declaration
    myInt = 15;     // initialization
    // "myInt" = identifier

    double myDouble = 3.1415926;

    // other ways to initialize data
    int x = 10;     // copy initialization (assignment)
    int y(10);      // direct initialization
    int z{ 10 };    // uniform (brace) initialization
    // in modern C++, uniform initialization is recommended

    int ok = 3.14;  // this will be truncated to 3 with a warning
    int bad{ 3.14 };    // this will not compile and will throw an error
                        // narrowing conversion error

    double pi = 3;      // widening conversion

    // modern convention for variable names is "camel case"...
    double stateTaxRate = 0.06;

    // there is also "underscore case", common in python. e.g. state_tax_rate

    std::cout << myInt << std::endl;
    std::cout << myDouble << std::endl;

    return 0;
}