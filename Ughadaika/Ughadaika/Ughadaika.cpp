#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

// переименовать функции
//сделать tolower и 1 ответ
//расписать if и while  / сделать одну проверку 20 23 и 39 42
// переименовать x

void functionCharArr(int choiseFunction) {
    char correctAnswer1[] = "Подсолнух";
    char correctAnswer2[] = "подсолнух";
    char userAnswer[256];

    do {
        std::cout << "Введите ответ на загадку: ";
        std::cin >> std::setw(sizeof(userAnswer));
        std::cin >> userAnswer;
        if (((strcmp(userAnswer, correctAnswer1) == 0) || (strcmp(userAnswer, correctAnswer2) == 0)) == 0)
            std::cout << "Не угадал, попробуй ещё раз." << std::endl;
    } while (((strcmp(userAnswer, correctAnswer1) == 0) || (strcmp(userAnswer, correctAnswer2) == 0)) == 0);

    std::cout << "Молодец, правильно!";
}


void functionString(int choiseFunction) {
    std::string correctAnswer1;
    correctAnswer1 = "Подсолнух";
    std::string correctAnswer2;
    correctAnswer2 = "подсолнух";
    std::string userAnswer;

    do {
        std::cout << "Введите ответ на загадку: ";
        std::cin >> userAnswer;
        if (((userAnswer == correctAnswer1) || (userAnswer == correctAnswer2)) == 0)
            std::cout << "Не угадал, попробуй ещё раз." << std::endl;
    } while (((userAnswer == correctAnswer1) || (userAnswer == correctAnswer2)) == 0);

    std::cout << "Молодец, правильно!";
}

int main() {
    int x = 0; // переименовать 

    std::cout << "Выберите метод выполнения :" << std::endl << "Введите 1 для метода cstring или 2 для метода string" << std::endl;
    std::cin >> x;
    std::cout << std::endl;
    if ((x != 1) && (x != 2)) {
        std::cout << "Введён некоректный метод" << std::endl;
        return -1;
    }

    std::cout << "Загадка! Посадили зёрнышко — Вырастили солнышко." << std::endl;

    if (x == 1) {
        functionCharArr(x);
    }
    if (x == 2) {
        functionString(x);
    }
    return 0;
}