#include <iostream>
#include <windows.h>
using namespace std;

int main () {
    SetConsoleOutputCP (CP_UTF8) ;


    int age = 14;

    if ( age >= 12 ) { // Проверяем: 14 больще или равно 12? Да, это ПРАВДА (true).
        cout << "Можно смотреть мультик! " << endl;
    }
    
    cout << "Программа завершена. " << endl;
    return 0;
}    