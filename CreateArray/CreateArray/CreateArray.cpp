#include <iostream>

double* createArray(int size) {
    double* arr = new double[size]();
    return arr;
}

int main() {
    int size = 0;

    std::cout << "Введите размер массива: ";
    std::cin >> size;
    std::cout << std::endl;

    double* arr = createArray(size);

    std::cout << "Введённый массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}