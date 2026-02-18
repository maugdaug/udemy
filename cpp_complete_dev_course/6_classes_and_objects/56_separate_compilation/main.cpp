#include <iostream>
#include <string>
#include "House.h"

int main() {

    House myHouse;
    House yourHouse;

    myHouse.setNumStories(3);
    myHouse.setNumWindows(69);
    myHouse.setColor("rainbow");

    yourHouse.setNumStories(2);
    yourHouse.setNumWindows(420);
    yourHouse.setColor("lol");

    myHouse.print();
    yourHouse.print();
    
    return 0;
}