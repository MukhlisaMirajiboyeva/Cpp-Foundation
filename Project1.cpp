#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

void changeStat(int* stat, int delta) {
    *stat += delta;
}

int main () {
    SetConsoleOutputCP (65001);
    srand(time(0));

    int heroHP = 1627;
    int bossHP = 3465;
    int phases[] = {10, 20, 30};
    int* currectDmd = phases;
    int* minions = nullptr;

    while (heroHP > 0 && bossHP > 0) {
        int attack;
        cout << "1 - базавая атака \n2 - критическая атака оглашаешего врага\nВыбор: ";
        cin >> attack;

        if (attack == 1) {
            bossHP -= 227;
            cout << "Вы атакавали босса. НР босса: " << bossHP << endl;
        }
        else if (attack == 2) {
            bossHP -= 524;
            cout << "Вы нанесли критический удар. НР босса: " << bossHP << endl;
            if (bossHP > 0){
                continue;
            }
        }
        if (bossHP <= 0){
            cout << "Босс певержен!\n";
            break; 
        }
        heroHP -= 368;
        cout << "Вас атакавал осс. Ваше здаровье: " << heroHP << endl;
    }
    if (heroHP <= 0) {
        cout << "Вы проиграли!\n";
    }
    else { cout << "Вы выиграли!\n";
    }
    return 0;

}