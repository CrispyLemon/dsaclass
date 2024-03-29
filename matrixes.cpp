#include <cstdlib>
#include <iostream>
#include <cstdio>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
