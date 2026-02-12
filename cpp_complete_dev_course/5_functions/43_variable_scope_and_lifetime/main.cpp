#include <iostream>

void someFunction(int aParam);

double myGlobalDub = 3.14159;

int main() {
    int localToMain = 20;

    std::cout << "Local to main: " << localToMain << std::endl;
    std::cout << "Global dub (main): " << myGlobalDub << std::endl;

    someFunction(25);
    someFunction(28);
    someFunction(32);

    // std::cout << myLocalInt << std::endl;

    return 0;
}


void someFunction(int aParam) {
    int myLocalInt = 100;
    myLocalInt++;

    static int myStatic = 500;
    myStatic++;

    myGlobalDub++;

    std::cout << "\nLocal num: " << myLocalInt << std::endl;
    std::cout << "Parameter: " << aParam << std::endl;
    std::cout << "Global dub (someFunc): " << myGlobalDub << std::endl;
    std::cout << "myStatic: " << myStatic << std::endl;

    // localToMain++;
}