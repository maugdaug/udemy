#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
    public:
        Book(std::string author, std::string title, std::string genre, int numPages);
        std::string getAuthor() const;
        std::string getTitle() const;
        std::string getGenre() const;
        int getNumPages() const;
        void printBookInfo() const;
    private:
        std::string author;
        std::string title;
        std::string genre;
        int numPages;
};

#endif


/*
    UML class diagram

    Book

    - author : string
    - title : string
    - genre: string
    - numPages : int
    
    + Book(author : string,
        title : string,
        genre : string,
        numPages : int)
    + getAuthor() : string
    + getTitle() : string
    + getGenre() : string
    + getNumPages() : int
*/