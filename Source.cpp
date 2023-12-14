#include "Header.h"
#include <iostream>
bool find(int** arr_2d, int rows, int cols, int toFind) {
    bool found = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (toFind == arr_2d[i][j]) {
                std::cout << "Number: " << toFind << " found at indices " << i << " and " << j << "\n";
                found = true;
            }
        }
    }

    if (!found) {
        std::cout << "Number: " << toFind << " could not be found\n";
    }

    return found;
}void traverseByRows(int** arr, int rows, int cols) {
    std::cout << "Traverse by rows:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void traverseByColumns(int** arr, int rows, int cols) {
    std::cout << "Traverse by columns:\n";
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void rotateMatrix(int** arr, int rows, int cols) {
    std::cout << "Rotate matrix:\n";
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}