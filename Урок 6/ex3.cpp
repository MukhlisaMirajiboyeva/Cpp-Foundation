/* Задача 3: Сигнализация (Оператор !)
Задание: Система безопасности должна сработать, если дверь открыта (isDoorOpen), 
но сигнализация НЕ отключена (!isDeactivated).
1. Создай bool isDoorOpen и bool isDeactivated.
2. Используй && и !, чтобы проверить ситуацию.*/

#include <iostream>
using namespace std;

int main() {
    bool isDoorOpen = true;    // Дверь открыли
    bool isDeactivated = false; // Сигнализация включена (не деактивирована)

    if (isDoorOpen && !isDeactivated) {
        cout << "ALARM! Calling the police!" << endl;
    } else {
        cout << "Everything is fine." << endl;
    }
    return 0;
}