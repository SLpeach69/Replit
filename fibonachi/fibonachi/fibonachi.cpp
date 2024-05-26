#include <iostream>

int fib(int number, int x1, int x2, int x3, int count) {
    if (count == number) {
        return x3;
    }
    std::cout << x3 << " ";
    x1 = x2;
    x2 = x3;
    x3 = x2 + x1;
    count++;
    return fib(number, x1, x2, x3, count);
}


int main() {
    int  number = 1;
    int  x1 = 0;
    int  x2 = 1;
    int  x3 = 0;
    int  count = 1;

    std::cout << "Введите номер элемента последовательности Фибоначчи" << std::endl;
    std::cin >> number;
    std::cout << "Числа Фибоначчи: " << fib(number, x1, x2, x3, count);

    return 0;
}
