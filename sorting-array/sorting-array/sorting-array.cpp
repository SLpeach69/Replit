#include <iostream>

int main() {
    const int size = 10;
    int arr[size] = { 99, 23, 35, 23, 54, 34, 23, 34, 6, 10 };
    bool swapped = false;

    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;


    do {
        swapped = false;
        for (int i = 1; i < size; i++) {
            if (arr[i - 1] > arr[i]) {
                int swap = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = swap;
                swapped = true;
            }
        }
    } while (swapped == true);

    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}