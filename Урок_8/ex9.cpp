#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    string password;

    while (true) {
        cout << "Введите пароль: ";
        cin >> password;

        if (password == "secret") {
            cout << "доступ разрешен!" << endl;
            break;
        } else {
            cout << "Неверный пароль, попробуйте снова." << endl;
        }
    }

    return 0;
}