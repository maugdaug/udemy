#include <iostream>

int countEvens(int arr[], int size);

int main() {
    const int ARRAY_SIZE = 12;
    int myArray[ARRAY_SIZE] = {0,1,2,3,4,5,6,10,12,14,16,19};

    // for (int i=0; i<ARRAY_SIZE; i++) {
    //     std::cout << myArray[i] << std::endl;
    // }
    std::cout << countEvens(myArray, ARRAY_SIZE) << std::endl;

    return 0;
}

int countEvens(int arr[], int size) {
    int numEvens = 0;
    for (int i=0; i<size; i++) {
        // std::cout << arr[i] << std::endl;
        if (arr[i] % 2 == 0) {
            numEvens++;
        }
    }
    return numEvens;
}