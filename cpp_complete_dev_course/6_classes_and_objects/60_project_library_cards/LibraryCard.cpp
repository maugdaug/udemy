#include <iostream>
#include "LibraryCard.h"

LibraryCard::LibraryCard(std::string cardholderName) {
    this->cardholderName = cardholderName;
    booksCheckedOut = 0;
    // this->booksCheckedOut = booksCheckedOut;
}

void LibraryCard::checkoutBook() {
    booksCheckedOut++;
}

void LibraryCard::returnBook() {
    if (booksCheckedOut <= 0) {
        std::cout << "No books to return!" << std::endl;
    }
    else {
        booksCheckedOut--;
    }
}

std::string LibraryCard::getCardholderName() const {
    return cardholderName;
}

int LibraryCard::getBooksCheckedOut() const {
    return booksCheckedOut;
}