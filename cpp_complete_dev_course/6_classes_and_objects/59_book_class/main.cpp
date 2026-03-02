#include <iostream>
#include "Book.h"

// void printBookInfo(const Book& book);

int main() {
    Book gameOfThrones("George RR Martin", "Game of Thrones",
                        "Fantasy", 3425);
    Book wizardsFirstRule("Terry Goodkind", "Wizard's First Rule",
                        "Fantasy", 999);

    // printBookInfo(gameOfThrones);
    // printBookInfo(wizardsFirstRule);

    gameOfThrones.printBookInfo();
    wizardsFirstRule.printBookInfo();

    return 0;
}

// void printBookInfo(const Book& book) {
//     std::cout << book.getTitle() << " by " << book.getAuthor()
//             << " has " << book.getNumPages() << " pages and its genre is "
//             << book.getGenre() << "." << std::endl;
// }


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