#include <iostream>

namespace sum {
    int calc(int x, int y) {
        return x + y;
    }
}

namespace mult {
    int calc(int x, int y) {
        return x * y;
    }
}

namespace subt {
    int calc(int x, int y) {
        return x - y;
    }
}

namespace divis {
    int calc(int x, int y) {
        return x / y;
    }
}


int main() {
    int x = 6, y = 9;
    std::cout << "x = " << x << " y = " << y << std::endl;
    std::cout << "Сложение: " << sum::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << subt::calc(x, y) << std::endl;
    std::cout << "Умножение: " << mult::calc(x, y) << std::endl;
    std::cout << "Деление: " << divis::calc(x, y) << std::endl;
    return 0;
}