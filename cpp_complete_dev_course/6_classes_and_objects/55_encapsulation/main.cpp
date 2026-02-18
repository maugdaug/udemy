#include <iostream>
#include <string>

class House {
    public:

        // setter methods are also called "mutators"
        void setNumStories(int numStories) {
            this->numStories = numStories;      // "this->" is referring to the numStories in private
                                                // this object's copy of numStories is set to the input parameter
        }

        void setNumWindows(int numWindows) {
            this->numWindows = numWindows;      // "this->" prevents name shadowing, where the parameter
        }                                       // hides the data member (aka field)

        void setColor(std::string color) {
            this->color = color;                // "this->" is a pointer
        }

        // "getters" are also called "accessors"
        int getNumStories() const {     // const means that we're not changing any of the data here
            return numStories;
        }

        int getNumWindows() const {     // "const correctness"
            return numWindows;
        }

        std::string getColor() const {
            return color;
        }

    private:
        int numStories;
        int numWindows;
        std::string color;
};

void printHouseData(const House& object);       // const prevents us from being able to change the data
                                                // "&" lets us pass by reference instead of copying the data

int main() {

    House myHouse;
    House yourHouse;

    myHouse.setNumStories(3);
    myHouse.setNumWindows(69);
    myHouse.setColor("rainbow");

    yourHouse.setNumStories(2);
    yourHouse.setNumWindows(420);
    yourHouse.setColor("lol");

    // std::cout << "My house is " << myHouse.getColor()
    //             << " and has " << myHouse.getNumStories()
    //             << " stories and " << myHouse.getNumWindows()
    //             << " windows." << std::endl;

    // std::cout << "Your house is " <<yourHouse.getColor()
    //             << " and has " <<yourHouse.getNumStories()
    //             << " stories and " <<yourHouse.getNumWindows()
    //             << " windows." << std::endl;

    printHouseData(myHouse);
    printHouseData(yourHouse);
    
    return 0;
}

void printHouseData(const House& object) {
    std::cout << "This house is " << object.getColor()
                << " and has " << object.getNumStories()
                << " stories and " << object.getNumWindows()
                << " windows." << std::endl;
}