#include <iostream>
#include <vector>

double average(double a, double b, double c);
double average2(std::vector<double> list);

int main() {

    std::vector<double> list;

    list.push_back(345.43);
    list.push_back(123.43);
    list.push_back(34.43);
    list.push_back(456.43);
    list.push_back(99.43);
    list.push_back(765.43);

    std::cout << average(123, 456, 69) << std::endl;
    std::cout << average2(list) << std::endl;

    return 0;
}

double average(double a, double b, double c) {
    return (a + b + c) / 3;
}

double average2(std::vector<double> list) {
    double sum = 0;
    for (double num : list) {
        sum += num;
    }
    return sum / list.size();
}