#include <iostream>
#include <string>

int getResult(int num1, int num2);
std::string getResult(std::string str1, std::string str2);
int getResult(int input);

int main() {
    int resultNum = getResult(20, 30);
    std::string nameResult = getResult("Mochi", "Boba");
    int numCubed = getResult(8);

    std::cout << "Num result: " << resultNum << std::endl;
    std::cout << "Name result: " << nameResult << std::endl;
    std::cout << "Num cubed: " << numCubed << std::endl;

    return 0;
}

int getResult(int num1, int num2) {
    return num1 * num2;
}

std::string getResult(std::string str1, std::string str2) {
    return str1 + " " + str2;
}

int getResult(int input) {
    return input * input * input;
}