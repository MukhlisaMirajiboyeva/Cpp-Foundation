#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int a[10] = {5, 12, 3, 21, 8, 7, 10, 1, 9, 4}; // Статический массив на 10 элементов
    int sum = 0; // Переменная для хранения суммы

    // Проходим по массиву и суммируем элементы
    for (int i = 0; i < 10; i++) {
        sum += a[i]; // sum = sum + a[i]
    }

    // Рассчитываем среднее. (double) нужен для точного деления
    double average = (double)sum / 10;

    cout << "Сумма: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;

    return 0;
}