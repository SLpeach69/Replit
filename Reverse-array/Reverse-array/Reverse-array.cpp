#include <iostream>

void swap(int* a, int* b) {
    int swp = *a;
    *a = *b;
    *b = swp;
}

void  printArray(int arr[], int count) {
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reversArray(int arr[], int count) {
    for (int i = 0; i < count / 2; i++) {
        swap(&arr[i], &arr[count - i - 1]);
    }
}


int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, sizeArr);
    reversArray(arr, sizeArr);
    printArray(arr, sizeArr);

    return 0;

}