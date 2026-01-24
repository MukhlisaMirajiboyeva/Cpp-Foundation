#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int number;

    // Цикл СНАЧАЛА выполняет ввод, а ПОТОМ проверяет условие
    do {
        cout << "Введите любое число (введите 0, чтобы выйти): ";
        cin >> number;

        if (number != 0) {
            cout << "Вы ввели число: " << number << endl;
        }

    } while (number != 0); // Цикл работает, ПОКА number НЕ равен 0

    cout << "Программа завершена. До свидания!" << endl;

    return 0;
}