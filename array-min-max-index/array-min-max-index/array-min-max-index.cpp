#include <iostream>

int main() {
    int min, max, MinIndex_a, MinIndex_b, MaxIndex_a, MaxIndex_b;
    const int a = 3, b = 6;
    int arr[a][b] =
    {
    {42, 63, 364, 23, 40},
    {43, 54, 234, 45, 1},
    {999, 2, 10, 45, 33}
    };
    max = arr[0][0];
    min = arr[0][0];
    MinIndex_a = 0;
    MinIndex_b = 0;
    MaxIndex_a = 0;
    MaxIndex_b = 0;

    std::cout << "Массив: " << std::endl;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b - 1; j++) {
            std::cout << arr[i][j] << "\t";
            if (arr[i][j] <= min) {
                min = arr[i][j];
                MinIndex_a = i;
                MinIndex_b = j;
            }
            if (arr[i][j] >= max) {
                max = arr[i][j];
                MaxIndex_a = i;
                MaxIndex_b = j;
            }
        }
        std::cout << std::endl;
    }

    std::cout << "Индекс минимального элемента: " << MinIndex_a << ' ' << MinIndex_b << std::endl << "Индекс максимального элемента: " << MaxIndex_a << ' ' << MaxIndex_b;

    return 0;
}
