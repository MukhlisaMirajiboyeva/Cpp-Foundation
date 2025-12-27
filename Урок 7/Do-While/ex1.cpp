#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int secret = 7;
    int guess;

    do {
        cout << "Угадай число от 1 до 10: ";
        cin >> guess;

        if (guess != secret) {
            cout << "Неверно! Попробуй еще раз." << endl;
        }

    } while (guess != secret); // Проверка происходит ТОЛЬКО ПОСЛЕ ввода

    cout << "Поздравляю! Ты угадал." << endl;

    return 0;
}