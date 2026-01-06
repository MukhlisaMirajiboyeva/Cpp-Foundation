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
    if (height >= 1.40 && hasticket == 1) {
        cout << " Приятного отдыха! \n";
    } else { cout << "Извините! вам запрешено. \n";
    }


    int age;
    bool isSunday;
    cout << "Вводите свой возраст и день недели! \n";
    cin >> age >> isSunday;
    if (age < 7 || isSunday == 1) {
        cout << "Вход бесплатный! \n";
    } else { cout << "Тебе нужно купить билеты! \n";
    }


    int temp = 25;
    bool ecomode = 0;

    if (temp >= 25 && !ecomode) {
        cout << "AC is ON \n";
    } else { cout << " AC is OFF \n";
    }


    int difficulty;
    cout << "Выберите сложность: \n";
    cin >> difficulty;

    switch (difficulty){
        case 1:
            cout << "Easy \n";
            break;
        case 2:
            cout << "Normal \n";
            break;
        case 3:
            cout << "Hard \n";
            break;
    default:
        cout << "Ошибка! Выберите сложность. \n";
        break;
    }

    return 0;

}
    