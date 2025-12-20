#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP (CP_UTF8);

    bool isRaining = true; // Пусть идет дождь (true)

    if (!isRaining) { // !true = false. Условие НЕВЕРНО.
        cout << "Идем гулять без зонта!"
    }
}