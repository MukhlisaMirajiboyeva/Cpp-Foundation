#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int heroHP = 120;
    int bossHP = 150;

    bool hasMinions = false;

    int phases[] = {10, 20, 30};
    int* currentDmg = phases;

    int* minions = nullptr;
    int minionCount = 3;

    vector<string> history;

    while (heroHP > 0 && bossHP > 0) {
        int attack;
        cout << "\nВыбери атаку:\n";
        cout << "1 - Обычная атака (10 урона)\n";
        cout << "2 - Сильная атака (20 урона)\n";
        cout << "3 - Спецприём (15 урона + оглушение)\n";
        cout << "Твой выбор: ";
        cin >> attack;

        int heroDmg = 0;
        bool stun = false;

        if (attack == 1) {
            heroDmg = 10;
            history.push_back("Герой использует обычную атаку");
        }
        else if (attack == 2) {
            heroDmg = 20;
            history.push_back("Герой использует сильную атаку");
        }
        else if (attack == 3) {
            heroDmg = 15;
            stun = true;
            history.push_back("Герой использует спецприём и оглушает босса");
        }
        else {
            cout << "Неверный выбор! Ход пропущен.\n";
            history.push_back("Герой ошибся с выбором атаки");
            continue;
        }

       
        bossHP -= heroDmg;
        cout << "HP босса: " << bossHP << endl;

        
        if (bossHP <= 50 && !hasMinions) {
            history.push_back("Босс призывает миньонов");

            minions = new int[minionCount];
            for (int i = 0; i < minionCount; i++)
                minions[i] = 5;

            hasMinions = true;

            currentDmg++;
            history.push_back("Босс переходит в новую фазу");
        }

        
        if (bossHP <= 0) {
            history.push_back("Босс побеждён");
            break;
        }

       
        
        if (stun) {
            history.push_back("Босс пропускает ход из-за оглушения");
            continue; 
        }

        
        heroHP -= *currentDmg;
        history.push_back(
            "Босс атакует героя (-" + to_string(*currentDmg) + " HP)"
        );
        cout << "HP героя: " << heroHP << endl;

        
        if (hasMinions) {
            for (int i = 0; i < minionCount; i++) {
                heroHP -= minions[i];
                history.push_back(
                    "Миньон " + to_string(i + 1) +
                    " наносит " + to_string(minions[i]) + " урона"
                );
            }
        }
    }

    
    if (minions != nullptr) {
        delete[] minions;
        minions = nullptr;
    }

    
    cout << "\n=== ИСТОРИЯ БОЯ ===\n";
    for (int i = 0; i < history.size(); i++) {
        cout << i + 1 << ". " << history[i] << endl;
    }

    return 0;
}