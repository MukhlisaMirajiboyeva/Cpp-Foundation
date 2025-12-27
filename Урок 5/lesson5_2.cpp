#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP (CP_UTF8);

    bool isRaining = true; // Пусть идет дождь (true)

    if (!isRaining) { // !true = false. Условие НЕВЕРНО.
        cout << "Идем гулять без зонта!" << endl;
    } else {
        cout << "Возьми зонт или останься дома." << endl;
    }

    return 0;
}
// Вывод:
// Возьми зонт или останься дома.