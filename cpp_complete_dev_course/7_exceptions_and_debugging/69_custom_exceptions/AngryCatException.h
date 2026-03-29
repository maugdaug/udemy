#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAR_EXCEPTION_H

#include <stdexcept>

// The : below is for inheritance!
class AngryCatException : public std::runtime_error {
    public:
        AngryCatException() : std::runtime_error("Made kitty angry!") {
            ;
        }
        AngryCatException(std::string warning) : std::runtime_error(warning) {
            ;
        }

};

#endif