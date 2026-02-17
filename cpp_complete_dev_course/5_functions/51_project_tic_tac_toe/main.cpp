#include <iostream>
#include <string>
#include <array>

void printBoard();
void promptTurn();
void updateLayout();
void playGame();
bool checkForVictory();

bool victory = false;
std::string xoLayout[3][3] = {
    {" ", " ", " "},
    {" ", " ", " "},
    {" ", " ", " "}
};
int turn = 1;
int newRow, newCol;

int main() {
    
    std::string testLayout[3][3] = {
        {"a","b","c"},
        {"d","e","f"},
        {"g","h","i"}
    };
    // std::array<std::string, [3][3]> xoLayout[3][3];

    // printBoard(testLayout);


    while (!victory) {
        playGame();
    }
    // std::cout << "Turn: " << turn << std::endl;

    // promptTurn();

    // std::cout << "Turn: " << turn << "\tN: " << newRow << " " << newCol << std::endl;


    return 0;
}

void playGame() {
    printBoard();
    promptTurn();
    updateLayout();
    if (checkForVictory()) {
        if (turn % 2 == 0) {
            std::cout << "Victory! O has won!\n" << std::endl;
        }
        else {
            std::cout << "Victory! X has won!\n" << std::endl;
        }
        printBoard();
        victory = true;
    }
}

void printBoard() {
    std::cout << "\t" << xoLayout[0][0] << " | " << xoLayout[0][1] << 
                    " | " << xoLayout[0][2] << std::endl;

    std::cout << "\t- - - - -" << std::endl;

    std::cout << "\t" << xoLayout[1][0] << " | " << xoLayout[1][1] << 
                    " | " << xoLayout[1][2] << std::endl;

    std::cout << "\t- - - - -" << std::endl;

    std::cout << "\t" << xoLayout[2][0] << " | " << xoLayout[2][1] << 
                    " | " << xoLayout[2][2] << std::endl;

    std::cout << std::endl;
}

void promptTurn() {
    if (turn % 2 == 0) {
        std::cout << "It is X's turn..." << std::endl;
        std::cout << "Please enter a row THEN a column from 0-2.\n";
    }
    else {
        std::cout << "It is O's turn..." << std::endl;
        std::cout << "Please enter a row THEN a column from 0-2.\n";
    }

    do {
        std::cout << "Row: ";
        std::cin >> newRow;
        std::cout << "Col: ";
        std::cin >> newCol;

        if (newRow < 0 || newRow > 2 || newCol < 0 || newCol > 2) {
            std::cout << "Invalid! Try again" << std::endl;
        }
        else if (xoLayout[newRow][newCol] != " ") {
            std::cout << "Square is occupied! Try again." << std::endl;
        }
        std::cout << std::endl;
    }while (newRow < 0 || newRow > 2 || newCol < 0 || newCol > 2 
                || xoLayout[newRow][newCol] != " ");

    turn++;
    // return output;
}

void updateLayout() {
    if (turn % 2 == 0) {    // O
        xoLayout[newRow][newCol] = "O";
    }
    else {                  // X
        xoLayout[newRow][newCol] = "X";
    }

}

bool checkForVictory() {
    // straight up/down left/right
    for (int i=0; i<3; i++) {
        // std::cout << "test: " << xoLayout[0][i] << xoLayout[1][i] << xoLayout[2][i] << std::endl;
        if (xoLayout[i][0] != " " && xoLayout[i][0] == xoLayout[i][1] && xoLayout[i][0] == xoLayout[i][2]) {
            return true;
        }
        else if (xoLayout[0][i] != " " && xoLayout[0][i] == xoLayout[1][i] && xoLayout[0][i] == xoLayout[2][i]) {
            return true;
        }
    }

    // diagonal
    if (xoLayout[0][0] != " " && xoLayout[0][0] == xoLayout[1][1] && xoLayout[0][0] == xoLayout[2][2]) {
        return true;
    }
    else if (xoLayout[0][2] != " " && xoLayout[0][2] == xoLayout[1][1] && xoLayout[0][2] == xoLayout[2][0]) {
        return true;
    }

    return false;
}