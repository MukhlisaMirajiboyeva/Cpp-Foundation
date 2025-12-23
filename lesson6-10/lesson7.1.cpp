#include <iostream>
#include <windows.h>
using namespace std;

int main() { 
    SetConsoleOutputCP (CP_UTF8); /*
    for( int i = 1; i <= 10; i++) {
        cout << " 2 * " << i << " = " << 2*i << endl;
    }
    return 0;

     for ( int i = 5 ; i >= 1; i--) {
        cout << i << "... " << endl;
     }
     
     cout << "pusk" << endl;
     return 0; */

     cout << " прыгаем через ступеньку вниз!" << endl;
     for (int i = 10; i > 0; i= i - 2) {
        cout << " ступенька номер:" << i << endl;
     }
     cout << " приземлись " << endl;
     return 0;
    }