#include "House.h"
#include <iostream>

House::House() {        // "no-parameter constructor" or "no arg constructor"
    this->numStories = 2;
    this->numWindows = 10;
    this->color = "gray";
}//end ctor         // "ctor" is lingo for constructor

House::~House() {
    std::cout << "The " << color << " house with " << numStories << " stories and " 
                << numWindows << " windows is being destroyed!" << std::endl;
}

House::House(int stories, int windows, std::string col) {
    this->numStories = stories;
    this->numWindows = windows;
    this->color = col;
}

// setter methods are also called "mutators"
void House::setNumStories(int numStories) {
    this->numStories = numStories;      // "this->" is referring to the numStories in private
                                        // this object's copy of numStories is set to the input parameter
}

void House::setNumWindows(int numWindows) {
    this->numWindows = numWindows;      // "this->" prevents name shadowing, where the parameter
}                                       // hides the data member (aka field)

void House::setColor(std::string color) {
    this->color = color;                // "this->" is a pointer
}

// "getters" are also called "accessors"
int House::getNumStories() const {     // const means that we're not changing any of the data here
    return numStories;
}

int House::getNumWindows() const {     // "const correctness"
    return numWindows;
}

std::string House::getColor() const {
    return color;
}

void House::print() const {
    std::cout << "This house is " << color
                << " and has " << numStories
                << " stories and " << numWindows
                << " windows." << std::endl;
}