#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> someVec;
    std::vector<std::string> anotherVec(3);

    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);

    for (int i : someVec) {
        std::cout << i << std::endl;
    }
    std::cout << "Size: " << someVec.size() << std::endl;

    std::cout << std::endl;

    anotherVec[0] = "Mochi";
    anotherVec[1] = "Boba";
    anotherVec[2] = "Frodo";

    anotherVec.push_back("Sam");

    for (std::string name : anotherVec) {
        std::cout << name << std::endl;
    }

    std::cout << std::endl;
    
    anotherVec.pop_back();
    anotherVec.insert(anotherVec.begin(), "Avery");

    for (std::string name : anotherVec) {
        std::cout << name << std::endl;
    }

    return 0;
}


/*
Vectors can change size as needed
Arrays are a fixed size

Vector class functions
    front()         returns first element
    back()          returns last element
    pop_back()      removes the last element
    insert()        inserts an element at a specified location (requires iterator)
    begin()         returns an iterator to the first element?
*/