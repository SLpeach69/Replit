#include <iostream>

int main() {
    int first, second, c, a, b;
    first = 0;
    second = 0;
    c = 0;

    std::cout << "введите 2 целых числа в диапазоне от -99 до 99" << std::endl;
    std::cin >> first >> second;

    if ((first > 100 || first < -100) || (second < -100 || second > 100)) {
        std::cout << "Ошибка! Одно из чисел вне диапазона!";
        return 0;
    }

    a = first;
    b = second;

    if (first < 0) {
        a = first * -1;
        std::cout << "минус ";
    }

    if (a >= 0 && a < 20) {
        switch (a) {
        case 0: std::cout << "ноль "; break;
        case 1: std::cout << "один "; break;
        case 2: std::cout << "два "; break;
        case 3: std::cout << "три "; break;
        case 4: std::cout << "четыре "; break;
        case 5: std::cout << "пять "; break;
        case 6: std::cout << "шесть "; break;
        case 7: std::cout << "семь "; break;
        case 8: std::cout << "восемь "; break;
        case 9: std::cout << "девять "; break;
        case 10: std::cout << "десять "; break;
        case 11: std::cout << "одиннадцать "; break;
        case 12: std::cout << "двенадцать "; break;
        case 13: std::cout << "тринадцать "; break;
        case 14: std::cout << "четырнадцать "; break;
        case 15: std::cout << "пятнадцать "; break;
        case 16: std::cout << "шестнадцать "; break;
        case 17: std::cout << "семнадцать "; break;
        case 18: std::cout << "восемнадцать "; break;
        case 19: std::cout << "девятнадцать ";
        }
    }
    else {
        c = a / 10;
        switch (c) {
        case 2: std::cout << "двадцать "; break;
        case 3: std::cout << "тридцать "; break;
        case 4: std::cout << "сорок "; break;
        case 5: std::cout << "пятьдесят "; break;
        case 6: std::cout << "шестьдесят "; break;
        case 7: std::cout << "семьдесят "; break;
        case 8: std::cout << "восемьдесят "; break;
        case 9: std::cout << "девяносто ";
        }
        c = a % 10;
        switch (c) {
        case 1: std::cout << "один "; break;
        case 2: std::cout << "два "; break;
        case 3: std::cout << "три "; break;
        case 4: std::cout << "четыре "; break;
        case 5: std::cout << "пять "; break;
        case 6: std::cout << "шесть "; break;
        case 7: std::cout << "семь "; break;
        case 8: std::cout << "восемь "; break;
        case 9: std::cout << "девять ";
        }
    }

    if (first > second) {
        std::cout << "больше чем ";
    }
    else if (first < second) {
        std::cout << "меньше чем ";
    }
    else if (first == second) {
        std::cout << "равно ";
    }

    if (second < 0) {
        b = second * -1;
        std::cout << "минус ";
    }

    if (b >= 0 && b < 20) {
        switch (b) {
        case 0: std::cout << "ноль "; break;
        case 1: std::cout << "один "; break;
        case 2: std::cout << "два "; break;
        case 3: std::cout << "три "; break;
        case 4: std::cout << "четыре "; break;
        case 5: std::cout << "пять "; break;
        case 6: std::cout << "шесть "; break;
        case 7: std::cout << "семь "; break;
        case 8: std::cout << "восемь "; break;
        case 9: std::cout << "девять "; break;
        case 10: std::cout << "десять "; break;
        case 11: std::cout << "одиннадцать "; break;
        case 12: std::cout << "двенадцать "; break;
        case 13: std::cout << "тринадцать "; break;
        case 14: std::cout << "четырнадцать "; break;
        case 15: std::cout << "пятнадцать "; break;
        case 16: std::cout << "шестнадцать "; break;
        case 17: std::cout << "семнадцать "; break;
        case 18: std::cout << "восемнадцать "; break;
        case 19: std::cout << "девятнадцать ";
        }
    }
    else {
        c = b / 10;
        switch (c) {
        case 2: std::cout << "двадцать "; break;
        case 3: std::cout << "тридцать "; break;
        case 4: std::cout << "сорок "; break;
        case 5: std::cout << "пятьдесят "; break;
        case 6: std::cout << "шестьдесят "; break;
        case 7: std::cout << "семьдесят "; break;
        case 8: std::cout << "восемьдесят "; break;
        case 9: std::cout << "девяносто ";
        }
        c = b % 10;
        switch (c) {
        case 1: std::cout << "один "; break;
        case 2: std::cout << "два "; break;
        case 3: std::cout << "три "; break;
        case 4: std::cout << "четыре "; break;
        case 5: std::cout << "пять "; break;
        case 6: std::cout << "шесть "; break;
        case 7: std::cout << "семь "; break;
        case 8: std::cout << "восемь "; break;
        case 9: std::cout << "девять ";
        }
    }
    return 0;
}

