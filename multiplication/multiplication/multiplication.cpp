#include <iostream>

int main() {
    int x, b;
    x = 0;
    b = 0;

    std::cout << "Введите целое число: \n";
    std::cin >> x;

    for (int i = 1; i < 11; ++i) {
        b = x * i;
        std::cout << x << " * " << i << " = " << b << '\n';
    }

    return 0;
}