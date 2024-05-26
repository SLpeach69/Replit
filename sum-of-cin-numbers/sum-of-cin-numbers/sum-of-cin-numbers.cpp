#include <iostream>

int main() {
    int x, sum;
    x = 0;
    sum = 0;

    do {
        std::cout << "Введите целое число или число '0', чтобы закончить: ";
        std::cin >> x;
        sum += x;
    } while (x != 0);

    std::cout << "сумма ведённых чисел = " << sum;
    return 0;
}
