#include <iostream>

int main() {
    int max, min;
    const int size = 10;
    int arr[size] = { 7, 6, 4, 2, 5, 3, 7, 8, 4, 10 };
    max = arr[0];
    min = arr[0];

    std::cout << "Массив: ";

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ", ";
        if (arr[i] <= min) {
            min = arr[i];
        }
        if (arr[i] >= max) {
            max = arr[i];
        }
    }

    std::cout << "\nМаксимальный элемент: " << max << "\nМинимальный элемент: " << min;

    return 0;
}