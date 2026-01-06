#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

int main () {
    SetConsoleOutputCP (CP_UTF8);
    for (int i = 1; i <= 10; i++) {
        if (i == 4) {
            cout << "Попускаем ящик 4! \n";
            continue;
        }
        if (i == 7) {
            cout << "Опасность! Проверка остановлена! \n";
            break;
        }
        cout << "Ящик №" << i << " поверен! \n";
    }
    return 0;
}