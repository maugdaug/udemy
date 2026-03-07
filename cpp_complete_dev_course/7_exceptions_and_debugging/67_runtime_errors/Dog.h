#ifndef DOG_H
#define DOG_H

#include <string>

class Dog {
    public:
        Dog(std::string breed);
        std::string getBreed();

    private:
        std::string breed;

};

#endif