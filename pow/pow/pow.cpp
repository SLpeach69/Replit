#include <iostream>

void pow(int value, int power) {
    int result = 1;
    for (int i = 0; i < power; i++) {
        result *= value;
    }
    std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int main(int argc, char** argv) {
    int value, power, result;

    pow(5, 2);
    pow(3, 3);
    pow(4, 4);

    return 0;
}
