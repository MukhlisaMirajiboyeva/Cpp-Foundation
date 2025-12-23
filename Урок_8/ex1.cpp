#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 4) {
            cout << "Ящик №4: Пусто. Пропускаем..." << endl;
            continue; // Сразу прыгаем к i = 5, не заходя в нижний cout
        }

        if (i == 7) {
            cout << "Ящик №7: ОПАСНОСТЬ! Вызываем полицию!" << endl;
            break;    // Цикл полностью закрывается прямо сейчас
        }

        cout << "Ящик №" << i << " проверен. Всё чисто." << endl;
    }
    return 0;
}