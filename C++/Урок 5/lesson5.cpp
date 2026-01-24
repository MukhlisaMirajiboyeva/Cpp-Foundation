#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    bool isWarm;
    bool homeworkDone;

    cout << "На улице тепло? (1 - да, 0 - нет): ";
    cin >> isWarm;
    cout << "Уроки сделаны? (1 - да, 0 - нет): ";
    cin >> homeworkDone;

    // СИТУАЦИЯ 1: Тепло И уроки сделаны
    if (isWarm && homeworkDone) {
        cout << "Иди гуляй!" << endl;
    } 
    
    // СИТУАЦИЯ 2: Тепло И уроки НЕ сделаны
    else if (isWarm && !homeworkDone) {
        cout << "На улице классно, но сначала сделай уроки!" << endl;
    } 
    
    // СИТУАЦИЯ 3: Холодно (НЕ тепло) И уроки сделаны
    else if (!isWarm && homeworkDone) {
        cout << "Ты молодец, всё сделал! Но на улице холодно, лучше посиди дома." << endl;
    } 
    
    // СИТУАЦИЯ 4: Холодно И уроки НЕ сделаны
    else {
        cout << "Погода плохая, и уроки не готовы. Самое время учиться!" << endl;
    }

    return 0;
}