#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    /* 1. Задача */
    int age;
    cout << "введите ваш возраст ";
    cin >> age;
    cout << "ваш возраст: " << age << endl;

    /* 2. Задача */
    double height;
    cout << "введите ваш рост (в метрах): ";
    cin >> height;
    cout << " ваш рост: " << height << endl;

    /* 3. Задача */

    int grade_num;
    char grade_letter;
    cout << " введите номер класса: ";
    cin >> grade_num;

    cout << " введите букву класса: ";
    cin >> grade_letter;

    cout << " ваш класс: " << grade_num << grade_letter << endl;

    return 0;
}