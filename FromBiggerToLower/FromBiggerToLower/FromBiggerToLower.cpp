#include <iostream>

int main() {
    int first, second, third;

    std::cout << "Введите 3 числа\n";
    std::cin >> first >> second >> third;

    if ((first == second) && (second == third)) {
        std::cout << first << ' ' << second << ' ' << third;
        return 0;
    }

    if ((first == second) || (second == third) || (first == third)) {
        if (first > third) {
            std::cout << first << ' ' << second << ' ' << third;
            return 0;
        }
        if (second > first) {
            std::cout << second << ' ' << third << ' ' << first;
            return 0;
        }
        if (first > second) {
            std::cout << first << ' ' << third << ' ' << second;
            return 0;
        }
    }

    if ((first > second) && (first > third)) {
        std::cout << first << ' ';
        if (second > third) {
            std::cout << second << ' ' << third;
        }
        else {
            std::cout << third << ' ' << second;
        }
        return 0;
    }

    if ((second > first) && (second > third)) {
        std::cout << second << ' ';
        if (first > third) {
            std::cout << first << ' ' << third;
        }
        else {
            std::cout << third << ' ' << first;
        }
        return 0;
    }

    if ((third > first) && (third > second)) {
        std::cout << third << ' ';
        if (first > second) {
            std::cout << first << ' ' << second;
        }
        else {
            std::cout << second << ' ' << first;
        }
        return 0;
    }

    return 0;
}
