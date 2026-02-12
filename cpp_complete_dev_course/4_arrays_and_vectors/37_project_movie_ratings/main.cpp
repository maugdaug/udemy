#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> movieList;
    std::vector<int> ratingList;
    std::string name;
    int rating;

    std::cout << "Movie rating database! (type 'stop' to stop)" << std::endl;

    while (1) {
        std::cout << "Movie name: ";
        std::cin.get();
        std::getline(std::cin, name);

        if (name == "stop") {
            break;
        }

        std::cout << "Rating for " << name << ": ";
        std::cin >> rating;

        movieList.push_back(name);
        ratingList.push_back(rating);
    }

    std::cout << std::endl;

    std::cout << "There are " << movieList.size() << " movies in your rating list." << std::endl;

    for (int i=0; i<movieList.size(); i++) {
        std::cout << "- " << movieList[i] << "\t\tscored: " << ratingList[i] << "/10" << std::endl;
    }

    return 0;
}