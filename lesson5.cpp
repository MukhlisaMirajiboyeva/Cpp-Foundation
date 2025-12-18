#include <iostream>
#include <string>
#include <windows.h>;
using namespace std;
int main() {
    SetConsoleOutputCP (CP_UTF8);

    bool isWarm;
    bool homeworkDone;
    cout << "введите значение iswarm (1-тепло, 0-не тепло ) ";
    cin >> isWarm;
    cout << "введите значение homeworkdone (1-уроки сделаны, 0- уроки не сделаны ) ";
    cin >> homeworkDone;

    if (isWarm && homeworkDone) {
    cout << " иди гуляй " << endl;
    } else {
        cout << " сначала сделай уроки, или подожди пока потеплеет " << endl;
    }
    return 0;
}