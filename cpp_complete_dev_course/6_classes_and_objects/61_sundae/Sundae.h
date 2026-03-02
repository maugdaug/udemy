#ifndef SUNDAE_H
#define SUNDAE_H

#include <string>
#include <vector>

class Sundae {
    public:
        Sundae(std::string flavor);
        void addTopping(std::string topping);
        std::string getFlavor() const;
        std::vector<std::string> getToppings() const;
        void printSundae();
        
    private:
        std::string flavor;
        std::vector<std::string> toppings;
};

#endif