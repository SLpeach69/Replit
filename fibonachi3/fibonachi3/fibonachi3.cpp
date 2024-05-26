#include <iostream>

int fib(int number) {
    if (number <= 1) {
        return number;
    }
    return fib(number - 1) + fib(number - 2);
}


int main() {
    int number = 1;
    std::cout << "Введите номер элемента последовательности Фибоначчи" << std::endl;
    std::cin >> number;
    number -= 1;
    std::cout << "Числа Фибоначчи: " << std::endl;
    for (int i = 0; i <= number; i++) {
        std::cout << fib(i) << std::endl;
    }
    return 0;
}