#include <iostream>
#include <stdexcept>
#include <string>

std::string getMonthName(int monthNum);

int main() {

    try {
        std::cout << getMonthName(5) << std::endl;
        std::cout << getMonthName(12) << std::endl;
        std::cout << getMonthName(0) << std::endl;
    }
    catch (std::out_of_range& err) {
        std::cout << "Error caught: " << err.what() << std::endl;
    }

    return 0;
}

std::string getMonthName(int monthNum) {
    switch (monthNum) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            throw std::out_of_range("Month must be between 1 and 12.");
    }
}