#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale (LC_ALL, "ru_RU.UTF-8");

    bool isWarm ;        // На улице тепло (true)
    bool homeworkDone ; // Уроки не сделаны (false)
    cout << "Введите значение isWarm (1 - тепло, 0 - не тепло): ";
    cin >> isWarm;
    cout << "Введите значение homeworkDone (1 - уроки сделаны, 0 - не сделаны): ";
    cin >> homeworkDone;

    if (isWarm && homeworkDone) { // true И false = false. Условие НЕВЕРНО.
        cout << "Иди гуляй!" << endl;
    } else {
        cout << "Сначала сделай уроки, или подожди, пока потеплеет." << endl;
    }
    return 0;
}