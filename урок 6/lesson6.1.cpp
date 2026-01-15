#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int daynumber;
    cout << "Какой день недели сегодня?(1 - 7): ";
    cin >> daynumber;

    if ( daynumber == 6 || daynumber == 7){
        cout << "Ты получишь скидку" << endl;

    } else {
        cout << "Сегодня без скидки" << endl;
    }
    return 0;
}