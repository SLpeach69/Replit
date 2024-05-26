#include <iostream>

void counting_function() {
    static int i = 0;
    i++;
    std::cout << "Количество вызовов функции counting_function(): " << i << std::endl;
}

int main(int argc, char** argv) {
    for (int i = 0; i < 15; i++) {
        counting_function();
    }
    return 0;
}