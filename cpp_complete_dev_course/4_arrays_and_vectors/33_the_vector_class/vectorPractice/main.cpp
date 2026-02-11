#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names;

    names.push_back("Mochi");
    names.push_back("Boba");
    names.push_back("Frodo");
    names.push_back("Sam");
    names.push_back("Cleo");

    for (std::string name : names) {
        std::cout << name << std::endl;
    }

    std::cout << std::endl;
    names.insert(names.begin()+2, "Tut");

    for (std::string name : names) {
        std::cout << name << std::endl;
    }

    std::cout << std::endl;
    names.pop_back();

    // for (std::string name : names) {
    //     std::cout << name << std::endl;
    // }

    // using the amersand is "cosidered better"
    // avoids creating a copy of name, is more efficient
    for (std::string& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}