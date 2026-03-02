#include <iostream>
#include "Book.h"

Book::Book(std::string author, std::string title, std::string genre, int numPages) {
    this->author = author;
    this->title = title;
    this->genre = genre;
    this->numPages = numPages;
}   // end ctor

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getGenre() const {
    return genre;
}

int Book::getNumPages() const {
    return numPages;
}

void Book::printBookInfo() const {
    std::cout << title << " by " << author
            << " has " << numPages << " pages and its genre is "
            << genre << "." << std::endl;
}