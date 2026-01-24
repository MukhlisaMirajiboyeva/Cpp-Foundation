#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

// Функция изменения параметров через указатель
void updateStat(int* stat, int value) {
    *stat += value;
    if (*stat < 0) *stat = 0;
}

int main() {
    SetConsoleOutputCP(65001);
    srand(time(0)); // Инициализация рандома временем

    // 1. Переменные и константы
    const string heroName = "Рыцарь";
    int heroHP = 100;
    int bossHP = 120;
    int bossPhases[] = {10, 18, 30}; // Урон босса на разных фазах
    int* damagePtr = bossPhases;    // Указатель для арифметики фаз
    
    int* minions = nullptr;         // Динамический массив (Куча)
    int minionCount = 0;
    vector<string> battleLog;       // Вектор для истории

    cout << "--- БИТВА С БОССОМ НАЧИНАЕТСЯ ---" << endl;

    while (heroHP > 0 && bossHP > 0) {
        cout << "\n[Герой: " << heroHP << " HP] | [Босс: " << bossHP << " HP]" << endl;
        cout << "1. Удар | 2. Оглушение (пропуск хода босса): ";
        int action; cin >> action;

        // Механика Continue (Оглушение)
        if (action == 2) {
            updateStat(&bossHP, -5);
            battleLog.push_back("Герой оглушил босса на 1 ход!");
            continue; 
        }

        // Ход Героя
        updateStat(&bossHP, -20);
        battleLog.push_back("Герой нанес 20 урона.");

        // Логика Динамической памяти (Призыв миньонов)
        if (bossHP < 60 && minions == nullptr) {
            minionCount = rand() % 3 + 1;
            minions = new int[minionCount]; // Выделение памяти
            for (int i = 0; i < minionCount; i++) minions[i] = 10; // HP миньонов
            damagePtr++; // Арифметика указателей: переход к следующей фазе урона
            battleLog.push_back("Босс призвал свиту и вошел в ярость!");
        }

        // Ход Босса (используем разыменование указателя фазы)
        updateStat(&heroHP, -(*damagePtr));

        // Вложенный цикл: Атака миньонов
        if (minions != nullptr) {
            for (int i = 0; i < minionCount; i++) {
                updateStat(&heroHP, -5);
                battleLog.push_back("Миньон нанес 5 урона.");
            }
        }

        if (heroHP <= 0) break; // Механика Break
    }

    // Итоги игры
    if (heroHP > 0) cout << "ПОБЕДА!" << endl;
    else cout << "ВЫ ПАЛИ В БОЮ..." << endl;

    // Вывод истории боя
    cout << "\n--- Журнал боя ---" << endl;
    for (const string& event : battleLog) {
        cout << "- " << event << endl;
    }

    // Очистка динамической памяти
    if (minions != nullptr) {
        delete[] minions; // Обязательное удаление
        minions = nullptr;
        cout << "\n[Система]: Память очищена." << endl;
    }

    return 0;
}