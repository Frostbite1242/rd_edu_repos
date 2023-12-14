#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Header.h"

const int ROWS = 100;
const int COLUMNS = 100;
int main() {
    int cols, row;
    int fnumber;
    std::srand(std::time(0));

    std::cout << "Enter the number of columns and rows:\n";
    std::cin >> cols >> row;

    int** array = new int* [row];
    for (int i = 0; i < row; i++) {
        array[i] = new int[cols];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = std::rand() % 100 + 1;
        }
    }

    std::cout << "Array is generated:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "Enter the number you want to find:\n";
    std::cin >> fnumber;

    bool result = find(array, row, cols, fnumber);

    if (!result) {
        std::cout << "Number: " << fnumber << " could not be found in the array\n";
    }

    traverseByRows(array, row, cols);
    std::cout << "\n";

    traverseByColumns(array, row, cols);
    std::cout << "\n";

    rotateMatrix(array, row, cols);

    // Free the dynamically allocated memory
    for (int i = 0; i < row; ++i) {
        delete[] array[i];
    }
    delete[] array;


}