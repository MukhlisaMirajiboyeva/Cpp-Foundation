#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    bool hasBike = false;   // Велосипеда нет (false)
    bool hasConsole = true; // Приставка есть (true)

    if (hasBike || hasConsole) { // false ИЛИ true = true. Условие ВЕРНО.
        cout << "Ура! Отличный подарок!" << endl;
    } else {
        cout << "Надо было лучше себя вести :(" << endl;
    }
    return 0;
    // Вывод:
// Ура! Отличный подарок!
}