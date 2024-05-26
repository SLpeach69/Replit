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
    int size = 0;

    std::cout << "Введите размер массива: ";
    std::cin >> size;
    std::cout << std::endl;

    int* arr = new int[size]();

    for (int i = 0; i < size; i++) {
        std::cout << "Введите arr [" << i << "] = ";
        std::cin >> arr[i];
        std::cout << std::endl;
    }

    std::cout << "Введённый:" << std::endl;
    printArray(arr, size);

    reversArray(arr, size);

    std::cout << "Массив в обратном порядке:" << std::endl;
    printArray(arr, size);

    std::ofstream outtxt("out.txt");

    if (!outtxt.is_open()) {
        std::cout << "File can not be opened.";
        delete[] arr;
        return -1;
    }
    outtxt << size;
    outtxt << std::endl;
    for (int i = 0; i < size; i++) {
        outtxt << arr[i];
        outtxt << " ";
    }
    outtxt.close();

    delete[] arr;

    return 0;
}
