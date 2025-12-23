#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int score = 45;

    if (score>=50)
    {
        cout << "поздравляю, ты сдал" << endl;

    } else {
        cout << "нужно потренироваться еще" << endl;
    }  
    return 0;
}