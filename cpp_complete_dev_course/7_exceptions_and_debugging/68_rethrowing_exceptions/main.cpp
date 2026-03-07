#include <iostream>
#include <stdexcept>

void processPositive(int num);
void doSomething(int num);

int main() {
    int input;

    try {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> input;

        doSomething(input);
        std::cout << "number processed successfully!" << std::endl;
    }
    catch (const std::invalid_argument& err) {
        std::cout << "Main detected an error..." << std::endl;
        std::cout << err.what() << std::endl;
    }
    catch (const std::out_of_range& err) {
        std::cout << "(main) number is too high..." << std::endl;
        std::cout << err.what() << std::endl;
    }

    return 0;
}

void processPositive(int num) {
    std::cout << "processPositive..." << std::endl;

    if (num >= 0 && num < 100) {
        std::cout << "num is in range!" << std::endl;
    }
    else if (num < 0) {
        throw std::invalid_argument("Negative number detected");
    }
    else {
        throw std::out_of_range("Number is out of range");
    }
}


void doSomething(int num) {
    try {
        processPositive(num);
        std::cout << "doSomething was able to process num" << std::endl;
    }
    catch (const std::invalid_argument& err) {
        std::cout << "doSomething encountered a problem" << std::endl;
        throw;
    }
}