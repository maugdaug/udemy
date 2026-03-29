#ifndef FUEL_LEVEL_CRITICAL_H
#define FUEL_LEVEL_CRITICAL_H

#include <stdexcept>

class FuelLevelCritical : public std::runtime_error {
    public:
        FuelLevelCritical() : std::runtime_error("Fuel below 10%!") {
            ;
        }
};

#endif