#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main () {
    SetConsoleOutputCP (CP_UTF8);
    double height;
    bool hasticket;
    cout << "ВВедите рост и есть ли у вас билет \n";
    cin >> height >> hasticket;
    if (height >= 1.50 && hasticket == 1) {
        cout << " Приятного отдыха! \n";
    } else { cout << "Извините! вам запрешено. \n";
    }

    int daynumber;
    cout << "Введите день недели ";
    cin >> daynumber;
    if (daynumber == 6 || daynumber == 7) {
        cout << "Всё в скидочной цене! \n";
    } else {
        cout << "Всё в своей цене \n";
    }

    bool door = 1;
    bool signal = 0;
    if (door && !signal) {
        cout << "ТРЕВОГА! Вызывайте полицию! \n";
    } else { cout << " Всё хорошо :) \n";
    }

    int yourDay;
    cout << "Загадайте читло от 1 до 3: ";
    cin >> yourDay;

    switch (yourDay) {
        case 1:
            cout << "Ты счаливчик :) \n";
            break;
        case 2:
            cout << "Ты еблан \n";
            break;
        case 3:
            cout << "Ты меня любишь! ;) \n";
            break;
        default:
            cout << "Тебе сказали от 1 до 3! Читать не умеешь? \n";
            break;
    }
    
    int score;
    int extra;
    cout << " Введите ваш балл и сделанных дополнительных работ. \n";
    cin >> score >> extra;

    if (score >=90 || (score >= 80 && extra > 0)) {
        cout << "Grade: A \n";
    } else {
        cout << "Keep studying ";
    }
    return 0;

}