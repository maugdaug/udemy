#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names(5);

    names.at(0) = "Mochi";
    names.at(1) = "Boba";
    names.at(2) = "Penelope";
    names.at(3) = "Presto";
    names.at(4) = "Sam";

    for (std::string name : names) {
        std::cout << name << std::endl;
    }

    try {
        names.at(5) = "Frodo";
    }
    catch (const std::out_of_range& ex) {
        std::cout << "Caught an out_of_range exception: "
                << ex.what() << std::endl;
    }
    

    return 0;
}