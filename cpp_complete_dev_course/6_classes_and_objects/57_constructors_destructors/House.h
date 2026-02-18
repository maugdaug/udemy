#ifndef HOUSE_H         // "include guards"
#define HOUSE_H         // prevents this file from being included more than once

#include <string>

class House {
    public:
        House();        // constructor
        // ~House();       // destructor
        virtual ~House() final;     // "virtual" protects against incomplete destruction when using inheritance
                                    // "final" prevents destructors from being overriden (optional)
        House(int stories, int windows, std::string col);
        // setter methods are also called "mutators"
        void setNumStories(int numStories);
        void setNumWindows(int numWindows);
        void setColor(std::string color);
        int getNumStories() const;
        int getNumWindows() const;
        std::string getColor() const;
        void print() const;

    private:
        int numStories;
        int numWindows;
        std::string color;
};

#endif