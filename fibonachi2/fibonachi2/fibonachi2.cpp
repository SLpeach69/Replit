#include <iostream>

long fib(long number, long x1, long x2, long x3, long count) {
    if (count == number) {
        return x3;
    }
    std::cout << x3 << std::endl;
    x1 = x2;
    x2 = x3;
    x3 = x2 + x1;
    count++;
    return fib(number, x1, x2, x3, count);
}

int main() {
    long  number = 1;
    long  x1 = 0;
    long  x2 = 1;
    long  x3 = 0;
    long  count = 1;

    std::cout << "Введите номер элемента последовательности Фибоначчи" << std::endl;
    std::cin >> number;
    std::cout << "Числа Фибоначчи: " << std::endl << fib(number, x1, x2, x3, count);

    return 0;
}