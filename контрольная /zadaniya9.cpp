#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;

    while (true) {
        cout << "Введите пароль";
        cin >> password;

        if (password == "secret") {
            cout << "Доступ разрешён";
            break;
        }
    }

    return 0;
}