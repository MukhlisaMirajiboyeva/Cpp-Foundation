#include <iostream>
#include <string>
#include <windows.h>:
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    bool isWarm = true;        // На улице тепло (true)
    bool homeworkDone = false; // Уроки не сделаны (false)

    if (isWarm && homeworkDone) { // true И false = false. Условие НЕВЕРНО.
        cout << "Иди гуляй!" << endl;
    } else {
        cout << "Сначала сделай уроки или подожди, пока потеплеет." << endl;
    }
    return 0;
}   
// Вывод:
// Сначала сделай уроки или подожди, пока потеплеет.