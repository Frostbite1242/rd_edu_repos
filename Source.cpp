#include "Header.h"
#include <iostream>
#include <algorithm>
#include <random>

void bubbleSort(int arr[], int size) {
    std::cout << "Generated array with random numbers:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    std::cout << "Sorted array using bubble sort:\n";
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
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);

        int partitionIndex = i + 1;

        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

void sort(int arr[3][4], SortDirection direction) {
    if (direction == SortDirection::ByRows) {
        for (int i = 0; i < 3; ++i) {
            quickSort(arr[i], 0, 4 - 1);
        }
    }
    else if (direction == SortDirection::ByColumns) {
        for (int j = 0; j < 4; ++j) {
            int column[3];
            for (int i = 0; i < 3; ++i) {
                column[i] = arr[i][j];
            }
            quickSort(column, 0, 3 - 1);
            for (int i = 0; i < 3; ++i) {
                arr[i][j] = column[i];
            }
        }
    }
}
