#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    string svet = "желтый"; // Пусть сейчас горит желтый свет

    if (svet == "зеленый") { // 1. Проверяем: "желтый" равен "зеленый"? Нет.
        cout << "Можно ехать!" << endl;
    } else if (svet == "желтый") { // 2. Проверяем: "желтый" равен "желтый"? Да!
        cout << "Приготовься!" << endl; // Выполняется этот блок.
    } else { // Этот блок даже не проверяется, потому что второе условие уже было верно.
        cout << "Стой!" << endl;
    }

    return 0;
}

// Вывод:
// Приготовься!