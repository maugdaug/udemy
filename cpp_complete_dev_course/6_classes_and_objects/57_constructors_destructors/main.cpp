#include <iostream>
#include <string>
#include "House.h"


int main() {

    House myHouse;
    House yourHouse;
    House newHouse(5,6,"blue");

    std::cout << "Before calling any setters..." << std::endl;
    myHouse.print();

    myHouse.setNumStories(3);
    myHouse.setNumWindows(69);
    myHouse.setColor("rainbow");

    yourHouse.setNumStories(2);
    yourHouse.setNumWindows(420);
    yourHouse.setColor("lol");

    std::cout << "After setters..." << std::endl;

    myHouse.print();
    yourHouse.print();
    newHouse.print();
    
    return 0;
}
