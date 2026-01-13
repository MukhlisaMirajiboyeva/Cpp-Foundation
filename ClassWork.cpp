#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

int main () {
    SetConsoleOutputCP (CP_UTF8);
    double height = 1.70;
    bool hasticket = 1;
    cout << "ВВедите рост и есть ли у вас билет \n";
    if (height >= 1.50 && hasticket == 1) {
        cout << " Приятного отдыха! \n";
    } else { cout << "Извините! вам запрешено. \n";
    }

    int daynumber = 6;
    cout << "Введите день недели ";
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

    int yourDay = 3;
    cout << "Загадайте читло от 1 до 3: ";

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
    
    int score = 81;
    int extra = 2;
    cout << " Введите ваш балл и сделанных дополнительных работ. \n";

    if (score >=90 || (score >= 80 && extra > 0)) {
        cout << "Grade: A \n";
    } else {
        cout << "Keep studying ";
    }


    for ( int i = 1; i <= 10; i ++) {
        cout << "2 * " << i << " = " << 2 * i << endl;
    }

    for ( int i = 5; i >= 1; i --) {
        cout << i << "... " << endl;
    }

    cout << "Let's go! \n";


     for ( int i = 10; i > 0; i -= 2) {
        cout << "Ступенька номер: " << i << endl;
    }

    cout << "Приземлились! " << endl;

    

    int a[5] = {10, 20, 30, 40, 50};
    for (int x : a){
        cout << x << "  \n";
    }

    int b[10] = {5, 12, 3, 21, 8, 1, 9, 4, 7, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += b[i];
    }
    double avarage = (double)sum / 10;

    cout << "summa: " << sum << endl;
    cout << "Arif: " << avarage << endl;
    

    const int n = 5;
    int c[n] = {21, 51, 21 ,45, 78};
    int mx = c[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (c[i] > mx) {
            mx = c[i];
            maxIndex = i;
        }
    }

    cout << "Max: " << mx << endl;
    cout << "Max indeks: " << maxIndex << endl;


    vector<int> v;
    int nam;

    cout << "Введите 5 чисел: " << endl;
    for (int i = 0; i < 5; i++) {
        if (nam % 2 == 0) {
            v.insert(v.begin(), nam);
        } else {
            v .push_back(nam);
        }
    }

    for (int x : v) cout << x << " "; 
    return 0;

}