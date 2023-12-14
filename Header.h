#pragma once
enum class SortDirection { ByRows, ByColumns };

void bubbleSort(int arr[], int size);
void quickSort(int arr[], int low, int high);
void sort(int arr[3][4], SortDirection direction);
