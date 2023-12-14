/*#include <iostream>
#include <random>

const int size = 20;

void bubbleSort(int arr[], int size);

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::cout << "Enter amount of elements in array:\n";
    //std::cin >> size;
    std::uniform_int_distribution<> dis(1, 100);
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = dis(gen);
    }
    bubbleSort(arr, size);
}

void bubbleSort(int arr[], int size) {
    std::cout << "Generated array with random numbers:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Sorted array:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}*/
#include "Header.h"
#include <iostream>
#include <algorithm>
#include <random>
#include "Header.h"

const int size = 20;



int main() {
    std::random_device rd1;
    std::mt19937 gen1(rd1());
    std::cout << "Enter amount of elements in array:\n";
    std::uniform_int_distribution<> dis1(1, 100);
    int arr1[size];
    for (int i = 0; i < size; i++) {
        arr1[i] = dis1(gen1);
    }
    bubbleSort(arr1, size);

    std::cout << "\n\n";

    int arr2[3][4] = {
        {5, 2, 8, 1},
        {7, 3, 6, 4},
        {9, 0, 10, 11}
    };

    std::cout << "Original array:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << "\n";
    }

    sort(arr2, SortDirection::ByRows);

    std::cout << "\nSorted array by rows:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
