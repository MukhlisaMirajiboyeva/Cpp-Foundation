#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Высота треугольника

    // Внешний цикл: начинаем с 5 и УМЕНЬШАЕМ i (i--)
    for (int i = rows; i >= 1; i--) {
        
        // Внутренний цикл: всё так же подглядывает за i
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Переход на новую строку
        cout << endl;
    }

    return 0;
}