#include <iostream>
using namespace std;

int main() {
    bool isFound = false; // Сокровище пока НЕ найдено
    int step = 1;         // Номер шага поиска

    // Цикл работает, ПОКА сокровище НЕ найдено (!isFound)
    while (!isFound) {
        cout << "Step " << step << ": Looking for treasure..." << endl;

        // Допустим, сокровище спрятано на 4-м шаге
        if (step == 4) {
            isFound = true; // Мы нашли его! Флаг меняется на "истина"
        }

        step++; // Переходим к следующему шагу
    }

    cout << "Victory! Treasure found on step 4!" << endl;
    return 0;
}