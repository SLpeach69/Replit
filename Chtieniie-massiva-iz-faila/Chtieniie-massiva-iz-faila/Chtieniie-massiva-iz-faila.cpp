#include <iostream>
#include <fstream>

void swap(int& a, int& b) {
    int swp = a;
    a = b;
    b = swp;
}

void reversArray(int arr[], int count) {
    for (int i = 0; i < count / 2; i++) {
        swap(arr[i], arr[count - i - 1]);
    }
}

void  printArray(int arr[], int count) {
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int sizeArray = 0;

    std::ifstream rfile("in.txt");

    if (!rfile.is_open()) {
        std::cout << "File can not be opened.";
        return -1;
    }

    rfile >> sizeArray;
    int* array = new int[sizeArray];
    std::cout << "Размер массива:" << sizeArray << std::endl;

    for (int i = 0; i < sizeArray; i++) {
        rfile >> array[i];
    }

    rfile.close();

    std::cout << "Массив в файле:" << std::endl;
    printArray(array, sizeArray);

    reversArray(array, sizeArray);

    std::cout << "Массив после чтения из файла" << std::endl;
    printArray(array, sizeArray);

    delete[] array;
    return 0;
}