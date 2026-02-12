#include <iostream>
#include <array>

int main() {
    const int NUM_TEMPS = 7;
    std::array<float, NUM_TEMPS> inputF{};
    std::array<float, NUM_TEMPS> outputC{};

    for (int i=0; i<NUM_TEMPS; i++) {
        std::cout << "Enter temp " << i << " in degrees F: " << std::endl;
        std::cin >> inputF[i];
    }

    std::cout << std::endl;
    std::cout << "F\t|\tC" << std::endl;

    for (int i=0; i<NUM_TEMPS; i++) {
        outputC[i] = (inputF[i] - 32) * 5 / 9;
        std::cout << inputF[i] << "\t|\t" << outputC[i] << std::endl;
    }

    return 0;
}