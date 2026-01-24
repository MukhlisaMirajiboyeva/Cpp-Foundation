#include <iostream>
using namespace std;

// 1. Прототип функции (Обещание, что такая функция будет ниже)
void printNumber(int n); 

int globalVar = 999; // Глобальная переменная (видна всем)

int main() {
    int localVar = 10; // Локальная переменная (видна только в main)
    
    cout << "В main глобальная: " << globalVar << endl;
    
    printNumber(localVar); // Вызываем функцию
    
    // cout << n; // ОШИБКА! main не знает, что такое 'n', это переменная другой функции.
    
    return 0;
}

// 2. Реализация функции (Само действие)
void printNumber(int n) {
    cout << "В функции пришло число: " << n << endl;
    cout << "Функция тоже видит глобальную: " << globalVar << endl;
    // cout << localVar; // ОШИБКА! Эта функция не видит переменные из main.
}