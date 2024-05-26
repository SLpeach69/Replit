#include <iostream>

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr1[] = { 1, 2, 3 };
    printArr(arr1, 3);

    int arr2[] = { 4, 5, 6, 7, 9 };
    printArr(arr2, 5);

    int arr3[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    printArr(arr3, 9);

    return 0;
}