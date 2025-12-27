#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");
    
    double num1;
    double num2;
    char operation;

    
    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    if (operation == '+') {
        cout << "Результат: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Результат: " << num1 - num2 << endl;
    } else if (operation == '*') {
        cout << "Результат: " << num1 * num2 << endl;
    } else if (operation == '/') {
        cout << "Результат: " << num1 / num2 << endl;
    } else {
        cout << "Ошибка: неверная операция." << endl;
    }

    return 0;
}
