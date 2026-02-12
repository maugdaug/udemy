#include <iostream>
#include <vector>
#include <string>

int main() {
    int itemCount = 1;
    std::string itemName;
    std::vector<std::string> shoppingList;
    do {
        std::cout << "Enter item " << itemCount << ": ";
        std::getline(std::cin, itemName);
        shoppingList.push_back(itemName);
        itemCount++;
    } while (itemName != "done" && itemName != "Done");

    std::cout << "\nThere are " << shoppingList.size() << " items on your list." << std::endl;
    for (std::string item : shoppingList) {
        std::cout << item << std::endl;
    }

    std::cout << std::endl;

    return 0;
}