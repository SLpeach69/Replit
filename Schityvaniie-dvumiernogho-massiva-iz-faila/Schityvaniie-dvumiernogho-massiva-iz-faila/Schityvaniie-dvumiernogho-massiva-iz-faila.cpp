#include <iostream>
#include <iomanip>
#include <fstream>

void swap(int& a, int& b) {
    int swp = a;
    a = b;
    b = swp;
}

int** createTwoDimArray(int rows, int cols) {
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

void printTwoDimArray(int** arr, int rows, int cols) {
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

void reversArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols / 2; j++) {
            swap(arr[i][j], arr[i][cols - j - 1]);
        }
    }
}



int main() {
    int rows = 0;
    int cols = 0;

    std::ifstream intxt("in.txt");

    if (!intxt.is_open()) {
        std::cout << "File can not be opened.";
        return -1;
    }

    intxt >> rows;
    intxt >> cols;

    int** arr = createTwoDimArray(rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            intxt >> arr[i][j];
        }
    }
    intxt.close();

    std::cout << "Массив в файле:" << std::endl;
    printTwoDimArray(arr, rows, cols);

    reversArray(arr, rows, cols);

    std::cout << "Массив после вывода:" << std::endl;
    printTwoDimArray(arr, rows, cols);

    deleteTwoDimArray(arr, rows, cols);


    return 0;
}