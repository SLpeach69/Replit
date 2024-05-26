#include <iostream>
#include <iomanip>

int** createTwoDimArray(int rows, int cols) {
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

void fillTwoDimArray(int** arr, int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            arr[i - 1][j - 1] = i * j;
        }
    }
}

void printTwoDimArray(int** arr, int rows, int cols) {
    std::cout << "Таблица умножения: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteTwoDimArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    int rows = 0;
    int cols = 0;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << std::endl;
    std::cout << "Введите количество стобцов: ";
    std::cin >> cols;
    std::cout << std::endl;

    int** arr = createTwoDimArray(rows, cols);
    fillTwoDimArray(arr, rows, cols);
    printTwoDimArray(arr, rows, cols);
    deleteTwoDimArray(arr, rows, cols);

    return 0;
}