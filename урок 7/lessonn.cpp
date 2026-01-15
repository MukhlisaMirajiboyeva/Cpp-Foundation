#include <iostream>
#include <windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP (CP_UTF8);
    cout << "прыгай через ступеньку вниз!" << endl;

    for (int i = 10; i > 0; i -= 2) {
        cout << "Ступеньки номер: " << i << endl;
    }

    cout << "Приземлись!" << endl;

    return 0;
}