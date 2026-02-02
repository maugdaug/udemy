#include <iostream>
#include <string>

int main() {
    std::string fullName;
    std::string location;
    double initialScore;

    std::cout << "Enter full name: " << std::endl;
    // std::cin.get();      // I guess we don't need this becuase we aren't asking for any non-strings first?
    std::getline(std::cin, fullName);

    std::cout << "Enter location: " << std::endl;
    // std::cin.get();
    std::getline(std::cin, location);

    std::cout << "Enter initial score: " << std::endl;
    std::cin >> initialScore;

    std::cout << "You are " << fullName << " and you are at " << location << std::endl;
    std::cout << "Your new score is " << (initialScore += 5) << std::endl;

    return 0;
}