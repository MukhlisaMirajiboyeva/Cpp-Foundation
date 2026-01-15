#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    string email;
    cout << "Введите email: ";
    cin >> email ;

    int atPos = email.find('@');

    if (atPos != string::npos) {
        string domain = email.substr(atPos + 1);
        cout << "Домен почты: " << domain << endl;
    } else {
        cout << "Ошибка : Некоректный email адрес. " << endl;
    }

    return 0;
}
