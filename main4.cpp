#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP (CP_UTF8);

    bool hasBike;   // Велосипеда нет (false)
    bool hasConsole; // Приставка есть (true)
    cout << "Какой подарок ты получил" << endl;
    cout << "Ты получил велик? \n";
    cin >> hasBike;
    cout << "Ты получил приставку! \n";
    cin >> hasConsole; 
    if (hasBike || hasConsole) { // false ИЛИ true = true. Условие ВЕРНО.
        cout << "Ура! Отличный подарок!" << endl;
    } else {
        cout << "Надо было лучше себя вести :(" << endl;
    }
    
    return 0;
}
// Вывод: 
// Ура! Отличный подарок!