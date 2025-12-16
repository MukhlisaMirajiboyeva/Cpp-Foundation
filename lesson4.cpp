#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int age = 14;

    if (age>=12)
    {
        cout << "можно смотреть мультик" << endl;

    }
    
    cout << "программа завершена" << endl;
    return 0;
}