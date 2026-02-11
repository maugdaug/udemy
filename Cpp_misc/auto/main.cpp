#include <iostream>
#include <typeinfo>

int main() {
    int a = 10, b = 20;
    auto sum = a + b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Sum type: " << typeid(sum).name() << std::endl;

    double x = 1.2, y = 3.4;
    auto sum2 = x + y;
    std::cout << "Sum2: " << sum2 << std::endl;
    std::cout << "Sum2 type: " << typeid(sum2).name() << std::endl;

    return 0;
}