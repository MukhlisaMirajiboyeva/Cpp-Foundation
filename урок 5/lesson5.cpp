#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP (CP_UTF8);

    bool isWarm = true;    // На улиуе тепло (true)
    bool homeworkDone =false;   // Уроки не сделаны (false)
    
    cout << "ВВедите значение isWarm (1 - тепло, 0 - не тепло ). ";
    cin >> isWarm;
    cout << "Введите значение homeworkDone (1 - уроки сделаны, 0 - уроки не сделаны ).";
    cin >> homeworkDone;
    
    if (isWarm && homeworkDone) { // true И false = false. Условие НЕВЕРНО.
        cout << "Иди гуляй" << endl;
    } else {
        cout << "Сначала сделай уроки или подожди, пока потеплеет." << endl;
    }
    return 0;
}