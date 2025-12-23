#include <iostream>
#include <string>
#include <windows.h>;
using namespace std;
int main() {
    SetConsoleOutputCP (CP_UTF8);

    bool hasBike;
    bool hasConsole;
    cout << " какой подарок ты получил?" << endl;
    
    cout << "введите значение hasBike (1- получил велосипед, 0-не получил ) ";
    cin >> hasBike;
    cout << "введите значение hasConsole (1- получил приставку, 0- не получил ) ";
    cin >> hasConsole;

    if (hasBike || hasConsole) {
    cout << " ура! отличный подарок" << endl;
    } else {
        cout << " надо было лучше себя вести" << endl;
    }
    return 0;
}