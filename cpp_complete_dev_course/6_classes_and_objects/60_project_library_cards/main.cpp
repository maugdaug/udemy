#include <iostream>
#include "LibraryCard.h"

int main() {
    LibraryCard card1("Mochi Boba");

    card1.checkoutBook();
    card1.checkoutBook();

    std::cout << card1.getCardholderName() << " has " 
                << card1.getBooksCheckedOut() << " books." 
                << std::endl;

    card1.returnBook();
    card1.returnBook();
    card1.returnBook();

    std::cout << card1.getCardholderName() << " has " 
                << card1.getBooksCheckedOut() << " books." 
                << std::endl;

    return 0;
}


/*
    LibraryCard

    - cardHolderName : string
    - booksCheckedOut : int

    + LibraryCard(cardholderName : string)
    + checkoutBook() : void
    + returnBook() : void
    + getCardholderName() : string
    + getBooksCheckedOut() : int
*/