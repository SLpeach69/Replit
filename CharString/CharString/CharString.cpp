#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

void choiceCharArr(int choiseFunction) {
    char name[200];
    char secondName[200];
    std::cout << "Введите имя: ";
    std::cin >> std::setw(sizeof(name));
    std::cin >> name;
    std::cout << "Введие фамилию: ";
    std::cin >> std::setw(sizeof(secondName));
    std::cin >> secondName;
    std::cout << "Здравствуйте, " << name << " " << secondName << ".";
}

void choiceString(int choiseFunction) {
    std::string name = "";
    std::string secondName = "";

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Введие фамилию: ";
    std::cin >> secondName;
    std::cout << "Здравствуйте, " + name + " " + secondName + ".";
}

int main() {
    int userСhoosing = 0;

    std::cout << "Выберите метод выполнения :" << std::endl << "Введите 1 для метода cstring или 2 для метода string" << std::endl;
    std::cin >> userСhoosing;
    std::cout << std::endl;
    if ((userСhoosing != 1) && (userСhoosing != 2)) {
        std::cout << "Введён некоректный метод" << std::endl;
        return -1;
    }
    if (userСhoosing == 1) {
        choiceCharArr(userСhoosing);
    }
    if (userСhoosing == 2) {
        choiceString(userСhoosing);
    }
    return 0;
}