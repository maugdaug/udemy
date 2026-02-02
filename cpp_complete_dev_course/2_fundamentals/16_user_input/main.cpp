#include <iostream>
#include <string>

int main() {
    int age;
    std::string fullName;

    std::cout << "Please enter your age: " << std::endl;
    std::cin >> age;

    std::cout << "Your age: " << age << std::endl;

    std::cout << "Please enter your full name: " << std::endl;
    std::cin.get();     // We need this otherwise fullName will be a newline character
    std::getline(std::cin, fullName);

    std::cout << "Your name is: " << fullName << std::endl;

    return 0;
}