/*
if (условие) {
    // Код, если условие ВЕРНО (true)
} else {
    // Код, если условие НЕВЕРНО (false)
}
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int score = 45;

    if (score >= 50) { // Проверяем: 45 больше или равно 50? Нет, это НЕПРАВДА (false).
        cout << "Поздравляю, ты сдал!" << endl;
    } else {
        cout << "Нужно потренироваться еще." << endl; // Выполняется этот блок.
    }

    return 0;
}

// Вывод:
// Нужно потренироваться еще.