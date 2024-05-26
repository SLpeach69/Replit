#include <iostream>

int main() {
    int number, sum, x;
    number = 0;
    x = 0;
    sum = 0;

    std::cout << "Введите целое число:\n";
    std::cin >> number;

    while (number != 0) {
        x = number % 10;
        number /= 10;
        sum += x;
    }

    std::cout << "сумма цифр числа = " << sum;
    return 0;
}