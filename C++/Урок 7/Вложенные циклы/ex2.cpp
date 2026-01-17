#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int rows;
    cout << "Введите высоту треугольника: ";
    cin >> rows;

    // Внешний цикл: идет по строкам (от 1 до rows)
    for (int i = 1; i <= rows; i++) {
        
        // Внутренний цикл: печатает звезды. 
        // ВАЖНО: он работает, пока j <= i
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Переходим на новую строку после того, как напечатали все звезды для текущей строки
        cout << endl;
    }

    return 0;
}